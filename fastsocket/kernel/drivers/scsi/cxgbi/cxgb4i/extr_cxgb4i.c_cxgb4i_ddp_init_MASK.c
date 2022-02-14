
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rsvd_mask; int rsvd_shift; int rsvd_bits; int sw_bits; } ;
struct cxgbi_device {int rx_max_size; int tx_max_size; TYPE_3__ tag_format; int csk_ddp_clear; int csk_ddp_set; int csk_ddp_setup_pgidx; int csk_ddp_setup_digest; struct cxgbi_ddp_info* ddp; } ;
struct cxgbi_ddp_info {unsigned int idx_mask; int max_rxsz; int max_txsz; int rsvd_tag_mask; int idx_bits; int nppods; int refcnt; } ;
struct cxgb4_lld_info {int iscsi_iolen; int * ports; TYPE_2__* vr; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ start; } ;
struct TYPE_5__ {TYPE_1__ iscsi; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned int,unsigned int*) ;
 struct cxgb4_lld_info* FUNC_1 (struct cxgbi_device*) ;
 int FUNC_2 (struct cxgbi_device*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_3 (unsigned int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,struct cxgbi_device*,int ,int ,unsigned int,int ,...) ;
 int FUNC_6 (char*,struct cxgbi_device*,struct cxgbi_ddp_info*) ;

__attribute__((used)) static int FUNC_7(struct cxgbi_device *VAR_6)
{
 struct cxgb4_lld_info *VAR_7 = FUNC_1(VAR_6);
 struct cxgbi_ddp_info *VAR_8 = VAR_6->ddp;
 unsigned int VAR_9, VAR_10[4];
 int VAR_11;

 if (VAR_8) {
  FUNC_4(&VAR_8->refcnt);
  FUNC_6("cdev 0x%p, ddp 0x%p already set up.\n",
   VAR_6, VAR_6->ddp);
  return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_6, VAR_7->vr->iscsi.start,
   VAR_7->vr->iscsi.start + VAR_7->vr->iscsi.size - 1,
   VAR_7->iscsi_iolen, VAR_7->iscsi_iolen);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8 = VAR_6->ddp;

 VAR_9 = VAR_8->idx_mask << VAR_1;
 FUNC_3(VAR_10);
 FUNC_0(VAR_7->ports[0], VAR_9, VAR_10);

 VAR_6->csk_ddp_setup_digest = VAR_4;
 VAR_6->csk_ddp_setup_pgidx = VAR_5;
 VAR_6->csk_ddp_set = VAR_3;
 VAR_6->csk_ddp_clear = VAR_2;

 FUNC_5("cxgb4i 0x%p tag: sw %u, rsvd %u,%u, mask 0x%x.\n",
  VAR_6, VAR_6->tag_format.sw_bits, VAR_6->tag_format.rsvd_bits,
  VAR_6->tag_format.rsvd_shift, VAR_6->tag_format.rsvd_mask);
 FUNC_5("cxgb4i 0x%p, nppods %u, bits %u, mask 0x%x,0x%x pkt %u/%u, "
  " %u/%u.\n",
  VAR_6, VAR_8->nppods, VAR_8->idx_bits, VAR_8->idx_mask,
  VAR_8->rsvd_tag_mask, VAR_8->max_txsz, VAR_7->iscsi_iolen,
  VAR_8->max_rxsz, VAR_7->iscsi_iolen);
 FUNC_5("cxgb4i 0x%p max payload size: %u/%u, %u/%u.\n",
  VAR_6, VAR_6->tx_max_size, VAR_8->max_txsz, VAR_6->rx_max_size,
  VAR_8->max_rxsz);
 return 0;
}
