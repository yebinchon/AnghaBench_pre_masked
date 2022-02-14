
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union string_list_elem_attr {scalar_t__ i; } ;
struct string_list {TYPE_1__* elems; } ;
typedef int new_path ;
typedef int new_label ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,int ,char,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,char*,unsigned int,size_t,size_t,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct string_list*,int ,union string_list_elem_attr) ;
 int FUNC_7 (struct string_list*) ;
 int FUNC_8 (char*,int,struct string_list*,char*) ;
 struct string_list* FUNC_9 () ;
 struct string_list* FUNC_10 (char const*,char*) ;
 int FUNC_11 (char*,char*,int) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(const char *VAR_3,
      const char *VAR_4, unsigned VAR_5, size_t VAR_6, size_t VAR_7)
{
   union string_list_elem_attr VAR_8;
   char VAR_9[VAR_2];
   char VAR_10[VAR_2];
   int VAR_11 = -1;
   char *VAR_12 = ((void*)0);
   int VAR_13 = 0;
   struct string_list *VAR_14 = ((void*)0);
   struct string_list *VAR_15 = ((void*)0);

   if (!VAR_4)
      return FUNC_4();

   VAR_9[0] = VAR_10[0] = '\0';

   VAR_14 = FUNC_10(VAR_4, "|");

   if (!VAR_14)
      goto end;

   VAR_15 = FUNC_9();
   if (!VAR_15)
      goto end;






   VAR_8.i = 0;

   VAR_13 += FUNC_12(VAR_14->elems[1].data) + 1;
   FUNC_6(VAR_15, VAR_14->elems[1].data, VAR_8);

   VAR_13 += FUNC_12(VAR_14->elems[2].data) + 1;
   FUNC_6(VAR_15, VAR_14->elems[2].data, VAR_8);

   VAR_12 = (char*)FUNC_0(VAR_13, sizeof(char));

   if (!VAR_12)
      goto end;

   FUNC_8(VAR_12, VAR_13, VAR_15, "|");
   FUNC_11(VAR_10, VAR_12, sizeof(VAR_10));

   FUNC_1(VAR_9,
         FUNC_5(VAR_1),
         VAR_14->elems[0].data, '_',
         sizeof(VAR_9));

   VAR_11 = FUNC_3(VAR_10, ((void*)0),
         VAR_9, VAR_5, VAR_6, VAR_7,
         VAR_0);

end:
   if (VAR_12)
      FUNC_2(VAR_12);
   if (VAR_14)
      FUNC_7(VAR_14);
   if (VAR_15)
      FUNC_7(VAR_15);

   return VAR_11;
}
