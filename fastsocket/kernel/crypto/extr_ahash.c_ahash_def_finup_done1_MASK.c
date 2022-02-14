
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {struct ahash_request* data; } ;
struct ahash_request_priv {void* data; int (* complete ) (void*,int) ;} ;
struct ahash_request {struct ahash_request_priv* priv; } ;
typedef int (* crypto_completion_t ) (void*,int) ;


 int FUNC_0 (struct ahash_request*,int) ;

__attribute__((used)) static void FUNC_1(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct ahash_request *VAR_2 = VAR_0->data;
 struct ahash_request_priv *VAR_3 = VAR_2->priv;
 crypto_completion_t VAR_4 = VAR_3->complete;
 void *VAR_5 = VAR_3->data;

 VAR_1 = FUNC_0(VAR_2, VAR_1);

 VAR_4(VAR_5, VAR_1);
}
