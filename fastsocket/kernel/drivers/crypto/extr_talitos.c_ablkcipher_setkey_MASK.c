
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct talitos_ctx {unsigned int keylen; int key; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_alg {unsigned int min_keysize; unsigned int max_keysize; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct ablkcipher_alg* FUNC_0 (struct crypto_ablkcipher*) ;
 struct talitos_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*,int ) ;
 int FUNC_3 (int *,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_3,
        const u8 *VAR_4, unsigned int VAR_5)
{
 struct talitos_ctx *VAR_6 = FUNC_1(VAR_3);
 struct ablkcipher_alg *VAR_7 = FUNC_0(VAR_3);

 if (VAR_5 > VAR_2)
  goto badkey;

 if (VAR_5 < VAR_7->min_keysize || VAR_5 > VAR_7->max_keysize)
  goto badkey;

 FUNC_3(&VAR_6->key, VAR_4, VAR_5);
 VAR_6->keylen = VAR_5;

 return 0;

badkey:
 FUNC_2(VAR_3, VAR_0);
 return -VAR_1;
}
