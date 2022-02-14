
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_smc {struct s_phy* y; } ;
struct s_phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct s_smc*,struct s_phy*) ;

void FUNC_1(struct s_smc *VAR_1)
{
 struct s_phy *VAR_2 ;
 int VAR_3 ;

 for ( VAR_3 = 0,VAR_2 = VAR_1->y ; VAR_3 < VAR_0; VAR_3++, VAR_2++ ) {

  FUNC_0 (VAR_1,VAR_2);
 }
}
