
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtattr {int dummy; } ;
struct crypto_attr_type {int type; int mask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_attr_type*) ;
 int FUNC_1 (struct crypto_attr_type*) ;
 struct crypto_attr_type* FUNC_2 (struct rtattr**) ;

int FUNC_3(struct rtattr **VAR_1, u32 VAR_2)
{
 struct crypto_attr_type *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 if ((VAR_3->type ^ VAR_2) & VAR_3->mask)
  return -VAR_0;

 return 0;
}
