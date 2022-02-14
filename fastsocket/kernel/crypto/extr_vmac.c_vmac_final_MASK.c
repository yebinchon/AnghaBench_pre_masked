
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmac_t ;
typedef int u8 ;
struct vmac_ctx_t {int __vmac_ctx; } ;
struct vmac_ctx {int dummy; } ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 struct vmac_ctx_t* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int *,int *,struct vmac_ctx_t*) ;

__attribute__((used)) static int FUNC_4(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct crypto_shash *VAR_2 = VAR_0->tfm;
 struct vmac_ctx_t *VAR_3 = FUNC_0(VAR_2);
 vmac_t VAR_4;
 u8 VAR_5[16] = {};

 VAR_4 = FUNC_3(((void*)0), 0, VAR_5, ((void*)0), VAR_3);
 FUNC_1(VAR_1, &VAR_4, sizeof(vmac_t));
 FUNC_2(&VAR_4, 0, sizeof(vmac_t));
 FUNC_2(&VAR_3->__vmac_ctx, 0, sizeof(struct vmac_ctx));
 return 0;
}
