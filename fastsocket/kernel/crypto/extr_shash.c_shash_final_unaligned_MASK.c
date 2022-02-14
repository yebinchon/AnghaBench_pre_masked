
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct shash_alg {int (* final ) (struct shash_desc*,int *) ;} ;
struct crypto_shash {int dummy; } ;


 int * FUNC_0 (int *,unsigned long) ;
 struct shash_alg* FUNC_1 (struct crypto_shash*) ;
 unsigned long FUNC_2 (struct crypto_shash*) ;
 unsigned int FUNC_3 (struct crypto_shash*) ;
 int FUNC_4 (int *,int *,unsigned int) ;
 int FUNC_5 (int *,int ,unsigned int) ;
 int FUNC_6 (unsigned int,unsigned long) ;
 int FUNC_7 (struct shash_desc*,int *) ;

__attribute__((used)) static int FUNC_8(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct crypto_shash *VAR_2 = VAR_0->tfm;
 unsigned long VAR_3 = FUNC_2(VAR_2);
 struct shash_alg *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5 = FUNC_3(VAR_2);
 u8 VAR_6[FUNC_6(VAR_5, VAR_3)]
  __attribute__ ((aligned));
 u8 *VAR_7 = FUNC_0(&VAR_6[0], VAR_3 + 1);
 int VAR_8;

 VAR_8 = VAR_4->final(VAR_0, VAR_7);
 if (VAR_8)
  goto out;

 FUNC_4(VAR_1, VAR_7, VAR_5);

out:
 FUNC_5(VAR_7, 0, VAR_5);
 return VAR_8;
}
