
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int UINT ;
typedef int UCHAR ;
typedef int INT ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

VOID FUNC_2(
 UCHAR *VAR_0,
 UCHAR *VAR_1,
 ULONG VAR_2,
 ULONG VAR_3,
 UCHAR *VAR_4,
 UINT *VAR_5)
{

 UINT VAR_6;
 UINT VAR_7;
 UINT VAR_8;

 UINT VAR_9;
 UINT VAR_10;
 UINT VAR_11;
 UINT VAR_12;
 UINT VAR_13;
 UINT VAR_14;

 INT VAR_15;
 INT VAR_16;

 VAR_6 = (unsigned int)((VAR_3 >> 16) % 65536);
 VAR_7 = (unsigned int)(VAR_3 % 65536);
 VAR_8 = (unsigned int)(VAR_2 % 65536);


 VAR_5[0] = VAR_7;
 VAR_5[1] = VAR_6;
 VAR_5[2] = (UINT)(VAR_1[0] + (VAR_1[1]*256));
 VAR_5[3] = (UINT)(VAR_1[2] + (VAR_1[3]*256));
 VAR_5[4] = (UINT)(VAR_1[4] + (VAR_1[5]*256));


 for (VAR_15=0; VAR_15<8; VAR_15++)
 {
  VAR_16 = 2*(VAR_15 & 1);
  VAR_5[0] = (VAR_5[0] + FUNC_1( (VAR_5[4] ^ ((256*VAR_0[1+VAR_16]) + VAR_0[VAR_16])) % 65536 )) % 65536;
  VAR_5[1] = (VAR_5[1] + FUNC_1( (VAR_5[0] ^ ((256*VAR_0[5+VAR_16]) + VAR_0[4+VAR_16])) % 65536 )) % 65536;
  VAR_5[2] = (VAR_5[2] + FUNC_1( (VAR_5[1] ^ ((256*VAR_0[9+VAR_16]) + VAR_0[8+VAR_16])) % 65536 )) % 65536;
  VAR_5[3] = (VAR_5[3] + FUNC_1( (VAR_5[2] ^ ((256*VAR_0[13+VAR_16]) + VAR_0[12+VAR_16])) % 65536 )) % 65536;
  VAR_5[4] = (VAR_5[4] + FUNC_1( (VAR_5[3] ^ (((256*VAR_0[1+VAR_16]) + VAR_0[VAR_16]))) % 65536 )) % 65536;
  VAR_5[4] = (VAR_5[4] + VAR_15) % 65536;
 }


 VAR_9 = VAR_5[0];
 VAR_10 = VAR_5[1];
 VAR_11 = VAR_5[2];
 VAR_12 = VAR_5[3];
 VAR_13 = VAR_5[4];
 VAR_14 = (VAR_5[4] + VAR_8) % 65536;


 VAR_9 = VAR_9 + FUNC_1( (VAR_14 ^ ((256*VAR_0[1]) + VAR_0[0])) % 65536);
 VAR_10 = VAR_10 + FUNC_1( (VAR_9 ^ ((256*VAR_0[3]) + VAR_0[2])) % 65536);
 VAR_11 = VAR_11 + FUNC_1( (VAR_10 ^ ((256*VAR_0[5]) + VAR_0[4])) % 65536);
 VAR_12 = VAR_12 + FUNC_1( (VAR_11 ^ ((256*VAR_0[7]) + VAR_0[6])) % 65536);
 VAR_13 = VAR_13 + FUNC_1( (VAR_12 ^ ((256*VAR_0[9]) + VAR_0[8])) % 65536);
 VAR_14 = VAR_14 + FUNC_1( (VAR_13 ^ ((256*VAR_0[11]) + VAR_0[10])) % 65536);

 VAR_9 = VAR_9 + FUNC_0(VAR_14 ^ ((256*VAR_0[13]) + VAR_0[12]));
 VAR_10 = VAR_10 + FUNC_0(VAR_9 ^ ((256*VAR_0[15]) + VAR_0[14]));
 VAR_11 = VAR_11 + FUNC_0(VAR_10);
 VAR_12 = VAR_12 + FUNC_0(VAR_11);
 VAR_13 = VAR_13 + FUNC_0(VAR_12);
 VAR_14 = VAR_14 + FUNC_0(VAR_13);




 VAR_6 = (unsigned int)((VAR_3 >> 16) % 65536);
 VAR_7 = (unsigned int)(VAR_3 % 65536);
 VAR_8 = (unsigned int)(VAR_2 % 65536);

 VAR_4[0] = (VAR_8 >> 8) % 256;
 VAR_4[1] = (((VAR_8 >> 8) % 256) | 0x20) & 0x7f;
 VAR_4[2] = VAR_8 % 256;
 VAR_4[3] = ((VAR_14 ^ ((256*VAR_0[1]) + VAR_0[0])) >> 1) % 256;

 VAR_4[4] = VAR_9 % 256;
 VAR_4[5] = (VAR_9 >> 8) % 256;

 VAR_4[6] = VAR_10 % 256;
 VAR_4[7] = (VAR_10 >> 8) % 256;

 VAR_4[8] = VAR_11 % 256;
 VAR_4[9] = (VAR_11 >> 8) % 256;

 VAR_4[10] = VAR_12 % 256;
 VAR_4[11] = (VAR_12 >> 8) % 256;

 VAR_4[12] = VAR_13 % 256;
 VAR_4[13] = (VAR_13 >> 8) % 256;

 VAR_4[14] = VAR_14 % 256;
 VAR_4[15] = (VAR_14 >> 8) % 256;
}
