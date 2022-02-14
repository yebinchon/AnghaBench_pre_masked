
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct talitos_edesc {int dummy; } ;
struct talitos_ctx {int dev; } ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ablkcipher_request {TYPE_1__ base; int nbytes; int dst; int src; } ;


 struct talitos_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_1 (struct ablkcipher_request*) ;
 struct talitos_edesc* FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static struct talitos_edesc *FUNC_3(struct ablkcipher_request *
          VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_1(VAR_0);
 struct talitos_ctx *VAR_2 = FUNC_0(VAR_1);

 return FUNC_2(VAR_2->dev, VAR_0->src, VAR_0->dst, VAR_0->nbytes,
       0, 0, VAR_0->base.flags);
}
