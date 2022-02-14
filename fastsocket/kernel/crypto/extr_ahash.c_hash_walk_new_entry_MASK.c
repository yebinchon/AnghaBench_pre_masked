
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ length; int offset; } ;
struct crypto_hash_walk {scalar_t__ entrylen; scalar_t__ total; int offset; int pg; struct scatterlist* sg; } ;


 int FUNC_0 (struct crypto_hash_walk*) ;
 int FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_2(struct crypto_hash_walk *VAR_0)
{
 struct scatterlist *VAR_1;

 VAR_1 = VAR_0->sg;
 VAR_0->pg = FUNC_1(VAR_1);
 VAR_0->offset = VAR_1->offset;
 VAR_0->entrylen = VAR_1->length;

 if (VAR_0->entrylen > VAR_0->total)
  VAR_0->entrylen = VAR_0->total;
 VAR_0->total -= VAR_0->entrylen;

 return FUNC_0(VAR_0);
}
