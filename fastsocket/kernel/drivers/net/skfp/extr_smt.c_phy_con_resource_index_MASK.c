
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fddiSMTCF_State; } ;
struct s_smc {TYPE_1__ mib; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 int FUNC_1 (struct s_smc*,int ) ;
 int FUNC_2 (struct s_smc*,int ) ;

__attribute__((used)) static int FUNC_3(struct s_smc *VAR_1, int VAR_2)
{



 switch (VAR_1->mib.fddiSMTCF_State) {
 case 128 :
  return(VAR_2 == VAR_0 ? 3 : 2) ;
 case 132 :
  return(VAR_2 == VAR_0 ? 1 : 3) ;
 case 130 :
  return(VAR_2 == VAR_0 ? 3 : 1) ;
 case 129 :
  return(VAR_2 == VAR_0 ? 2 : 3) ;
 case 131 :
  return(2) ;
 }
 return(VAR_2) ;

}
