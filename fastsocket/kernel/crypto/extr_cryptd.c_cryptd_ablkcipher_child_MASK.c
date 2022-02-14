
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_blkcipher {int dummy; } ;
struct cryptd_blkcipher_ctx {struct crypto_blkcipher* child; } ;
struct cryptd_ablkcipher {int base; } ;


 struct cryptd_blkcipher_ctx* FUNC_0 (int *) ;

struct crypto_blkcipher *FUNC_1(struct cryptd_ablkcipher *VAR_0)
{
 struct cryptd_blkcipher_ctx *VAR_1 = FUNC_0(&VAR_0->base);
 return VAR_1->child;
}
