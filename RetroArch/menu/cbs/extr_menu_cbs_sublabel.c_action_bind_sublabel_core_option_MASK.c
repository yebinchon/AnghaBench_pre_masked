
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_list_t ;
typedef int core_option_manager_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_4(
      file_list_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      const char *VAR_5, const char *VAR_6,
      char *VAR_7, size_t VAR_8)
{
   core_option_manager_t *VAR_9 = ((void*)0);
   const char *VAR_10 = ((void*)0);

   if (!FUNC_1(VAR_1, &VAR_9))
      return 0;

   VAR_10 = FUNC_0(VAR_9, VAR_3 - VAR_0);

   if (!FUNC_2(VAR_10))
      FUNC_3(VAR_7, VAR_10, VAR_8);

   return 0;
}
