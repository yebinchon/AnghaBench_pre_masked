
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_blkcipher {int dummy; } ;
struct crypto_async_request {int tfm; } ;
struct cryptd_blkcipher_ctx {struct crypto_blkcipher* child; } ;
struct TYPE_2__ {int decrypt; } ;


 int FUNC_0 (struct crypto_async_request*) ;
 int FUNC_1 (int ,struct crypto_blkcipher*,int,int ) ;
 TYPE_1__* FUNC_2 (struct crypto_blkcipher*) ;
 struct cryptd_blkcipher_ctx* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct cryptd_blkcipher_ctx *VAR_2 = FUNC_3(VAR_0->tfm);
 struct crypto_blkcipher *VAR_3 = VAR_2->child;

 FUNC_1(FUNC_0(VAR_0), VAR_3, VAR_1,
          FUNC_2(VAR_3)->decrypt);
}
