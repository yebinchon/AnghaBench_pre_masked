
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtattr {int dummy; } ;
struct crypto_type {int dummy; } ;
struct crypto_alg {int dummy; } ;


 struct crypto_alg* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (struct rtattr*) ;
 struct crypto_alg* FUNC_4 (char const*,struct crypto_type const*,int ,int ) ;

struct crypto_alg *FUNC_5(struct rtattr *VAR_0,
        const struct crypto_type *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_0);
 VAR_5 = FUNC_2(VAR_4);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_5);

 return FUNC_4(VAR_4, VAR_1, VAR_2, VAR_3);
}
