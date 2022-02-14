
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_hash_walk {int flags; int sg; int alignmask; int total; } ;
struct TYPE_2__ {int flags; } ;
struct ahash_request {TYPE_1__ base; int src; int nbytes; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct crypto_hash_walk*) ;

int FUNC_3(struct ahash_request *VAR_0,
      struct crypto_hash_walk *VAR_1)
{
 VAR_1->total = VAR_0->nbytes;

 if (!VAR_1->total)
  return 0;

 VAR_1->alignmask = FUNC_0(FUNC_1(VAR_0));
 VAR_1->sg = VAR_0->src;
 VAR_1->flags = VAR_0->base.flags;

 return FUNC_2(VAR_1);
}
