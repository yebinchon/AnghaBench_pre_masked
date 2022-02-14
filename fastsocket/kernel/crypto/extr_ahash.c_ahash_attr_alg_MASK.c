
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtattr {int dummy; } ;
struct hash_alg_common {int dummy; } ;
struct crypto_alg {int dummy; } ;


 struct hash_alg_common* FUNC_0 (struct crypto_alg*) ;
 scalar_t__ FUNC_1 (struct crypto_alg*) ;
 struct hash_alg_common* FUNC_2 (struct crypto_alg*) ;
 int VAR_0 ;
 struct crypto_alg* FUNC_3 (struct rtattr*,int *,int ,int ) ;

struct hash_alg_common *FUNC_4(struct rtattr *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct crypto_alg *VAR_4;

 VAR_4 = FUNC_3(VAR_1, &VAR_0, VAR_2, VAR_3);
 return FUNC_1(VAR_4) ? FUNC_0(VAR_4) : FUNC_2(VAR_4);
}
