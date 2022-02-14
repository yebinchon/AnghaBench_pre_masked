
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct crypto_aes_ctx {int* key_enc; int key_length; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 struct crypto_aes_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int*,int*,int const*) ;
 int FUNC_3 (int*,int*,int const*) ;
 int FUNC_4 (int const) ;

__attribute__((used)) static void FUNC_5(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 const struct crypto_aes_ctx *VAR_3 = FUNC_1(VAR_0);
 const __le32 *VAR_4 = (const __le32 *)VAR_2;
 __le32 *VAR_5 = (__le32 *)VAR_1;
 u32 VAR_6[4], VAR_7[4];
 const u32 *VAR_8 = VAR_3->key_enc + 4;
 const int VAR_9 = VAR_3->key_length;

 VAR_6[0] = FUNC_4(VAR_4[0]) ^ VAR_3->key_enc[0];
 VAR_6[1] = FUNC_4(VAR_4[1]) ^ VAR_3->key_enc[1];
 VAR_6[2] = FUNC_4(VAR_4[2]) ^ VAR_3->key_enc[2];
 VAR_6[3] = FUNC_4(VAR_4[3]) ^ VAR_3->key_enc[3];

 if (VAR_9 > 24) {
  FUNC_3(VAR_7, VAR_6, VAR_8);
  FUNC_3(VAR_6, VAR_7, VAR_8);
 }

 if (VAR_9 > 16) {
  FUNC_3(VAR_7, VAR_6, VAR_8);
  FUNC_3(VAR_6, VAR_7, VAR_8);
 }

 FUNC_3(VAR_7, VAR_6, VAR_8);
 FUNC_3(VAR_6, VAR_7, VAR_8);
 FUNC_3(VAR_7, VAR_6, VAR_8);
 FUNC_3(VAR_6, VAR_7, VAR_8);
 FUNC_3(VAR_7, VAR_6, VAR_8);
 FUNC_3(VAR_6, VAR_7, VAR_8);
 FUNC_3(VAR_7, VAR_6, VAR_8);
 FUNC_3(VAR_6, VAR_7, VAR_8);
 FUNC_3(VAR_7, VAR_6, VAR_8);
 FUNC_2(VAR_6, VAR_7, VAR_8);

 VAR_5[0] = FUNC_0(VAR_6[0]);
 VAR_5[1] = FUNC_0(VAR_6[1]);
 VAR_5[2] = FUNC_0(VAR_6[2]);
 VAR_5[3] = FUNC_0(VAR_6[3]);
}
