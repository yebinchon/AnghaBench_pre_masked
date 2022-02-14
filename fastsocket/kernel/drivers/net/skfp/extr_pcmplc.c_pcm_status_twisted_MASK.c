
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sas; } ;
struct s_smc {TYPE_3__* y; TYPE_1__ s; } ;
struct TYPE_6__ {TYPE_2__* mib; scalar_t__ twisted; } ;
struct TYPE_5__ {scalar_t__ fddiPORTPCMState; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_0(struct s_smc *VAR_4)
{
 int VAR_5 = 0 ;
 if (VAR_4->s.sas != VAR_3)
  return(0) ;
 if (VAR_4->y[VAR_0].twisted && (VAR_4->y[VAR_0].mib->fddiPORTPCMState == VAR_2))
  VAR_5 |= 1 ;
 if (VAR_4->y[VAR_1].twisted && (VAR_4->y[VAR_1].mib->fddiPORTPCMState == VAR_2))
  VAR_5 |= 2 ;
 return(VAR_5) ;
}
