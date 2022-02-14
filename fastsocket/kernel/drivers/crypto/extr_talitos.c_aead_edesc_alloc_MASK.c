
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct talitos_edesc {int dummy; } ;
struct talitos_ctx {int authsize; int dev; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct aead_request {TYPE_1__ base; int cryptlen; int dst; int src; } ;


 struct talitos_ctx* FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 struct talitos_edesc* FUNC_2 (int ,int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static struct talitos_edesc *FUNC_3(struct aead_request *VAR_0,
           int VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_1(VAR_0);
 struct talitos_ctx *VAR_3 = FUNC_0(VAR_2);

 return FUNC_2(VAR_3->dev, VAR_0->src, VAR_0->dst,
       VAR_0->cryptlen, VAR_3->authsize, VAR_1,
       VAR_0->base.flags);
}
