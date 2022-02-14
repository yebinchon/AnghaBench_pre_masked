
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
 struct ipw_priv *VAR_3 = VAR_2;
 if (!(VAR_3->status & (VAR_0 | VAR_1)))
  return 0;
 FUNC_0(VAR_2, 0);
 FUNC_1(VAR_3->net_dev);
 return 1;
}
