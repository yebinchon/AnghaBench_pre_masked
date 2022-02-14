
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_spawn {int dummy; } ;
struct crypto_instance {int dummy; } ;
struct crypto_alg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_instance* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct crypto_instance*) ;
 struct crypto_instance* FUNC_2 (char const*,struct crypto_alg*,int ) ;
 int FUNC_3 (struct crypto_spawn*,struct crypto_alg*,struct crypto_instance*,int) ;
 struct crypto_spawn* FUNC_4 (struct crypto_instance*) ;
 int FUNC_5 (struct crypto_instance*) ;

struct crypto_instance *FUNC_6(const char *VAR_2,
           struct crypto_alg *VAR_3)
{
 struct crypto_instance *VAR_4;
 struct crypto_spawn *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_2, VAR_3, 0);
 if (FUNC_1(VAR_4))
  goto out;

 VAR_5 = FUNC_4(VAR_4);
 VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_4,
    VAR_1 | VAR_0);

 if (VAR_6)
  goto err_free_inst;

 return VAR_4;

err_free_inst:
 FUNC_5(VAR_4);
 VAR_4 = FUNC_0(VAR_6);

out:
 return VAR_4;
}
