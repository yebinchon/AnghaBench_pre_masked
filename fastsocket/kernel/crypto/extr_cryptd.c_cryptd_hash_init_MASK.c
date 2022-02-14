
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shash_desc {int flags; struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;
struct crypto_async_request {int tfm; } ;
struct cryptd_hash_request_ctx {int (* complete ) (TYPE_1__*,int) ;struct shash_desc desc; } ;
struct cryptd_hash_ctx {struct crypto_shash* child; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct ahash_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct cryptd_hash_request_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct shash_desc*) ;
 struct cryptd_hash_ctx* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct crypto_async_request *VAR_2, int VAR_3)
{
 struct cryptd_hash_ctx *VAR_4 = FUNC_3(VAR_2->tfm);
 struct crypto_shash *VAR_5 = VAR_4->child;
 struct ahash_request *VAR_6 = FUNC_0(VAR_2);
 struct cryptd_hash_request_ctx *VAR_7 = FUNC_1(VAR_6);
 struct shash_desc *VAR_8 = &VAR_7->desc;

 if (FUNC_7(VAR_3 == -VAR_1))
  goto out;

 VAR_8->tfm = VAR_5;
 VAR_8->flags = VAR_0;

 VAR_3 = FUNC_2(VAR_8);

 VAR_6->base.complete = VAR_7->complete;

out:
 FUNC_4();
 VAR_7->complete(&VAR_6->base, VAR_3);
 FUNC_5();
}
