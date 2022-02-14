
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipw_priv*) ;
 int FUNC_1 (struct ipw_priv*) ;
 scalar_t__ FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_2)
{
 int VAR_3 = VAR_2->status & VAR_0;

 VAR_2->status |= VAR_0;

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_2);



 if (!VAR_3)
  VAR_2->status &= ~VAR_0;


 FUNC_1(VAR_2);


 VAR_2->status &= VAR_1 | VAR_0;
 FUNC_5(VAR_2->net_dev);

 FUNC_4(VAR_2);

 FUNC_3(VAR_2);
}
