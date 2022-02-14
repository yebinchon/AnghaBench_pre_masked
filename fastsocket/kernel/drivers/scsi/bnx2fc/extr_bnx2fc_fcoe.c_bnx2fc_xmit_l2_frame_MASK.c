
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port_id; } ;
struct fc_rport_priv {TYPE_1__ ids; } ;
struct fc_frame_header {scalar_t__ fh_r_ctl; scalar_t__ fh_type; int fh_ox_id; } ;
struct fc_frame {int dummy; } ;
struct bnx2fc_rport {struct fc_rport_priv* rdata; } ;


 int FUNC_0 (struct bnx2fc_rport*,char*,...) ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bnx2fc_rport*,struct fc_frame*) ;
 int FUNC_2 (struct bnx2fc_rport*,struct fc_frame*) ;
 int FUNC_3 (struct bnx2fc_rport*,struct fc_frame*) ;
 struct fc_frame_header* FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (struct fc_frame*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct bnx2fc_rport *VAR_6,
        struct fc_frame *VAR_7)
{
 struct fc_rport_priv *VAR_8 = VAR_6->rdata;
 struct fc_frame_header *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_4(VAR_7);
 FUNC_0(VAR_6, "Xmit L2 frame rport = 0x%x, oxid = 0x%x, "
   "r_ctl = 0x%x\n", VAR_8->ids.port_id,
   FUNC_6(VAR_9->fh_ox_id), VAR_9->fh_r_ctl);
 if ((VAR_9->fh_type == VAR_5) &&
     (VAR_9->fh_r_ctl == VAR_3)) {

  switch (FUNC_5(VAR_7)) {
  case 130:
   VAR_10 = FUNC_1(VAR_6, VAR_7);
   break;
  case 129:
   VAR_10 = FUNC_2(VAR_6, VAR_7);
   break;
  case 128:
   VAR_10 = FUNC_3(VAR_6, VAR_7);
   break;
  default:
   break;
  }
 } else if ((VAR_9->fh_type == VAR_4) &&
     (VAR_9->fh_r_ctl == VAR_2))
  FUNC_0(VAR_6, "ABTS frame\n");
 else {
  FUNC_0(VAR_6, "Send L2 frame type 0x%x "
    "rctl 0x%x thru non-offload path\n",
    VAR_9->fh_type, VAR_9->fh_r_ctl);
  return -VAR_0;
 }
 if (VAR_10)
  return -VAR_1;
 else
  return 0;
}
