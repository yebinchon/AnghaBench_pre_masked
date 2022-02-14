
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_authenc_ctx {int reqoff; struct crypto_ahash* auth; } ;
struct crypto_ahash {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {int complete; int cryptlen; int sg; int * tail; } ;
struct ahash_request {int dummy; } ;
struct aead_request {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int * FUNC_1 (int) ;
 struct authenc_request_ctx* FUNC_2 (struct aead_request*) ;
 unsigned int FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct ahash_request*,unsigned int,int ,struct aead_request*) ;
 int FUNC_5 (struct ahash_request*,int ,int *,int ) ;
 int FUNC_6 (struct ahash_request*,struct crypto_ahash*) ;
 struct crypto_authenc_ctx* FUNC_7 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_8 (struct aead_request*) ;
 scalar_t__ FUNC_9 (struct crypto_ahash*) ;
 int FUNC_10 (struct ahash_request*) ;

__attribute__((used)) static u8 *FUNC_11(struct aead_request *VAR_0, unsigned int VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_8(VAR_0);
 struct crypto_authenc_ctx *VAR_3 = FUNC_7(VAR_2);
 struct crypto_ahash *VAR_4 = VAR_3->auth;
 struct authenc_request_ctx *VAR_5 = FUNC_2(VAR_0);
 struct ahash_request *VAR_6 = (void *)(VAR_5->tail + VAR_3->reqoff);
 u8 *VAR_7 = VAR_5->tail;
 int VAR_8;

 VAR_7 = (u8 *)FUNC_0((unsigned long)VAR_7 + FUNC_9(VAR_4),
      FUNC_9(VAR_4) + 1);

 FUNC_6(VAR_6, VAR_4);
 FUNC_5(VAR_6, VAR_5->sg, VAR_7,
    VAR_5->cryptlen);
 FUNC_4(VAR_6, FUNC_3(VAR_0) & VAR_1,
       VAR_5->complete, VAR_0);

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8)
  return FUNC_1(VAR_8);

 return VAR_7;
}
