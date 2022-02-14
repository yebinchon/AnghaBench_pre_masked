
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hash_alg {int (* setkey ) (struct crypto_hash*,int *,unsigned int) ;} ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct crypto_hash {int dummy; } ;
struct TYPE_2__ {struct hash_alg cra_hash; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct crypto_hash*) ;
 struct crypto_tfm* FUNC_2 (struct crypto_hash*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int *,int const*,unsigned int) ;
 int FUNC_6 (int *,int ,unsigned int) ;
 int FUNC_7 (struct crypto_hash*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct crypto_hash *VAR_2, const u8 *VAR_3,
                   unsigned int VAR_4)
{
 struct crypto_tfm *VAR_5 = FUNC_2(VAR_2);
 struct hash_alg *VAR_6 = &VAR_5->__crt_alg->cra_hash;
 unsigned long VAR_7 = FUNC_1(VAR_2);
 int VAR_8;
 u8 *VAR_9, *VAR_10;
 unsigned long VAR_11;

 VAR_11 = VAR_4 + VAR_7;
 VAR_9 = FUNC_4(VAR_11, VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = (u8 *)FUNC_0((unsigned long)VAR_9, VAR_7 + 1);
 FUNC_5(VAR_10, VAR_3, VAR_4);
 VAR_8 = VAR_6->setkey(VAR_2, VAR_10, VAR_4);
 FUNC_6(VAR_10, 0, VAR_4);
 FUNC_3(VAR_9);
 return VAR_8;
}
