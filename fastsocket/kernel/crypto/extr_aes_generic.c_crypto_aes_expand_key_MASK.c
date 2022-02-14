
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_aes_ctx {unsigned int key_length; int* key_dec; int* key_enc; } ;
typedef int __le32 ;





 int VAR_0 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

int FUNC_6(struct crypto_aes_ctx *VAR_1, const u8 *VAR_2,
  unsigned int VAR_3)
{
 const __le32 *VAR_4 = (const __le32 *)VAR_2;
 u32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_3 != 130 && VAR_3 != 129 &&
   VAR_3 != 128)
  return -VAR_0;

 VAR_1->key_length = VAR_3;

 VAR_1->key_dec[VAR_3 + 24] = VAR_1->key_enc[0] = FUNC_1(VAR_4[0]);
 VAR_1->key_dec[VAR_3 + 25] = VAR_1->key_enc[1] = FUNC_1(VAR_4[1]);
 VAR_1->key_dec[VAR_3 + 26] = VAR_1->key_enc[2] = FUNC_1(VAR_4[2]);
 VAR_1->key_dec[VAR_3 + 27] = VAR_1->key_enc[3] = FUNC_1(VAR_4[3]);

 switch (VAR_3) {
 case 130:
  VAR_6 = VAR_1->key_enc[3];
  for (VAR_5 = 0; VAR_5 < 10; ++VAR_5)
   FUNC_2(VAR_5);
  break;

 case 129:
  VAR_1->key_enc[4] = FUNC_1(VAR_4[4]);
  VAR_6 = VAR_1->key_enc[5] = FUNC_1(VAR_4[5]);
  for (VAR_5 = 0; VAR_5 < 8; ++VAR_5)
   FUNC_3(VAR_5);
  break;

 case 128:
  VAR_1->key_enc[4] = FUNC_1(VAR_4[4]);
  VAR_1->key_enc[5] = FUNC_1(VAR_4[5]);
  VAR_1->key_enc[6] = FUNC_1(VAR_4[6]);
  VAR_6 = VAR_1->key_enc[7] = FUNC_1(VAR_4[7]);
  for (VAR_5 = 0; VAR_5 < 6; ++VAR_5)
   FUNC_4(VAR_5);
  FUNC_5(VAR_5);
  break;
 }

 VAR_1->key_dec[0] = VAR_1->key_enc[VAR_3 + 24];
 VAR_1->key_dec[1] = VAR_1->key_enc[VAR_3 + 25];
 VAR_1->key_dec[2] = VAR_1->key_enc[VAR_3 + 26];
 VAR_1->key_dec[3] = VAR_1->key_enc[VAR_3 + 27];

 for (VAR_5 = 4; VAR_5 < VAR_3 + 24; ++VAR_5) {
  VAR_10 = VAR_3 + 24 - (VAR_5 & ~3) + (VAR_5 & 3);
  FUNC_0(VAR_1->key_dec[VAR_10], VAR_1->key_enc[VAR_5]);
 }
 return 0;
}
