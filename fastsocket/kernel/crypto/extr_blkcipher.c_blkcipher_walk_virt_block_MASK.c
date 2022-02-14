
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkcipher_walk {unsigned int blocksize; int flags; } ;
struct blkcipher_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct blkcipher_desc*,struct blkcipher_walk*) ;

int FUNC_1(struct blkcipher_desc *VAR_1,
         struct blkcipher_walk *VAR_2,
         unsigned int VAR_3)
{
 VAR_2->flags &= ~VAR_0;
 VAR_2->blocksize = VAR_3;
 return FUNC_0(VAR_1, VAR_2);
}
