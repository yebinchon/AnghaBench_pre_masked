
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int logo_sent; } ;
struct bfa_fcs_vport_s {int lps; TYPE_1__ vport_stats; } ;


 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_vport_s *VAR_0)
{
 FUNC_3(FUNC_0(VAR_0), FUNC_1(VAR_0));

 VAR_0->vport_stats.logo_sent++;
 FUNC_2(VAR_0->lps);
}
