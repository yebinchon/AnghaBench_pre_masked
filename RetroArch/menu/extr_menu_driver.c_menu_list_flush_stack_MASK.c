
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int menu_list_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const**,char const**,unsigned int*,size_t*) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (char const*,char const*,unsigned int,unsigned int) ;
 int * FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,size_t,size_t*,int) ;

__attribute__((used)) static void FUNC_5(menu_list_t *VAR_2,
      size_t VAR_3, const char *VAR_4, unsigned VAR_5)
{
   bool VAR_6 = 0;
   const char *VAR_7 = ((void*)0);
   const char *VAR_8 = ((void*)0);
   unsigned VAR_9 = 0;
   size_t VAR_10 = 0;
   file_list_t *VAR_11 = FUNC_3(VAR_2, (unsigned)VAR_3);

   FUNC_1(VAR_0, &VAR_6);
   FUNC_0(VAR_11,
         &VAR_7, &VAR_8, &VAR_9, &VAR_10);

   while (FUNC_2(
            VAR_4, VAR_8, VAR_9, VAR_5) != 0)
   {
      size_t VAR_12 = VAR_1;

      if (!FUNC_4(VAR_2, VAR_3, &VAR_12, 1))
         break;

      VAR_1 = VAR_12;

      VAR_11 = FUNC_3(VAR_2, (unsigned)VAR_3);

      FUNC_0(VAR_11,
            &VAR_7, &VAR_8, &VAR_9, &VAR_10);
   }
}
