
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptd_hash_request_ctx {int desc; } ;
struct ahash_request {int dummy; } ;


 struct cryptd_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int *,void const*) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0, const void *VAR_1)
{
 struct cryptd_hash_request_ctx *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_2->desc, VAR_1);
}
