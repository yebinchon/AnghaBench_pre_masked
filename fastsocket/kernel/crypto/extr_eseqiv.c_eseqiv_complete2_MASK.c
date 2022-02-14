
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_givcrypt_request {int giv; } ;
struct eseqiv_request_ctx {scalar_t__ tail; } ;
struct crypto_ablkcipher {int dummy; } ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct eseqiv_request_ctx* FUNC_4 (struct skcipher_givcrypt_request*) ;
 struct crypto_ablkcipher* FUNC_5 (struct skcipher_givcrypt_request*) ;

__attribute__((used)) static void FUNC_6(struct skcipher_givcrypt_request *VAR_0)
{
 struct crypto_ablkcipher *VAR_1 = FUNC_5(VAR_0);
 struct eseqiv_request_ctx *VAR_2 = FUNC_4(VAR_0);

 FUNC_3(VAR_0->giv, FUNC_0((u8 *)VAR_2->tail,
    FUNC_1(VAR_1) + 1),
        FUNC_2(VAR_1));
}
