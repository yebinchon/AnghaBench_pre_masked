
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int inst; } ;
struct crypto_skcipher_spawn {TYPE_1__ base; } ;
struct crypto_alg {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct crypto_alg*) ;
 int FUNC_2 (TYPE_1__*,struct crypto_alg*,int ,int ) ;
 struct crypto_alg* FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (struct crypto_alg*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct crypto_skcipher_spawn *VAR_0, const char *VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 struct crypto_alg *VAR_4;
 int VAR_5;

 VAR_2 = FUNC_6(VAR_2);
 VAR_3 = FUNC_5(VAR_3);

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_2(&VAR_0->base, VAR_4, VAR_0->base.inst, VAR_3);
 FUNC_4(VAR_4);
 return VAR_5;
}
