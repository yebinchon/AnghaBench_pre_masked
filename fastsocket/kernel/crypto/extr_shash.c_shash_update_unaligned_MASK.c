
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct shash_alg {int (* update ) (struct shash_desc*,int const*,unsigned int) ;} ;
struct crypto_shash {int dummy; } ;


 int const* FUNC_0 (int const*,unsigned long) ;
 struct shash_alg* FUNC_1 (struct crypto_shash*) ;
 unsigned long FUNC_2 (struct crypto_shash*) ;
 int FUNC_3 (int const*,int const*,unsigned int) ;
 int FUNC_4 (int const*,int ,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned long) ;
 int FUNC_6 (struct shash_desc*,int const*,unsigned int) ;
 int FUNC_7 (struct shash_desc*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct shash_desc *VAR_0, const u8 *VAR_1,
      unsigned int VAR_2)
{
 struct crypto_shash *VAR_3 = VAR_0->tfm;
 struct shash_alg *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6 = VAR_5 + 1 -
         ((unsigned long)VAR_1 & VAR_5);
 u8 VAR_7[FUNC_5(VAR_6, VAR_5)]
  __attribute__ ((aligned));
 u8 *VAR_8 = FUNC_0(&VAR_7[0], VAR_5 + 1);
 int VAR_9;

 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;

 FUNC_3(VAR_8, VAR_1, VAR_6);
 VAR_9 = VAR_4->update(VAR_0, VAR_8, VAR_6);
 FUNC_4(VAR_8, 0, VAR_6);

 return VAR_9 ?:
        VAR_4->update(VAR_0, VAR_1 + VAR_6, VAR_2 - VAR_6);
}
