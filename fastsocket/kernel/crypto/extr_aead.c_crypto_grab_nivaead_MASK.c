
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct crypto_alg {int dummy; } ;
struct TYPE_2__ {int inst; } ;
struct crypto_aead_spawn {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_2 (char const*,int,int) ;
 int FUNC_3 (TYPE_1__*,struct crypto_alg*,int ,int) ;
 int FUNC_4 (struct crypto_alg*) ;

__attribute__((used)) static int FUNC_5(struct crypto_aead_spawn *VAR_3,
          const char *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct crypto_alg *VAR_7;
 int VAR_8;

 VAR_5 &= ~(VAR_2 | VAR_0);
 VAR_5 |= VAR_1;
 VAR_6 |= VAR_2 | VAR_0;

 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = FUNC_3(&VAR_3->base, VAR_7, VAR_3->base.inst, VAR_6);
 FUNC_4(VAR_7);
 return VAR_8;
}
