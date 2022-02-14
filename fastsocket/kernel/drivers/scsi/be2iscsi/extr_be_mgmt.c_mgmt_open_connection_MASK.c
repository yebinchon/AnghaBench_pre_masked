
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int hi; int lo; } ;
struct TYPE_8__ {int* addr; void* ip_type; } ;
struct tcp_connect_and_offload_in {unsigned int tag0; unsigned short cid; unsigned short defq_id; unsigned short hdr_ring_id; unsigned short data_ring_id; int do_offload; TYPE_6__ dataout_template_pa; int cq_id; void* tcp_port; TYPE_2__ ip_address; int hdr; } ;
struct TYPE_9__ {int u6_addr8; } ;
struct TYPE_10__ {TYPE_3__ in6_u; } ;
struct sockaddr_in6 {TYPE_4__ sin6_addr; int sin6_port; } ;
struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct phys_addr {int hi; int lo; int member_1; int member_0; } ;
struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {TYPE_5__* be_cq; } ;
struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {scalar_t__ nxt_cqid; scalar_t__ num_cpus; struct be_ctrl_info ctrl; struct hwi_controller* phwi_ctrlr; } ;
struct beiscsi_endpoint {unsigned short ep_cid; int dst_addr; int* dst6_addr; void* ip_type; void* dst_tcpport; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {unsigned int tag0; unsigned short cid; unsigned short defq_id; unsigned short hdr_ring_id; unsigned short data_ring_id; int do_offload; TYPE_6__ dataout_template_pa; int cq_id; void* tcp_port; TYPE_2__ ip_address; int hdr; } ;
struct be_dma_mem {int dma; int size; struct tcp_connect_and_offload_in* va; } ;
typedef int __be32 ;
struct TYPE_11__ {int id; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct beiscsi_hba*) ;
 scalar_t__ FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct beiscsi_hba*,struct phys_addr*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int FUNC_3 (struct beiscsi_hba*) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (struct beiscsi_hba*) ;
 int FUNC_6 (struct tcp_connect_and_offload_in*,int,int,int) ;
 int FUNC_7 (struct beiscsi_hba*,int ,int ,char*,unsigned int,...) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (struct be_ctrl_info*,unsigned int) ;
 int FUNC_10 (int**,int *,int) ;
 int FUNC_11 (struct tcp_connect_and_offload_in*,int ,int) ;
 struct be_sge* FUNC_12 (struct tcp_connect_and_offload_in*) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 struct tcp_connect_and_offload_in* FUNC_17 (struct beiscsi_hba*) ;

int FUNC_18(struct beiscsi_hba *VAR_10,
    struct sockaddr *VAR_11,
    struct beiscsi_endpoint *VAR_12,
    struct be_dma_mem *VAR_13)
{
 struct hwi_controller *VAR_14;
 struct hwi_context_memory *VAR_15;
 struct sockaddr_in *VAR_16 = (struct sockaddr_in *)VAR_11;
 struct sockaddr_in6 *VAR_17 = (struct sockaddr_in6 *)VAR_11;
 struct be_ctrl_info *VAR_18 = &VAR_10->ctrl;
 struct be_mcc_wrb *VAR_19;
 struct tcp_connect_and_offload_in *VAR_20;
 unsigned short VAR_21;
 unsigned short VAR_22;
 struct phys_addr VAR_23 = { 0, 0 };
 struct phys_addr *VAR_24;
 unsigned int VAR_25 = 0;
 unsigned int VAR_26;
 unsigned short VAR_27 = VAR_12->ep_cid;
 struct be_sge *VAR_28;

 VAR_14 = VAR_10->phwi_ctrlr;
 VAR_15 = VAR_14->phwi_ctxt;
 VAR_21 = (unsigned short)FUNC_1(VAR_10);
 VAR_22 = (unsigned short)FUNC_0(VAR_10);

