
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct hash_desc {int flags; int tfm; } ;
struct crypto_hash_walk {unsigned int total; int flags; struct scatterlist* sg; int alignmask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_hash_walk*) ;

int FUNC_2(struct hash_desc *VAR_0,
      struct crypto_hash_walk *VAR_1,
      struct scatterlist *VAR_2, unsigned int VAR_3)
{
 VAR_1->total = VAR_3;

 if (!VAR_1->total)
  return 0;

 VAR_1->alignmask = FUNC_0(VAR_0->tfm);
 VAR_1->sg = VAR_2;
 VAR_1->flags = VAR_0->flags;

 return FUNC_1(VAR_1);
}
