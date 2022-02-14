
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_list_t ;
typedef int core_option_manager_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int *,unsigned int) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int **) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_5(file_list_t* VAR_6,
      unsigned *VAR_7, unsigned VAR_8, unsigned VAR_9,
      const char *VAR_10,
      char *VAR_11, size_t VAR_12,
      const char *VAR_13,
      char *VAR_14, size_t VAR_15)
{
   core_option_manager_t *VAR_16 = ((void*)0);
   const char *VAR_17 = ((void*)0);

   *VAR_11 = '\0';
   *VAR_7 = 19;

   if (FUNC_2(VAR_5, &VAR_16))
   {
      VAR_17 = FUNC_0(VAR_16,
            VAR_8 - VAR_4);

      FUNC_4(VAR_11, "", VAR_12);

      if (VAR_17)
      {
         if (FUNC_3(VAR_17, FUNC_1(VAR_1)))
            VAR_17 = FUNC_1(VAR_3);
         else if (FUNC_3(VAR_17, FUNC_1(VAR_0)))
            VAR_17 = FUNC_1(VAR_2);
         FUNC_4(VAR_11, VAR_17, VAR_12);
      }
   }

   FUNC_4(VAR_14, VAR_13, VAR_15);
}
