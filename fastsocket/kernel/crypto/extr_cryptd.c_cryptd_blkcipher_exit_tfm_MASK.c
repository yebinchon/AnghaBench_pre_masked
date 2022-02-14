
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct cryptd_blkcipher_ctx {int child; } ;


 int FUNC_0 (int ) ;
 struct cryptd_blkcipher_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct cryptd_blkcipher_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->child);
}
