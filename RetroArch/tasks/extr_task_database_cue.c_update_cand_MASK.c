
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;


 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static bool FUNC_1(int64_t *VAR_0, int64_t *VAR_1,
                        uint64_t *VAR_2, char *VAR_3, uint64_t *VAR_4,
                        uint64_t *VAR_5, char *VAR_6, uint64_t VAR_7)
{
   if (*VAR_0 != -1)
   {
      if ((uint64_t)(*VAR_1 - *VAR_0) > *VAR_2)
      {
         *VAR_2 = *VAR_1 - *VAR_0;
         FUNC_0(VAR_6, VAR_3, (size_t)VAR_7);
         *VAR_4 = *VAR_0;
         *VAR_5 = *VAR_2;
         *VAR_0 = -1;
         return 1;
      }
      *VAR_0 = -1;
   }
   return 0;
}
