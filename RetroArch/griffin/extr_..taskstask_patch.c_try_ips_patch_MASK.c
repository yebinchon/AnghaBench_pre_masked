
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int **,int *,char*,char const*,int ,void*,scalar_t__) ;
 int FUNC_1 (char const*,void**,scalar_t__*) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static bool FUNC_5(bool VAR_1,
      const char *VAR_2, uint8_t **VAR_3, ssize_t *VAR_4)
{
   if (VAR_1 && !FUNC_4(VAR_2))
      if (FUNC_3(VAR_2))
      {
         int64_t VAR_5;
         bool VAR_6 = 0;
         void *VAR_7 = ((void*)0);

         if (!FUNC_1(VAR_2, &VAR_7, &VAR_5))
            return 0;

         if (VAR_5 >= 0)
         {
            VAR_6 = FUNC_0(
                  VAR_3, VAR_4, "IPS", VAR_2,
                  VAR_0, VAR_7, VAR_5);
         }

         if (VAR_7)
            FUNC_2(VAR_7);
         return VAR_6;
      }
   return 0;
}
