
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmac_ctx_t {int __vmac_ctx; } ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 struct vmac_ctx_t* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (int const*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0, const u8 *VAR_1,
  unsigned int VAR_2)
{
 struct crypto_shash *VAR_3 = VAR_0->tfm;
 struct vmac_ctx_t *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_1, VAR_2, &VAR_4->__vmac_ctx);

 return 0;
}
