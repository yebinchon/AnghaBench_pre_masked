
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_blkcipher {int dummy; } ;
struct blkcipher_walk {int nbytes; int flags; unsigned int total; scalar_t__ iv; scalar_t__ buffer; scalar_t__ page; int out; int in; } ;
struct blkcipher_desc {scalar_t__ info; int flags; struct crypto_blkcipher* tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct blkcipher_walk*,unsigned int) ;
 unsigned int FUNC_2 (struct crypto_blkcipher*,struct blkcipher_walk*,unsigned int) ;
 int FUNC_3 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 int FUNC_4 (struct crypto_blkcipher*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int *,int,unsigned int) ;

int FUNC_11(struct blkcipher_desc *VAR_2,
   struct blkcipher_walk *VAR_3, int VAR_4)
{
 struct crypto_blkcipher *VAR_5 = VAR_2->tfm;
 unsigned int VAR_6 = 0;

 if (FUNC_8(VAR_4 >= 0)) {
  unsigned int VAR_7 = VAR_3->nbytes - VAR_4;

  if (FUNC_8(!(VAR_3->flags & VAR_0)))
   VAR_7 = FUNC_1(VAR_3, VAR_7);
  else if (FUNC_0(VAR_4)) {
   VAR_4 = -VAR_1;
   goto err;
  } else
   VAR_7 = FUNC_2(VAR_5, VAR_3, VAR_7);

  VAR_6 = VAR_3->total - VAR_7;
  VAR_4 = 0;
 }

 FUNC_10(&VAR_3->in, 0, VAR_6);
 FUNC_10(&VAR_3->out, 1, VAR_6);

err:
 VAR_3->total = VAR_6;
 VAR_3->nbytes = VAR_6;

 if (VAR_6) {
  FUNC_5(VAR_2->flags);
  return FUNC_3(VAR_2, VAR_3);
 }

 if (VAR_3->iv != VAR_2->info)
  FUNC_9(VAR_2->info, VAR_3->iv, FUNC_4(VAR_5));
 if (VAR_3->buffer != VAR_3->page)
  FUNC_7(VAR_3->buffer);
 if (VAR_3->page)
  FUNC_6((unsigned long)VAR_3->page);

 return VAR_4;
}
