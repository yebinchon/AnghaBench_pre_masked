
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct blkcipher_alg {int (* setkey ) (struct crypto_tfm*,int *,unsigned int) ;} ;
struct TYPE_2__ {struct blkcipher_alg cra_blkcipher; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int *,int const*,unsigned int) ;
 int FUNC_5 (int *,int ,unsigned int) ;
 int FUNC_6 (struct crypto_tfm*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_2, const u8 *VAR_3,
       unsigned int VAR_4)
{
 struct blkcipher_alg *VAR_5 = &VAR_2->__crt_alg->cra_blkcipher;
 unsigned long VAR_6 = FUNC_1(VAR_2);
 int VAR_7;
 u8 *VAR_8, *VAR_9;
 unsigned long VAR_10;

 VAR_10 = VAR_4 + VAR_6;
 VAR_8 = FUNC_3(VAR_10, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = (u8 *)FUNC_0((unsigned long)VAR_8, VAR_6 + 1);
 FUNC_4(VAR_9, VAR_3, VAR_4);
 VAR_7 = VAR_5->setkey(VAR_2, VAR_9, VAR_4);
 FUNC_5(VAR_9, 0, VAR_4);
 FUNC_2(VAR_8);
 return VAR_7;
}
