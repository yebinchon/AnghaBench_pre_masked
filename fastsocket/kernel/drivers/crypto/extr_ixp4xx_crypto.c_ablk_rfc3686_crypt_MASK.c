
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixp_ctx {int * nonce; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int * info; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ablkcipher_request*,int) ;
 int FUNC_1 (int) ;
 struct ixp_ctx* FUNC_2 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5(struct ablkcipher_request *VAR_3)
{
 struct crypto_ablkcipher *VAR_4 = FUNC_3(VAR_3);
 struct ixp_ctx *VAR_5 = FUNC_2(VAR_4);
 u8 VAR_6[VAR_0];
 u8 *VAR_7 = VAR_3->info;
 int VAR_8;


        FUNC_4(VAR_6, VAR_5->nonce, VAR_2);
 FUNC_4(VAR_6 + VAR_2, VAR_7, VAR_1);


 *(__be32 *)(VAR_6 + VAR_2 + VAR_1) =
  FUNC_1(1);

 VAR_3->info = VAR_6;
 VAR_8 = FUNC_0(VAR_3, 1);
 VAR_3->info = VAR_7;
 return VAR_8;
}
