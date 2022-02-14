
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdr; } ;
struct talitos_edesc {TYPE_1__ desc; } ;
struct talitos_ctx {int desc_hdr_template; int iv; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;
struct aead_givcrypt_request {int seq; scalar_t__ giv; struct aead_request areq; } ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct talitos_edesc*) ;
 int FUNC_1 (struct talitos_edesc*) ;
 struct talitos_edesc* FUNC_2 (struct aead_request*,int ) ;
 int FUNC_3 (int ) ;
 struct talitos_ctx* FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_6 (struct aead_request*) ;
 int FUNC_7 (struct talitos_edesc*,struct aead_request*,scalar_t__,int ,int ) ;
 int VAR_1 ;
 int FUNC_8 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct aead_givcrypt_request *VAR_2)
{
 struct aead_request *VAR_3 = &VAR_2->areq;
 struct crypto_aead *VAR_4 = FUNC_6(VAR_3);
 struct talitos_ctx *VAR_5 = FUNC_4(VAR_4);
 struct talitos_edesc *VAR_6;


 VAR_6 = FUNC_2(VAR_3, 0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);


 VAR_6->desc.hdr = VAR_5->desc_hdr_template | VAR_0;

 FUNC_8(VAR_2->giv, VAR_5->iv, FUNC_5(VAR_4));

 *(__be64 *)VAR_2->giv ^= FUNC_3(VAR_2->seq);

 return FUNC_7(VAR_6, VAR_3, VAR_2->giv, VAR_2->seq,
    VAR_1);
}
