
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int nsid ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int,int const**,size_t*,int*) ;

void FUNC_2(const u8 *VAR_1, u8 *VAR_2)
{
 const u8 *VAR_3[2];
 size_t VAR_4[2];
 u8 VAR_5[VAR_0];
 u8 VAR_6[16] = {
  0x52, 0x64, 0x80, 0xf8,
  0xc9, 0x9b,
  0x4b, 0xe5,
  0xa6, 0x55,
  0x58, 0xed, 0x5f, 0x5d, 0x60, 0x84
 };

 VAR_3[0] = VAR_6;
 VAR_4[0] = sizeof(VAR_6);
 VAR_3[1] = VAR_1;
 VAR_4[1] = 6;
 FUNC_1(2, VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_2, VAR_5, 16);


 VAR_2[6] = (5 << 4) | (VAR_2[6] & 0x0f);


 VAR_2[8] = 0x80 | (VAR_2[8] & 0x3f);
}
