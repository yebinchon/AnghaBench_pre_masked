
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int SRes ;
typedef int CSzData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static SRes FUNC_2(CSzData *VAR_1, uint32_t *VAR_2)
{
   int VAR_3;
   *VAR_2 = 0;
   for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
   {
      uint8_t VAR_4;
      FUNC_0(FUNC_1(VAR_1, &VAR_4));
      *VAR_2 |= ((uint32_t)(VAR_4) << (8 * VAR_3));
   }
   return VAR_0;
}