 VAR_24 = &VAR_23;
 FUNC_2(VAR_10, VAR_24);
 FUNC_14(&VAR_18->mbox_lock);
 VAR_25 = FUNC_3(VAR_10);
 if (!VAR_25) {
  FUNC_15(&VAR_18->mbox_lock);
  return VAR_25;
 }
 VAR_19 = FUNC_17(VAR_10);
 FUNC_11(VAR_19, 0, sizeof(*VAR_19));
 VAR_28 = FUNC_12(VAR_19);

 VAR_20 = VAR_13->va;
 FUNC_11(VAR_20, 0, sizeof(*VAR_20));
 VAR_19->tag0 |= VAR_25;

 FUNC_6(VAR_19, sizeof(*VAR_20), 0, 1);
 FUNC_4(&VAR_20->hdr, VAR_3,
      VAR_7,
      sizeof(*VAR_20));
 if (VAR_11->sa_family == VAR_8) {
  __be32 VAR_29 = VAR_16->sin_addr.s_addr;
  VAR_20->ip_address.ip_type = VAR_0;
  VAR_20->ip_address.addr[0] = VAR_29 & 0x000000ff;
  VAR_20->ip_address.addr[1] = (VAR_29 & 0x0000ff00) >> 8;
  VAR_20->ip_address.addr[2] = (VAR_29 & 0x00ff0000) >> 16;
  VAR_20->ip_address.addr[3] = (VAR_29 & 0xff000000) >> 24;
  VAR_20->tcp_port = FUNC_13(VAR_16->sin_port);
  VAR_12->dst_addr = VAR_16->sin_addr.s_addr;
  VAR_12->dst_tcpport = FUNC_13(VAR_16->sin_port);
  VAR_12->ip_type = VAR_0;
 } else if (VAR_11->sa_family == VAR_9) {
  VAR_20->ip_address.ip_type = VAR_1;
  FUNC_10(&VAR_20->ip_address.addr,
         &VAR_17->sin6_addr.in6_u.u6_addr8, 16);
  VAR_20->tcp_port = FUNC_13(VAR_17->sin6_port);
  VAR_12->dst_tcpport = FUNC_13(VAR_17->sin6_port);
  FUNC_10(&VAR_12->dst6_addr,
         &VAR_17->sin6_addr.in6_u.u6_addr8, 16);
  VAR_12->ip_type = VAR_1;
 } else{
  FUNC_7(VAR_10, VAR_5, VAR_2,
       "BG_%d : unknown addr family %d\n",
       VAR_11->sa_family);
  FUNC_15(&VAR_18->mbox_lock);
  FUNC_9(&VAR_10->ctrl, VAR_25);
  return -VAR_4;

 }
 VAR_20->cid = VAR_27;
 VAR_26 = VAR_10->nxt_cqid++;
 if (VAR_10->nxt_cqid == VAR_10->num_cpus)
  VAR_10->nxt_cqid = 0;
 VAR_20->cq_id = VAR_15->be_cq[VAR_26].id;
 FUNC_7(VAR_10, VAR_6, VAR_2,
      "BG_%d : i=%d cq_id=%d\n", VAR_26, VAR_20->cq_id);
 VAR_20->defq_id = VAR_21;
 VAR_20->hdr_ring_id = VAR_21;
 VAR_20->data_ring_id = VAR_22;
 VAR_20->do_offload = 1;
 VAR_20->dataout_template_pa.lo = VAR_24->lo;
 VAR_20->dataout_template_pa.hi = VAR_24->hi;
 VAR_28->pa_hi = FUNC_8(FUNC_16(VAR_13->dma));
 VAR_28->pa_lo = FUNC_8(VAR_13->dma & 0xFFFFFFFF);
 VAR_28->len = FUNC_8(VAR_13->size);
 FUNC_5(VAR_10);
 FUNC_15(&VAR_18->mbox_lock);
 return VAR_25;
}
