
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_givcrypt_request {int giv; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct aead_request {int dummy; } ;


 struct skcipher_givcrypt_request* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int) ;
 int FUNC_2 (struct aead_request*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct crypto_async_request *VAR_0,
        int VAR_1)
{
 struct aead_request *VAR_2 = VAR_0->data;

 if (!VAR_1) {
  struct skcipher_givcrypt_request *VAR_3 = FUNC_0(VAR_2);

  VAR_1 = FUNC_2(VAR_2, VAR_3->giv, 0);
 }

 FUNC_1(VAR_2, VAR_1);
}
