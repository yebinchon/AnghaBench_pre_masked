
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct cryptd_hash_request_ctx {struct shash_desc desc; } ;
struct ahash_request {int dummy; } ;


 struct cryptd_hash_request_ctx* FUNC_0 (struct ahash_request*) ;

struct shash_desc *FUNC_1(struct ahash_request *VAR_0)
{
 struct cryptd_hash_request_ctx *VAR_1 = FUNC_0(VAR_0);
 return &VAR_1->desc;
}
