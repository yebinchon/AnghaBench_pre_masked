
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct fip_header {int fip_subcode; } ;
struct fcoe_rport {int dummy; } ;
struct fcoe_ctlr {int ctlr_mutex; } ;
struct fc_rport_priv {int dummy; } ;
typedef enum fip_vn2vn_subcode { ____Placeholder_fip_vn2vn_subcode } fip_vn2vn_subcode ;







 int FUNC_0 (struct fcoe_ctlr*,char*,int) ;
 int FUNC_1 (struct fcoe_ctlr*,struct fc_rport_priv*) ;
 int FUNC_2 (struct fcoe_ctlr*,struct fc_rport_priv*) ;
 int FUNC_3 (struct fcoe_ctlr*,struct fc_rport_priv*) ;
 int FUNC_4 (struct fcoe_ctlr*,struct sk_buff*,struct fc_rport_priv*) ;
 int FUNC_5 (struct fcoe_ctlr*,struct fc_rport_priv*) ;
 int FUNC_6 (struct fcoe_ctlr*,struct fc_rport_priv*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct fcoe_ctlr *VAR_0, struct sk_buff *VAR_1)
{
 struct fip_header *VAR_2;
 enum fip_vn2vn_subcode VAR_3;
 struct {
  struct fc_rport_priv rdata;
  struct fcoe_rport frport;
 } VAR_4;
 int VAR_5;

 VAR_2 = (struct fip_header *)VAR_1->data;
 VAR_3 = VAR_2->fip_subcode;

 VAR_5 = FUNC_4(VAR_0, VAR_1, &VAR_4.rdata);
 if (VAR_5) {
  FUNC_0(VAR_0, "vn_recv vn_parse error %d\n", VAR_5);
  goto drop;
 }

 FUNC_8(&VAR_0->ctlr_mutex);
 switch (VAR_3) {
 case 128:
  FUNC_6(VAR_0, &VAR_4.rdata);
  break;
 case 129:
  FUNC_5(VAR_0, &VAR_4.rdata);
  break;
 case 131:
  FUNC_2(VAR_0, &VAR_4.rdata);
  break;
 case 130:
  FUNC_3(VAR_0, &VAR_4.rdata);
  break;
 case 132:
  FUNC_1(VAR_0, &VAR_4.rdata);
  break;
 default:
  FUNC_0(VAR_0, "vn_recv unknown subcode %d\n", VAR_3);
  VAR_5 = -1;
  break;
 }
 FUNC_9(&VAR_0->ctlr_mutex);
drop:
 FUNC_7(VAR_1);
 return VAR_5;
}
