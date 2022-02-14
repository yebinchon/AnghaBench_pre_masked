
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int plogi_timeouts; } ;
struct bfa_fcs_rport_s {int port; TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct bfa_fcs_rport_s *VAR_3 = (struct bfa_fcs_rport_s *) VAR_2;

 VAR_3->stats.plogi_timeouts++;
 FUNC_1(VAR_3->port, VAR_1);
 FUNC_0(VAR_3, VAR_0);
}
