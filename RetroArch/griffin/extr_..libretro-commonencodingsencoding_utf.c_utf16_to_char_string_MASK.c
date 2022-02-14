
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (scalar_t__**,size_t*,int const*) ;

bool FUNC_3(const uint16_t *VAR_0, char *VAR_1, size_t VAR_2)
{
   size_t VAR_3 = 0;
   uint8_t *VAR_4 = ((void*)0);
   bool VAR_5 = FUNC_2(&VAR_4, &VAR_3, VAR_0);

   if (VAR_5)
   {
      VAR_4[VAR_3] = 0;
      FUNC_1(VAR_1, (const char*)VAR_4, VAR_2);
   }

   FUNC_0(VAR_4);
   VAR_4 = ((void*)0);

   return VAR_5;
}
