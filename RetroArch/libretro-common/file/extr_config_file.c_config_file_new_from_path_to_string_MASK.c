
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ int64_t ;
typedef int config_file_t ;


 int * FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,void**,scalar_t__*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (char const*) ;

config_file_t *FUNC_4(const char *VAR_0)
{
   int64_t VAR_1 = 0;
   uint8_t *VAR_2 = ((void*)0);
   config_file_t *VAR_3 = ((void*)0);

   if (FUNC_3(VAR_0))
   {
      if (FUNC_1(VAR_0, (void**)&VAR_2, &VAR_1))
      {
         if (VAR_1 >= 0)
            VAR_3 = FUNC_0((const char*)VAR_2, VAR_0);
         if ((void*)VAR_2)
            FUNC_2((void*)VAR_2);
      }
   }

   return VAR_3;
}
