
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ VC_CONTAINER_FOURCC_T ;



__attribute__((used)) static void FUNC_0(VC_CONTAINER_FOURCC_T VAR_0, uint16_t *VAR_1, uint16_t *VAR_2)
{
   *VAR_2 = (((uint8_t*)&VAR_0)[0] - 48) * 10 + ((uint8_t*)&VAR_0)[1] - 48;
   *VAR_1 = (uint32_t)VAR_0 >> 16;
}
