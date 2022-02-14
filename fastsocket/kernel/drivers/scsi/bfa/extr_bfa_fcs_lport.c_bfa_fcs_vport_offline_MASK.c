
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fab_offline; } ;
struct bfa_fcs_vport_s {TYPE_1__ vport_stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_vport_s*,int ) ;

void
FUNC_1(struct bfa_fcs_vport_s *VAR_1)
{
 VAR_1->vport_stats.fab_offline++;
 FUNC_0(VAR_1, VAR_0);
}
