
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct s390_aes_ctx {unsigned int key_len; int key; } ;
struct crypto_tfm {int crt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s390_aes_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct crypto_tfm*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_2, const u8 *VAR_3,
         unsigned int VAR_4)
{
 struct s390_aes_ctx *VAR_5 = FUNC_0(VAR_2);
 u32 *VAR_6 = &VAR_2->crt_flags;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7 < 0) {
  *VAR_6 |= VAR_0;
  return -VAR_1;
 }

 VAR_5->key_len = VAR_4;
 if (!VAR_7) {
  FUNC_1(VAR_5->key, VAR_3, VAR_4);
  return 0;
 }

 return FUNC_3(VAR_2, VAR_3, VAR_4);
}
