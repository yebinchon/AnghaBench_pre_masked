
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ctx {int dummy; } ;
struct crypto_alg {int cra_ctxsize; scalar_t__ cra_alignmask; int cra_priority; int cra_init; int cra_module; } ;
struct talitos_crypto_alg {struct device* dev; int desc_hdr_template; struct crypto_alg crypto_alg; } ;
struct talitos_alg_template {int desc_hdr_template; struct crypto_alg alg; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct talitos_crypto_alg* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct talitos_crypto_alg* FUNC_1 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static struct talitos_crypto_alg *FUNC_2(struct device *VAR_5,
          struct talitos_alg_template
                 *VAR_6)
{
 struct talitos_crypto_alg *VAR_7;
 struct crypto_alg *VAR_8;

 VAR_7 = FUNC_1(sizeof(struct talitos_crypto_alg), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = &VAR_7->crypto_alg;
 *VAR_8 = VAR_6->alg;

 VAR_8->cra_module = VAR_3;
 VAR_8->cra_init = VAR_4;
 VAR_8->cra_priority = VAR_2;
 VAR_8->cra_alignmask = 0;
 VAR_8->cra_ctxsize = sizeof(struct talitos_ctx);

 VAR_7->desc_hdr_template = VAR_6->desc_hdr_template;
 VAR_7->dev = VAR_5;

 return VAR_7;
}
