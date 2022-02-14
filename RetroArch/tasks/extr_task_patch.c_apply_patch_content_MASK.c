
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int ssize_t ;
typedef int (* patch_func_t ) (int const*,int ,int *,int ,int **,int *) ;
typedef int int64_t ;
typedef enum patch_error { ____Placeholder_patch_error } patch_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char const*,int ,unsigned int) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(uint8_t **VAR_4,
      ssize_t *VAR_5, const char *VAR_6, const char *VAR_7,
      patch_func_t VAR_8, void *VAR_9, int64_t VAR_10)
{
   enum patch_error VAR_11 = VAR_3;
   ssize_t VAR_12 = *VAR_5;
   uint8_t *VAR_13 = *VAR_4;
   uint64_t VAR_14 = 0;
   uint8_t *VAR_15 = ((void*)0);

   FUNC_1("Found %s file in \"%s\", attempting to patch ...\n",
         VAR_6, VAR_7);

   VAR_11 = VAR_8((const uint8_t*)VAR_9, VAR_10, VAR_13,
         VAR_12, &VAR_15, &VAR_14);

   if (VAR_11 == VAR_2)
   {
      FUNC_2(VAR_13);
      *VAR_4 = VAR_15;
      *VAR_5 = VAR_14;
   }
   else
      FUNC_0("%s %s: %s #%u\n",
            FUNC_3(VAR_1),
            VAR_6,
            FUNC_3(VAR_0),
            (unsigned)VAR_11);

   return 1;
}
