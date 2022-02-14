
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkcipher_walk {int blocksize; int flags; } ;
struct blkcipher_desc {int tfm; } ;


 int VAR_0 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct blkcipher_desc *VAR_1,
   struct blkcipher_walk *VAR_2)
{
 VAR_2->flags &= ~VAR_0;
 VAR_2->blocksize = FUNC_1(VAR_1->tfm);
 return FUNC_0(VAR_1, VAR_2);
}
