
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_givcrypt_request {int dummy; } ;
struct crypto_async_request {struct skcipher_givcrypt_request* data; } ;


 int FUNC_0 (struct skcipher_givcrypt_request*,int) ;
 int FUNC_1 (struct skcipher_givcrypt_request*,int) ;

__attribute__((used)) static void FUNC_2(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct skcipher_givcrypt_request *VAR_2 = VAR_0->data;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_1);
}
