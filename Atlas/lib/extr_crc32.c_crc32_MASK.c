
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;

unsigned long FUNC_0(const unsigned char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 uint32_t VAR_4 = 0;
 uint32_t VAR_5 = VAR_4^0xFFFFFFFF;

 for (VAR_3 =+VAR_2; VAR_2--; ++VAR_1) {
  VAR_5 = ((VAR_5 >> 8) & 0x00FFFFFF) ^ VAR_0[(VAR_5 ^ (*VAR_1)) & 0xFF ];
 }

    return VAR_5^0xFFFFFFFF;;
}
