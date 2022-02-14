
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_blkcipher {int dummy; } ;
struct TYPE_2__ {int sg; } ;
struct blkcipher_walk {int * page; TYPE_1__ out; TYPE_1__ in; scalar_t__ iv; int * buffer; int total; int nbytes; } ;
struct blkcipher_desc {scalar_t__ info; struct crypto_blkcipher* tfm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct blkcipher_walk*,struct crypto_blkcipher*,unsigned int) ;
 int FUNC_2 (struct blkcipher_desc*,struct blkcipher_walk*) ;
 unsigned int FUNC_3 (struct crypto_blkcipher*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(struct blkcipher_desc *VAR_1,
    struct blkcipher_walk *VAR_2)
{
 struct crypto_blkcipher *VAR_3 = VAR_1->tfm;
 unsigned int VAR_4 = FUNC_3(VAR_3);

 if (FUNC_0(FUNC_4()))
  return -VAR_0;

 VAR_2->nbytes = VAR_2->total;
 if (FUNC_6(!VAR_2->total))
  return 0;

 VAR_2->buffer = ((void*)0);
 VAR_2->iv = VAR_1->info;
 if (FUNC_6(((unsigned long)VAR_2->iv & VAR_4))) {
  int VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_5(&VAR_2->in, VAR_2->in.sg);
 FUNC_5(&VAR_2->out, VAR_2->out.sg);
 VAR_2->page = ((void*)0);

 return FUNC_2(VAR_1, VAR_2);
}
