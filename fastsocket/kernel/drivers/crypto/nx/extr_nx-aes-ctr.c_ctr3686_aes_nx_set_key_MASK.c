
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int iv; } ;
struct TYPE_4__ {TYPE_1__ ctr; } ;
struct nx_crypto_ctx {TYPE_2__ priv; } ;
struct crypto_tfm {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct nx_crypto_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*,int const*,unsigned int) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_2,
      const u8 *VAR_3,
      unsigned int VAR_4)
{
 struct nx_crypto_ctx *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4 < VAR_0)
  return -VAR_1;

 FUNC_2(VAR_5->priv.ctr.iv,
        VAR_3 + VAR_4 - VAR_0,
        VAR_0);

 VAR_4 -= VAR_0;

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
