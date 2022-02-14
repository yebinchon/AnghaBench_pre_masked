
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {unsigned int offset; unsigned int length; } ;
struct page {int dummy; } ;
struct hash_desc {int flags; int tfm; } ;
struct crypto_tfm {TYPE_2__* __crt_alg; } ;
struct TYPE_3__ {int (* dia_update ) (struct crypto_tfm*,char*,unsigned int) ;} ;
struct TYPE_4__ {TYPE_1__ cra_digest; } ;


 scalar_t__ VAR_0 ;
 struct crypto_tfm* FUNC_0 (int ) ;
 char* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (char*,int ) ;
 unsigned int FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 struct scatterlist* FUNC_6 (struct scatterlist*) ;
 struct page* FUNC_7 (struct scatterlist*) ;
 int FUNC_8 (struct crypto_tfm*,char*,unsigned int) ;
 int FUNC_9 (struct crypto_tfm*,char*,unsigned int) ;
 scalar_t__ FUNC_10 (unsigned int) ;

__attribute__((used)) static int FUNC_11(struct hash_desc *VAR_1,
     struct scatterlist *VAR_2, unsigned int VAR_3)
{
 struct crypto_tfm *VAR_4 = FUNC_0(VAR_1->tfm);
 unsigned int VAR_5 = FUNC_3(VAR_4);

 if (!VAR_3)
  return 0;

 for (;;) {
  struct page *VAR_6 = FUNC_7(VAR_2);
  unsigned int VAR_7 = VAR_2->offset;
  unsigned int VAR_8 = VAR_2->length;

  if (FUNC_10(VAR_8 > VAR_3))
   VAR_8 = VAR_3;
  VAR_3 -= VAR_8;

  do {
   unsigned int VAR_9 = FUNC_5(VAR_8, ((unsigned int)
          (VAR_0)) -
          VAR_7);
   char *VAR_10 = FUNC_1(VAR_6, 0);
   char *VAR_11 = VAR_10 + VAR_7;

   if (FUNC_10(VAR_7 & VAR_5)) {
    unsigned int VAR_12 =
     VAR_5 + 1 - (VAR_7 & VAR_5);
    VAR_12 = FUNC_5(VAR_12, VAR_9);
    VAR_4->__crt_alg->cra_digest.dia_update(VAR_4, VAR_11,
              VAR_12);
    VAR_11 += VAR_12;
    VAR_9 -= VAR_12;
    VAR_8 -= VAR_12;
   }
   VAR_4->__crt_alg->cra_digest.dia_update(VAR_4, VAR_11,
             VAR_9);
   FUNC_2(VAR_10, 0);
   FUNC_4(VAR_1->flags);
   VAR_7 = 0;
   VAR_6++;
   VAR_8 -= VAR_9;
  } while (VAR_8 > 0);

  if (!VAR_3)
   break;
  VAR_2 = FUNC_6(VAR_2);
 }

 return 0;
}
