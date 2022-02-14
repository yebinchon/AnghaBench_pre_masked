
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fullpath ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,char const**,int *,int *,int *) ;
 int FUNC_2 (char*,char const*,char const*,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2,
      const char *VAR_3, unsigned VAR_4, size_t VAR_5, size_t VAR_6)
{
   char VAR_7[VAR_1];
   const char *VAR_8 = ((void*)0);
   file_list_t *VAR_9 = FUNC_3(0);

   FUNC_1(VAR_9, &VAR_8, ((void*)0), ((void*)0), ((void*)0));

   VAR_7[0] = '\0';

   if (!FUNC_4(VAR_8))
      FUNC_2(VAR_7, VAR_8, VAR_2,
            sizeof(VAR_7));

   return FUNC_0(VAR_7, VAR_0);
}
