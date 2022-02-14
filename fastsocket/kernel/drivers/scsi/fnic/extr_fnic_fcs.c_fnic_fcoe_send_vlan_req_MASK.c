
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {void* protocol; scalar_t__ data; } ;
struct fcoe_ctlr {int (* send ) (struct fcoe_ctlr*,struct sk_buff*) ;TYPE_7__* lp; int ctl_src_addr; } ;
struct fnic {int fip_timer; TYPE_1__* lport; int (* set_vlan ) (struct fnic*,int ) ;struct fcoe_ctlr ctlr; } ;
struct TYPE_15__ {int fip_dlen; int fip_dtype; } ;
struct TYPE_17__ {int fd_wwn; TYPE_6__ fd_desc; } ;
struct TYPE_13__ {int fip_dlen; int fip_dtype; } ;
struct TYPE_14__ {int fd_mac; TYPE_4__ fd_desc; } ;
struct TYPE_18__ {TYPE_8__ wwnn; TYPE_5__ mac; } ;
struct TYPE_12__ {void* fip_dl_len; int fip_subcode; void* fip_op; int fip_ver; } ;
struct TYPE_11__ {void* h_proto; int * h_dest; int * h_source; } ;
struct fip_vlan {TYPE_9__ desc; TYPE_3__ fip; TYPE_2__ eth; } ;
struct TYPE_16__ {int wwnn; } ;
struct TYPE_10__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_9 ;
 struct sk_buff* FUNC_2 (int) ;
 int VAR_10 ;
 int FUNC_3 (struct fnic*) ;
 void* FUNC_4 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct fip_vlan*,int ,int) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct fnic*,int ) ;
 int FUNC_15 (struct fcoe_ctlr*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_16(struct fnic *VAR_12)
{
 struct fcoe_ctlr *VAR_13 = &VAR_12->ctlr;
 struct sk_buff *VAR_14;
 char *VAR_15;
 int VAR_16;
 struct fip_vlan *VAR_17;
 u64 VAR_18;

 FUNC_3(VAR_12);
 VAR_12->set_vlan(VAR_12, 0);
 FUNC_1(VAR_9, VAR_12->lport->host,
    "Sending VLAN request...\n");
 VAR_14 = FUNC_2(sizeof(struct fip_vlan));
 if (!VAR_14)
  return;

 VAR_16 = sizeof(*VAR_17);
 VAR_15 = (char *)VAR_14->data;
 VAR_17 = (struct fip_vlan *)VAR_15;

 FUNC_6(VAR_17, 0, sizeof(*VAR_17));
 FUNC_5(VAR_17->eth.h_source, VAR_13->ctl_src_addr, VAR_0);
 FUNC_5(VAR_17->eth.h_dest, VAR_10, VAR_0);
 VAR_17->eth.h_proto = FUNC_4(VAR_1);

 VAR_17->fip.fip_ver = FUNC_0(VAR_8);
 VAR_17->fip.fip_op = FUNC_4(VAR_6);
 VAR_17->fip.fip_subcode = VAR_7;
 VAR_17->fip.fip_dl_len = FUNC_4(sizeof(VAR_17->desc) / VAR_3);

 VAR_17->desc.mac.fd_desc.fip_dtype = VAR_4;
 VAR_17->desc.mac.fd_desc.fip_dlen = sizeof(VAR_17->desc.mac) / VAR_3;
 FUNC_5(&VAR_17->desc.mac.fd_mac, VAR_13->ctl_src_addr, VAR_0);

 VAR_17->desc.wwnn.fd_desc.fip_dtype = VAR_5;
 VAR_17->desc.wwnn.fd_desc.fip_dlen = sizeof(VAR_17->desc.wwnn) / VAR_3;
 FUNC_9(VAR_13->lp->wwnn, &VAR_17->desc.wwnn.fd_wwn);

 FUNC_11(VAR_14, sizeof(*VAR_17));
 VAR_14->protocol = FUNC_4(VAR_1);
 FUNC_12(VAR_14);
 FUNC_13(VAR_14);
 VAR_13->send(VAR_13, VAR_14);


 VAR_18 = VAR_11 + FUNC_8(VAR_2);
 FUNC_7(&VAR_12->fip_timer, FUNC_10(VAR_18));
}
