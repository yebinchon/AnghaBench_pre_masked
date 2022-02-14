
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_alg {int (* setkey ) (struct crypto_shash*,int *,unsigned int) ;} ;
struct crypto_shash {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct shash_alg* FUNC_1 (struct crypto_shash*) ;
 unsigned long FUNC_2 (struct crypto_shash*) ;
 int * FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,unsigned int) ;
 int FUNC_6 (struct crypto_shash*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_shash *VAR_3, const u8 *VAR_4,
      unsigned int VAR_5)
{
 struct shash_alg *VAR_6 = FUNC_1(VAR_3);
 unsigned long VAR_7 = FUNC_2(VAR_3);
 unsigned long VAR_8;
 u8 *VAR_9, *VAR_10;
 int VAR_11;

 VAR_8 = VAR_5 + (VAR_7 & ~(VAR_0 - 1));
 VAR_9 = FUNC_3(VAR_8, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = (u8 *)FUNC_0((unsigned long)VAR_9, VAR_7 + 1);
 FUNC_5(VAR_10, VAR_4, VAR_5);
 VAR_11 = VAR_6->setkey(VAR_3, VAR_10, VAR_5);
 FUNC_4(VAR_9);
 return VAR_11;
}
