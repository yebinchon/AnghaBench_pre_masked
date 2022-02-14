
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_blkcipher {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct cryptd_blkcipher_ctx {struct crypto_blkcipher* child; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cryptd_blkcipher_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*,int) ;
 int FUNC_3 (struct crypto_blkcipher*,int) ;
 int FUNC_4 (struct crypto_blkcipher*) ;
 int FUNC_5 (struct crypto_blkcipher*,int) ;
 int FUNC_6 (struct crypto_blkcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_ablkcipher *VAR_2,
       const u8 *VAR_3, unsigned int VAR_4)
{
 struct cryptd_blkcipher_ctx *VAR_5 = FUNC_0(VAR_2);
 struct crypto_blkcipher *VAR_6 = VAR_5->child;
 int VAR_7;

 FUNC_3(VAR_6, VAR_0);
 FUNC_5(VAR_6, FUNC_1(VAR_2) &
       VAR_0);
 VAR_7 = FUNC_6(VAR_6, VAR_3, VAR_4);
 FUNC_2(VAR_2, FUNC_4(VAR_6) &
         VAR_1);
 return VAR_7;
}
