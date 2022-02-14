
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int fddiSMTCF_State; } ;
struct s_smc {TYPE_1__ mib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct s_smc*) ;
 int FUNC_1 (struct s_smc*,int ,int ) ;

u_short FUNC_2(struct s_smc *VAR_3, int VAR_4)
{
 FUNC_1(VAR_3,VAR_2,VAR_4 ? VAR_0 : VAR_1) ;
 FUNC_0(VAR_3) ;
 return(VAR_3->mib.fddiSMTCF_State) ;
}
