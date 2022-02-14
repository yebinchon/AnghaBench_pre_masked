
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdr; } ;
struct talitos_edesc {TYPE_1__ desc; } ;
struct talitos_ctx {int desc_hdr_template; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct talitos_edesc*) ;
 int FUNC_1 (struct talitos_edesc*) ;
 int VAR_1 ;
 struct talitos_edesc* FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (struct talitos_edesc*,struct ablkcipher_request*,int *,int ) ;
 struct talitos_ctx* FUNC_4 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_5 (struct ablkcipher_request*) ;

__attribute__((used)) static int FUNC_6(struct ablkcipher_request *VAR_2)
{
 struct crypto_ablkcipher *VAR_3 = FUNC_5(VAR_2);
 struct talitos_ctx *VAR_4 = FUNC_4(VAR_3);
 struct talitos_edesc *VAR_5;


 VAR_5 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);


 VAR_5->desc.hdr = VAR_4->desc_hdr_template | VAR_0;

 return FUNC_3(VAR_5, VAR_2, ((void*)0), VAR_1);
}
