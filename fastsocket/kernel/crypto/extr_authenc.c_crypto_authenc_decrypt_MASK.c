
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_authenc_ctx {int enc; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int data; int complete; } ;
struct aead_request {unsigned int cryptlen; int dst; int src; TYPE_1__ base; int * iv; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ablkcipher_request*,int ,int ,int ) ;
 int FUNC_1 (struct ablkcipher_request*,int ,int ,unsigned int,int *) ;
 int FUNC_2 (struct ablkcipher_request*,int ) ;
 struct ablkcipher_request* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct ablkcipher_request*) ;
 unsigned int FUNC_6 (struct crypto_aead*) ;
 struct crypto_authenc_ctx* FUNC_7 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_8 (struct aead_request*) ;
 int FUNC_9 (struct aead_request*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct aead_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_8(VAR_1);
 struct crypto_authenc_ctx *VAR_3 = FUNC_7(VAR_2);
 struct ablkcipher_request *VAR_4 = FUNC_3(VAR_1);
 unsigned int VAR_5 = VAR_1->cryptlen;
 unsigned int VAR_6 = FUNC_6(VAR_2);
 u8 *VAR_7 = VAR_1->iv;
 int VAR_8;

 if (VAR_5 < VAR_6)
  return -VAR_0;
 VAR_5 -= VAR_6;

 VAR_8 = FUNC_9(VAR_1, VAR_7, VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_4, VAR_3->enc);
 FUNC_0(VAR_4, FUNC_4(VAR_1),
     VAR_1->base.complete, VAR_1->base.data);
 FUNC_1(VAR_4, VAR_1->src, VAR_1->dst, VAR_5, VAR_7);

 return FUNC_5(VAR_4);
}
