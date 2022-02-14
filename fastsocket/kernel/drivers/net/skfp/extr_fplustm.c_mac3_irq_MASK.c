
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_3__ {int mac_r_restart_counter; } ;
struct TYPE_4__ {TYPE_1__ mac_ct; } ;
struct s_smc {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct s_smc*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct s_smc*,int) ;

void FUNC_3(struct s_smc *VAR_8, u_short VAR_9, u_short VAR_10)
{
 FUNC_1(VAR_10) ;

 if (VAR_9 & (VAR_1 |
   VAR_0)) {
  VAR_8->hw.mac_ct.mac_r_restart_counter++ ;
  FUNC_2(VAR_8,1);
 }


 if (VAR_9 & VAR_3) {
  FUNC_0(VAR_8,VAR_4, VAR_5) ;
 }
 if (VAR_9 & VAR_2) {
  FUNC_0(VAR_8,VAR_6, VAR_7) ;
 }
}
