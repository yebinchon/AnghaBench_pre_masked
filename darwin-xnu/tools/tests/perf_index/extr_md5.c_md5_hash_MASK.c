
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int,int*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;

void FUNC_4(uint8_t *VAR_0, uint64_t VAR_1, uint32_t *VAR_2) {
 VAR_2[0] = 0x67452301;
 VAR_2[1] = 0xEFCDAB89;
 VAR_2[2] = 0x98BADCFE;
 VAR_2[3] = 0x10325476;

 FUNC_1(VAR_2, VAR_1/64, VAR_0);

 uint32_t VAR_3[16];
 uint8_t *VAR_4 = (uint8_t*)VAR_3;

 int VAR_5 = VAR_1 % 64;
 FUNC_2(VAR_4, VAR_0 + VAR_1-VAR_5, VAR_5);

 VAR_4[VAR_5] = 0x80;
 VAR_5++;
 if (64 - VAR_5 >= 8)
  FUNC_0(VAR_4 + VAR_5, 56 - VAR_5);
 else {
  FUNC_3(VAR_4 + VAR_5, 0, 64 - VAR_5);
  FUNC_1(VAR_2, 1, VAR_3);
  FUNC_0(VAR_3, 56);
 }
 VAR_3[14] = (uint32_t)(VAR_1 << 3);
 VAR_3[15] = (uint32_t)(VAR_1 >> 29);
 FUNC_1(VAR_2, 1, VAR_3);
}
