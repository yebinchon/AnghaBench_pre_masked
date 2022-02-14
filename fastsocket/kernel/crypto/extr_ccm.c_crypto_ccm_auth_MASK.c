
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct crypto_cipher {int dummy; } ;
struct crypto_ccm_req_priv_ctx {scalar_t__ ilen; int * idata; int * odata; } ;
struct crypto_ccm_ctx {struct crypto_cipher* cipher; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int assoclen; struct scatterlist* assoc; } ;


 struct crypto_ccm_ctx* FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 struct crypto_ccm_req_priv_ctx* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct crypto_cipher*,int *,int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,struct aead_request*,unsigned int) ;
 int FUNC_6 (struct crypto_cipher*,struct crypto_ccm_req_priv_ctx*,struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_0, struct scatterlist *VAR_1,
      unsigned int VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_1(VAR_0);
 struct crypto_ccm_ctx *VAR_4 = FUNC_0(VAR_3);
 struct crypto_ccm_req_priv_ctx *VAR_5 = FUNC_2(VAR_0);
 struct crypto_cipher *VAR_6 = VAR_4->cipher;
 unsigned int VAR_7 = VAR_0->assoclen;
 u8 *VAR_8 = VAR_5->odata;
 u8 *VAR_9 = VAR_5->idata;
 int VAR_10;


 VAR_10 = FUNC_5(VAR_8, VAR_0, VAR_2);
 if (VAR_10)
  goto out;


 FUNC_3(VAR_6, VAR_8, VAR_8);


 if (VAR_7) {
  VAR_5->ilen = FUNC_4(VAR_9, VAR_7);
  FUNC_6(VAR_6, VAR_5, VAR_0->assoc, VAR_0->assoclen);
 } else {
  VAR_5->ilen = 0;
 }


 FUNC_6(VAR_6, VAR_5, VAR_1, VAR_2);

out:
 return VAR_10;
}
