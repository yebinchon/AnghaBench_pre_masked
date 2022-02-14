
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int fddiSMTBypassPresent; } ;
struct TYPE_3__ {int sas; } ;
struct s_smc {TYPE_2__ mib; TYPE_1__ s; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct s_smc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct s_smc*,int *) ;

void FUNC_4(struct s_smc *VAR_5, u_char *VAR_6)
{
 FUNC_1(VAR_5) ;
 FUNC_3(VAR_5,VAR_6) ;

 if (!(FUNC_2(FUNC_0(VAR_0)) & VAR_1))
  VAR_5->s.sas = VAR_4 ;
 else
  VAR_5->s.sas = VAR_3 ;

 if (!(FUNC_2(FUNC_0(VAR_0)) & VAR_2))
  VAR_5->mib.fddiSMTBypassPresent = 0 ;

 else
  VAR_5->mib.fddiSMTBypassPresent = 1 ;

}
