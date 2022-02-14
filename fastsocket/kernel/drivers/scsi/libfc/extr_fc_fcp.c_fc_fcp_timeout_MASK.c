
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport_libfc_priv {int flags; } ;
struct fc_rport {struct fc_rport_libfc_priv* dd_data; } ;
struct TYPE_2__ {scalar_t__ fc_tm_flags; } ;
struct fc_fcp_pkt {int state; TYPE_1__ cdb_cmd; struct fc_rport* rport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fc_fcp_pkt*) ;
 scalar_t__ FUNC_1 (struct fc_fcp_pkt*) ;
 int FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*,int ) ;
 int FUNC_4 (struct fc_fcp_pkt*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_4)
{
 struct fc_fcp_pkt *VAR_5 = (struct fc_fcp_pkt *)VAR_4;
 struct fc_rport *VAR_6 = VAR_5->rport;
 struct fc_rport_libfc_priv *VAR_7 = VAR_6->dd_data;

 if (FUNC_1(VAR_5))
  return;

 if (VAR_5->cdb_cmd.fc_tm_flags)
  goto unlock;

 VAR_5->state |= VAR_1;

 if (VAR_7->flags & VAR_0)
  FUNC_2(VAR_5);
 else if (VAR_5->state & VAR_2)
  FUNC_0(VAR_5);
 else
  FUNC_3(VAR_5, VAR_3);
 VAR_5->state &= ~VAR_1;
unlock:
 FUNC_4(VAR_5);
}
