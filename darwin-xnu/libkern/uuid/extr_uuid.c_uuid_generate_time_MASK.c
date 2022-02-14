
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* uuid_t ;
typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 () ;

void
FUNC_3(uuid_t VAR_0)
{
 uint64_t VAR_1;

 FUNC_0(&VAR_0[10]);
 FUNC_1(&VAR_0[8], 2);

 VAR_1 = FUNC_2();
 VAR_0[0] = (uint8_t)(VAR_1 >> 24);
 VAR_0[1] = (uint8_t)(VAR_1 >> 16);
 VAR_0[2] = (uint8_t)(VAR_1 >> 8);
 VAR_0[3] = (uint8_t)VAR_1;
 VAR_0[4] = (uint8_t)(VAR_1 >> 40);
 VAR_0[5] = (uint8_t)(VAR_1 >> 32);
 VAR_0[6] = (uint8_t)(VAR_1 >> 56);
 VAR_0[7] = (uint8_t)(VAR_1 >> 48);

 VAR_0[6] = (VAR_0[6] & 0x0F) | 0x10;
 VAR_0[8] = (VAR_0[8] & 0x3F) | 0x80;
}
