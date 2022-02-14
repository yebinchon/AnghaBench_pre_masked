
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lzo_ctx {int lzo_comp_mem; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lzo_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_2)
{
 struct lzo_ctx *VAR_3 = FUNC_0(VAR_2);

 VAR_3->lzo_comp_mem = FUNC_1(VAR_1);
 if (!VAR_3->lzo_comp_mem)
  return -VAR_0;

 return 0;
}
