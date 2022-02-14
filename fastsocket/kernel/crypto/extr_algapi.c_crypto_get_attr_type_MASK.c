
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtattr {scalar_t__ rta_type; } ;
struct crypto_attr_type {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_attr_type* FUNC_0 (int ) ;
 struct crypto_attr_type* FUNC_1 (struct rtattr*) ;
 int FUNC_2 (struct rtattr*) ;

struct crypto_attr_type *FUNC_3(struct rtattr **VAR_3)
{
 struct rtattr *VAR_4 = VAR_3[0];
 struct crypto_attr_type *VAR_5;

 if (!VAR_4)
  return FUNC_0(-VAR_2);
 if (FUNC_2(VAR_4) < sizeof(*VAR_5))
  return FUNC_0(-VAR_1);
 if (VAR_4->rta_type != VAR_0)
  return FUNC_0(-VAR_1);

 VAR_5 = FUNC_1(VAR_4);

 return VAR_5;
}
