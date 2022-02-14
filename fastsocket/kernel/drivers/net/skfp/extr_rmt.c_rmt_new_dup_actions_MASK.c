
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rmt_dup_mac_behavior; } ;
struct TYPE_3__ {void* jm_flag; void* bn_flag; int da_flag; } ;
struct s_smc {TYPE_2__ s; TYPE_1__ r; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct s_smc*,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct s_smc*) ;
 int FUNC_2 (struct s_smc*) ;

__attribute__((used)) static void FUNC_3(struct s_smc *VAR_6)
{
 VAR_6->r.da_flag = VAR_5 ;
 VAR_6->r.bn_flag = VAR_0 ;
 VAR_6->r.jm_flag = VAR_0 ;






 if (VAR_6->s.rmt_dup_mac_behavior) {
  FUNC_0(VAR_6,VAR_3, VAR_4) ;
  FUNC_2(VAR_6) ;
 }
 else {
  FUNC_0(VAR_6,VAR_1, VAR_2) ;
  FUNC_1(VAR_6) ;
 }
}
