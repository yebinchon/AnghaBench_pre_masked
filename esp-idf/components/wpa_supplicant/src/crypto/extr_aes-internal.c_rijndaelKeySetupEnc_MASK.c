
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

int FUNC_10(u32 VAR_0[], const u8 VAR_1[], int VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 VAR_0[0] = FUNC_0(VAR_1 );
 VAR_0[1] = FUNC_0(VAR_1 + 4);
 VAR_0[2] = FUNC_0(VAR_1 + 8);
 VAR_0[3] = FUNC_0(VAR_1 + 12);

 if (VAR_2 == 128) {
  for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
   VAR_4 = VAR_0[3];
   VAR_0[4] = VAR_0[0] ^ FUNC_4(VAR_4) ^ FUNC_6(VAR_4) ^
    FUNC_8(VAR_4) ^ FUNC_3(VAR_4) ^ FUNC_1(VAR_3);
   VAR_0[5] = VAR_0[1] ^ VAR_0[4];
   VAR_0[6] = VAR_0[2] ^ VAR_0[5];
   VAR_0[7] = VAR_0[3] ^ VAR_0[6];
   VAR_0 += 4;
  }
  return 10;
 }

 VAR_0[4] = FUNC_0(VAR_1 + 16);
 VAR_0[5] = FUNC_0(VAR_1 + 20);

 if (VAR_2 == 192) {
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   VAR_4 = VAR_0[5];
   VAR_0[6] = VAR_0[0] ^ FUNC_4(VAR_4) ^ FUNC_6(VAR_4) ^
    FUNC_8(VAR_4) ^ FUNC_3(VAR_4) ^ FUNC_1(VAR_3);
   VAR_0[7] = VAR_0[1] ^ VAR_0[6];
   VAR_0[8] = VAR_0[2] ^ VAR_0[7];
   VAR_0[9] = VAR_0[3] ^ VAR_0[8];
   if (VAR_3 == 7)
    return 12;
   VAR_0[10] = VAR_0[4] ^ VAR_0[9];
   VAR_0[11] = VAR_0[5] ^ VAR_0[10];
   VAR_0 += 6;
  }
 }

 VAR_0[6] = FUNC_0(VAR_1 + 24);
 VAR_0[7] = FUNC_0(VAR_1 + 28);

 if (VAR_2 == 256) {
  for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
   VAR_4 = VAR_0[7];
   VAR_0[8] = VAR_0[0] ^ FUNC_4(VAR_4) ^ FUNC_6(VAR_4) ^
    FUNC_8(VAR_4) ^ FUNC_3(VAR_4) ^ FUNC_1(VAR_3);
   VAR_0[9] = VAR_0[1] ^ VAR_0[8];
   VAR_0[10] = VAR_0[2] ^ VAR_0[9];
   VAR_0[11] = VAR_0[3] ^ VAR_0[10];
   if (VAR_3 == 6)
    return 14;
   VAR_4 = VAR_0[11];
   VAR_0[12] = VAR_0[4] ^ FUNC_2(VAR_4) ^ FUNC_5(VAR_4) ^
    FUNC_7(VAR_4) ^ FUNC_9(VAR_4);
   VAR_0[13] = VAR_0[5] ^ VAR_0[12];
   VAR_0[14] = VAR_0[6] ^ VAR_0[13];
   VAR_0[15] = VAR_0[7] ^ VAR_0[14];
   VAR_0 += 8;
  }
 }

 return -1;
}
