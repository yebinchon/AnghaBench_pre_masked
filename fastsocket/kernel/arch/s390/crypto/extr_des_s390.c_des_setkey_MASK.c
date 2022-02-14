
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int crt_flags; } ;
struct crypt_s390_des_ctx {int key; } ;


 int FUNC_0 (int const*,unsigned int,int *) ;
 struct crypt_s390_des_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_0, const u8 *VAR_1,
        unsigned int VAR_2)
{
 struct crypt_s390_des_ctx *VAR_3 = FUNC_1(VAR_0);
 u32 *VAR_4 = &VAR_0->crt_flags;
 int VAR_5;


 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_5 == 0)
  FUNC_2(VAR_3->key, VAR_1, VAR_2);
 return VAR_5;
}
