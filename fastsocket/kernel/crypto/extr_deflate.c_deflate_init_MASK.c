
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deflate_ctx {int dummy; } ;
struct crypto_tfm {int dummy; } ;


 struct deflate_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct deflate_ctx*) ;
 int FUNC_2 (struct deflate_ctx*) ;
 int FUNC_3 (struct deflate_ctx*) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_0)
{
 struct deflate_ctx *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_1(VAR_1);
out:
 return VAR_2;
}
