
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {int dummy; } ;
struct crypto_template {int dummy; } ;
struct crypto_attr_type {int type; int mask; } ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_attr_type*) ;
 int FUNC_1 (struct crypto_attr_type*) ;
 int FUNC_2 (struct crypto_template*,struct rtattr**,int *) ;
 int FUNC_3 (struct crypto_template*,struct rtattr**,int *) ;
 int FUNC_4 (struct crypto_template*,struct rtattr**,int *) ;
 struct crypto_attr_type* FUNC_5 (struct rtattr**) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct crypto_template *VAR_3, struct rtattr **VAR_4)
{
 struct crypto_attr_type *VAR_5;

 VAR_5 = FUNC_5(VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 switch (VAR_5->type & VAR_5->mask & VAR_0) {
 case 129:
  return FUNC_3(VAR_3, VAR_4, &VAR_2);
 case 128:
  return FUNC_4(VAR_3, VAR_4, &VAR_2);
 case 130:
  return FUNC_2(VAR_3, VAR_4, &VAR_2);
 }

 return -VAR_1;
}
