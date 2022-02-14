
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_6__ {TYPE_1__* m; } ;
struct TYPE_7__ {int err_stats; } ;
struct TYPE_8__ {TYPE_3__ fp; } ;
struct s_smc {TYPE_2__ mib; TYPE_4__ hw; } ;
struct err_st {int dummy; } ;
struct TYPE_5__ {scalar_t__ fddiMACRingOp_Ct; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_4)
{
 int VAR_5 ;
 u_long *VAR_6 ;




 FUNC_1(FUNC_0(VAR_1),0) ;
 FUNC_1(FUNC_0(VAR_2),0) ;
 FUNC_1(FUNC_0(VAR_0),0) ;



 VAR_6 = (u_long *)&VAR_4->hw.fp.err_stats ;
 for (VAR_5 = (sizeof(struct err_st)/sizeof(long)) ; VAR_5 ; VAR_5--)
  *VAR_6++ = 0L ;
 VAR_4->mib.m[VAR_3].fddiMACRingOp_Ct = 0 ;
}
