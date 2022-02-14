
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int size; TYPE_1__* elems; } ;
typedef int elem1 ;
typedef int elem0 ;
struct TYPE_2__ {char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct string_list*) ;
 struct string_list* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_7(const char *VAR_22, const char *VAR_23,
      unsigned VAR_24, char *VAR_25, size_t VAR_26)
{
   if (FUNC_2(VAR_23, FUNC_0(VAR_5)))
      FUNC_6(VAR_25, FUNC_0(VAR_15), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_2)))
      FUNC_6(VAR_25, FUNC_0(VAR_12), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_1)))
      FUNC_6(VAR_25, FUNC_0(VAR_11), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_4)))
      FUNC_6(VAR_25, FUNC_0(VAR_14), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_6)))
      FUNC_6(VAR_25, FUNC_0(VAR_16), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_21)))
      FUNC_6(VAR_25, FUNC_0(VAR_20), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_9)))
      FUNC_6(VAR_25, FUNC_0(VAR_19), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_8)))
      FUNC_6(VAR_25, FUNC_0(VAR_18), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_0)))
      FUNC_6(VAR_25, FUNC_0(VAR_10), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_7)))
      FUNC_6(VAR_25, FUNC_0(VAR_17), VAR_26);
   else if (FUNC_2(VAR_23, FUNC_0(VAR_3)))
      FUNC_6(VAR_25, FUNC_0(VAR_13), VAR_26);
   else
   {
      char VAR_27[255];
      char VAR_28[255];
      struct string_list *VAR_29 = FUNC_4(VAR_23, "|");

      VAR_27[0] = VAR_28[0] = '\0';

      if (VAR_29)
      {
         if (VAR_29->size > 0)
         {
            FUNC_6(VAR_27, VAR_29->elems[0].data, sizeof(VAR_27));
            if (VAR_29->size > 1)
               FUNC_6(VAR_28, VAR_29->elems[1].data, sizeof(VAR_28));
         }
         FUNC_3(VAR_29);
      }

      FUNC_6(VAR_25, VAR_27, VAR_26);

      if (!FUNC_1(VAR_28))
      {
         FUNC_5(VAR_25, " - ", VAR_26);
         FUNC_5(VAR_25, VAR_28, VAR_26);
      }
   }

   return 0;
}
