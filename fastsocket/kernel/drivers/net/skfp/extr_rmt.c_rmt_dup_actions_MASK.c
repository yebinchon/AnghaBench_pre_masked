
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rmt_dup_mac_behavior; } ;
struct TYPE_3__ {scalar_t__ jm_flag; } ;
struct s_smc {TYPE_2__ s; TYPE_1__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s_smc*,int ,int ) ;
 int FUNC_1 (struct s_smc*) ;
 int FUNC_2 (struct s_smc*) ;

__attribute__((used)) static void FUNC_3(struct s_smc *VAR_4)
{
 if (VAR_4->r.jm_flag) {
 }
 else {
  if (VAR_4->s.rmt_dup_mac_behavior) {
   FUNC_0(VAR_4,VAR_2, VAR_3) ;
                        FUNC_2(VAR_4) ;
  }
  else {
   FUNC_0(VAR_4,VAR_0, VAR_1) ;
   FUNC_1(VAR_4) ;
  }
 }
}
