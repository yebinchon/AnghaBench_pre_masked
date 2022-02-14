
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixp_ctx {int encrypt; int decrypt; int configuring; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct ixp_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_0)
{
 struct ixp_ctx *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_1->configuring, 0);
 VAR_2 = FUNC_3(&VAR_1->encrypt);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_3(&VAR_1->decrypt);
 if (VAR_2) {
  FUNC_2(&VAR_1->encrypt);
 }
 return VAR_2;
}
