
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct authenc_request_ctx {int cryptlen; int sg; int complete; } ;
struct aead_request {int dummy; } ;
typedef int * (* authenc_ahash_t ) (struct aead_request*,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct authenc_request_ctx* FUNC_2 (struct aead_request*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 scalar_t__ FUNC_5 (int *,int *,unsigned int) ;
 int FUNC_6 (int *,int ,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_4,
     authenc_ahash_t VAR_5)
{
 struct crypto_aead *VAR_6 = FUNC_4(VAR_4);
 struct authenc_request_ctx *VAR_7 = FUNC_2(VAR_4);
 u8 *VAR_8;
 u8 *VAR_9;
 unsigned int VAR_10;

 VAR_7->complete = VAR_2;
 VAR_7->complete = VAR_3;

 VAR_8 = VAR_5(VAR_4, VAR_0);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_10 = FUNC_3(VAR_6);
 VAR_9 = VAR_8 + VAR_10;
 FUNC_6(VAR_9, VAR_7->sg, VAR_7->cryptlen,
     VAR_10, 0);
 return FUNC_5(VAR_9, VAR_8, VAR_10) ? -VAR_1: 0;
}
