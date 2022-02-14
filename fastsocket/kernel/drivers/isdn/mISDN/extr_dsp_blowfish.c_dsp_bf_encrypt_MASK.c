
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct dsp {int bf_crypt_pos; size_t* bf_data_in; size_t* bf_crypt_out; int* bf_p; int* bf_s; } ;


 int FUNC_0 (int,int,int) ;
 int* VAR_0 ;

void
FUNC_1(struct dsp *VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5 = VAR_1->bf_crypt_pos;
 u8 *VAR_6 = VAR_1->bf_data_in;
 u8 *VAR_7 = VAR_1->bf_crypt_out;
 u32 *VAR_8 = VAR_1->bf_p;
 u32 *VAR_9 = VAR_1->bf_s;
 u32 VAR_10, VAR_11;
 u32 VAR_12;
 u8 VAR_13;

 while (VAR_4 < VAR_3) {

  if (VAR_5 < 9) {
   VAR_6[VAR_5] = *VAR_2;
   *VAR_2++ = VAR_7[VAR_5++];
   VAR_4++;
   continue;
  }
  VAR_5 = 0;

  VAR_10 = VAR_0[VAR_6[0]];
  VAR_10 = (VAR_10<<7) | VAR_0[VAR_6[1]];
  VAR_10 = (VAR_10<<7) | VAR_0[VAR_6[2]];
  VAR_10 = (VAR_10<<7) | VAR_0[VAR_6[3]];
  VAR_13 = VAR_0[VAR_6[4]];
  VAR_11 = VAR_13;
  VAR_10 = (VAR_10<<4) | (VAR_13>>3);
  VAR_11 = (VAR_11<<7) | VAR_0[VAR_6[5]];
  VAR_11 = (VAR_11<<7) | VAR_0[VAR_6[6]];
  VAR_11 = (VAR_11<<7) | VAR_0[VAR_6[7]];
  VAR_11 = (VAR_11<<7) | VAR_0[VAR_6[8]];
  VAR_11 = (VAR_11<<1) | (VAR_6[0] & 1);




  FUNC_0(VAR_11, VAR_10, 0);
  FUNC_0(VAR_10, VAR_11, 1);
  FUNC_0(VAR_11, VAR_10, 2);
  FUNC_0(VAR_10, VAR_11, 3);
  FUNC_0(VAR_11, VAR_10, 4);
  FUNC_0(VAR_10, VAR_11, 5);
  FUNC_0(VAR_11, VAR_10, 6);
  FUNC_0(VAR_10, VAR_11, 7);
  FUNC_0(VAR_11, VAR_10, 8);
  FUNC_0(VAR_10, VAR_11, 9);
  FUNC_0(VAR_11, VAR_10, 10);
  FUNC_0(VAR_10, VAR_11, 11);
  FUNC_0(VAR_11, VAR_10, 12);
  FUNC_0(VAR_10, VAR_11, 13);
  FUNC_0(VAR_11, VAR_10, 14);
  FUNC_0(VAR_10, VAR_11, 15);
  VAR_10 ^= VAR_8[16];
  VAR_11 ^= VAR_8[17];


  VAR_12 = VAR_10 ^ (VAR_10>>3) ^ (VAR_10>>6) ^ (VAR_10>>9) ^ (VAR_10>>12) ^ (VAR_10>>15)
   ^ (VAR_10>>18) ^ (VAR_10>>21) ^ (VAR_10>>24) ^ (VAR_10>>27) ^ (VAR_10>>30)
   ^ (VAR_11<<2) ^ (VAR_11>>1) ^ (VAR_11>>4) ^ (VAR_11>>7) ^ (VAR_11>>10)
   ^ (VAR_11>>13) ^ (VAR_11>>16) ^ (VAR_11>>19) ^ (VAR_11>>22) ^ (VAR_11>>25)
   ^ (VAR_11>>28) ^ (VAR_11>>31);





  VAR_7[0] = (VAR_10>>25) | 0x80;
  VAR_7[1] = (VAR_10>>18) & 0x7f;
  VAR_7[2] = (VAR_10>>11) & 0x7f;
  VAR_7[3] = (VAR_10>>4) & 0x7f;
  VAR_7[4] = ((VAR_10<<3) & 0x78) | ((VAR_11>>29) & 0x07);
  VAR_7[5] = ((VAR_11>>22) & 0x7f) | ((VAR_12<<5) & 0x80);
  VAR_7[6] = ((VAR_11>>15) & 0x7f) | ((VAR_12<<6) & 0x80);
  VAR_7[7] = ((VAR_11>>8) & 0x7f) | (VAR_12<<7);
  VAR_7[8] = VAR_11;
 }


 VAR_1->bf_crypt_pos = VAR_5;

}
