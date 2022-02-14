
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_async_request {int dummy; } ;
struct cryptd_hash_request_ctx {int (* complete ) (TYPE_1__*,int) ;int desc; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct ahash_request {TYPE_1__ base; } ;


 int VAR_0 ;
 struct ahash_request* FUNC_0 (struct crypto_async_request*) ;
 struct cryptd_hash_request_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct ahash_request*,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct crypto_async_request *VAR_1, int VAR_2)
{
 struct ahash_request *VAR_3 = FUNC_0(VAR_1);
 struct cryptd_hash_request_ctx *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_6(VAR_2 == -VAR_0))
  goto out;

 VAR_2 = FUNC_4(VAR_3, &VAR_4->desc);

 VAR_3->base.complete = VAR_4->complete;

out:
 FUNC_2();
 VAR_4->complete(&VAR_3->base, VAR_2);
 FUNC_3();
}
