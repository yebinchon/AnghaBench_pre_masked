
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
struct TYPE_4__ {int localap_enable; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*,char*) ;
 int * FUNC_3 (char*,int,int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,int,int,int,int *,int ,int ) ;
 int FUNC_9 (scalar_t__,char*,union string_list_elem_attr) ;
 scalar_t__ FUNC_10 () ;
 size_t FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
   char VAR_6[512];
   union string_list_elem_attr VAR_7;
   FILE *VAR_8 = ((void*)0);
   settings_t *VAR_9 = FUNC_0();

   VAR_7.i = VAR_4;
   if (VAR_5)
      FUNC_4(VAR_5);
   VAR_5 = FUNC_10();

   if (FUNC_1())
   {
      FUNC_8(FUNC_5(VAR_2),
            1, 180, 1, ((void*)0), VAR_1,
            VAR_0);
      VAR_9->bools.localap_enable = 0;
      FUNC_2(0, "", "");
   }

   FUNC_6(FUNC_7("connmanctl enable wifi", "r"));

   FUNC_6(FUNC_7("connmanctl scan wifi", "r"));

   FUNC_8(FUNC_5(VAR_3),
         1, 180, 1, ((void*)0), VAR_1,
         VAR_0);

   VAR_8 = FUNC_7("connmanctl services", "r");
   while (FUNC_3 (VAR_6, 512, VAR_8) != ((void*)0))
   {
      size_t VAR_10 = FUNC_11(VAR_6);
      if (VAR_10 > 0 && VAR_6[VAR_10-1] == '\n')
         VAR_6[--VAR_10] = '\0';

      FUNC_9(VAR_5, VAR_6, VAR_7);
   }
   FUNC_6(VAR_8);
}
