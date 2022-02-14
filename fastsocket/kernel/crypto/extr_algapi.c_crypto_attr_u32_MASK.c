
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtattr {scalar_t__ rta_type; } ;
struct crypto_attr_u32 {int num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_attr_u32* FUNC_0 (struct rtattr*) ;
 int FUNC_1 (struct rtattr*) ;

int FUNC_2(struct rtattr *VAR_3, u32 *VAR_4)
{
 struct crypto_attr_u32 *VAR_5;

 if (!VAR_3)
  return -VAR_2;
 if (FUNC_1(VAR_3) < sizeof(*VAR_5))
  return -VAR_1;
 if (VAR_3->rta_type != VAR_0)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_3);
 *VAR_4 = VAR_5->num;

 return 0;
}
