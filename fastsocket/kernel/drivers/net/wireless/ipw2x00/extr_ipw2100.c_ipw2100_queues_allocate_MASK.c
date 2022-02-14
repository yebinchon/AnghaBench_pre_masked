
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipw2100_priv*) ;
 int FUNC_1 (struct ipw2100_priv*) ;
 scalar_t__ FUNC_2 (struct ipw2100_priv*) ;
 int FUNC_3 (struct ipw2100_priv*) ;
 scalar_t__ FUNC_4 (struct ipw2100_priv*) ;
 int FUNC_5 (struct ipw2100_priv*) ;

__attribute__((used)) static int FUNC_6(struct ipw2100_priv *VAR_1)
{
 if (FUNC_4(VAR_1) ||
     FUNC_2(VAR_1) || FUNC_0(VAR_1))
  goto fail;

 return 0;

      fail:
 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 return -VAR_0;
}
