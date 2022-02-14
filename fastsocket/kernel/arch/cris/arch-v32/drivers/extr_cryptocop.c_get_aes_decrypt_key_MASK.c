
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_4(unsigned char *VAR_1, const unsigned char *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5[8];
 u8 VAR_6;
 int VAR_7;
 u8 VAR_8, VAR_9;

 switch (VAR_3){
 case 128:
  VAR_9 = 4;
  VAR_8 = 10;
  break;
 case 192:
  VAR_9 = 6;
  VAR_8 = 12;
  break;
 case 256:
  VAR_9 = 8;
  VAR_8 = 14;
  break;
 default:
  FUNC_3("stream co-processor: bad aes key length in get_aes_decrypt_key\n");
 };



 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7+=1) {
  VAR_5[VAR_7] = FUNC_1(*(u32*)&VAR_2[4*VAR_7]);
 }

 VAR_7 = (int)VAR_9;
 VAR_6 = VAR_7 - 1;
 while (VAR_7 < (4 * (VAR_8 + 2))) {
  VAR_4 = VAR_5[VAR_6];
  if (!(VAR_7 % VAR_9)) {

   VAR_4 = (VAR_4 << 8) | (VAR_4 >> 24);
   VAR_4 = FUNC_0(VAR_4);
   VAR_4 ^= VAR_0[VAR_7/VAR_9 - 1];
  } else if ((VAR_9 > 6) && ((VAR_7 % VAR_9) == 4)) {
   VAR_4 = FUNC_0(VAR_4);
  }
  VAR_6 = (VAR_6 + 1) % VAR_9;
  VAR_4 ^= VAR_5[VAR_6];
  VAR_5[VAR_6] = VAR_4;






  if (VAR_7 >= (4 * VAR_8)) {


   *(u32*)VAR_1 = FUNC_2(VAR_4);
   VAR_1 += 4;
  }
  ++VAR_7;
 }
}
