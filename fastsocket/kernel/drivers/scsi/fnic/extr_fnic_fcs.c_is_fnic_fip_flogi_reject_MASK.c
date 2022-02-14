
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct fip_header {scalar_t__ fip_subcode; int fip_dl_len; int fip_op; } ;
struct fip_encaps {int dummy; } ;
struct fip_desc {size_t fip_dlen; scalar_t__ fip_dtype; } ;
struct fcoe_ctlr {TYPE_1__* sel_fcf; struct fc_lport* lp; } ;
struct fc_lport {int host; } ;
struct fc_frame_header {int dummy; } ;
typedef enum fip_desc_type { ____Placeholder_fip_desc_type } fip_desc_type ;
struct TYPE_2__ {int fc_map; int vfid; int fabric_name; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct fcoe_ctlr *VAR_7,
      struct sk_buff *VAR_8)
{
 struct fc_lport *VAR_9 = VAR_7->lp;
 struct fip_header *VAR_10;
 struct fc_frame_header *VAR_11 = ((void*)0);
 struct fip_desc *VAR_12;
 struct fip_encaps *VAR_13;
 enum fip_desc_type VAR_14 = 0;
 u16 VAR_15;
 u8 VAR_16;
 u8 VAR_17;

 size_t VAR_18 = 0;
 size_t VAR_19;
 size_t VAR_20 = 0;

 if (FUNC_2(VAR_8))
  return 0;

 if (VAR_8->len < sizeof(*VAR_10))
  return 0;

 VAR_10 = (struct fip_header *)VAR_8->data;
 VAR_15 = FUNC_0(VAR_10->fip_op);
 VAR_17 = VAR_10->fip_subcode;

 if (VAR_15 != VAR_3)
  return 0;

 if (VAR_17 != VAR_4)
  return 0;

 VAR_19 = FUNC_0(VAR_10->fip_dl_len) * 4;
 if (VAR_19 + sizeof(*VAR_10) > VAR_8->len)
  return 0;

 VAR_12 = (struct fip_desc *)(VAR_10 + 1);
 VAR_20 = VAR_12->fip_dlen * VAR_1;

 if (VAR_12->fip_dtype == VAR_2) {

  FUNC_1(VAR_5, VAR_9->host,
     " FIP TYPE FLOGI: fab name:%llx "
     "vfid:%d map:%x\n",
     VAR_7->sel_fcf->fabric_name, VAR_7->sel_fcf->vfid,
     VAR_7->sel_fcf->fc_map);
  if (VAR_20 < sizeof(*VAR_13) + sizeof(*VAR_11) + 1)
   return 0;

  VAR_18 = VAR_20 - sizeof(*VAR_13);
  VAR_13 = (struct fip_encaps *)VAR_12;
  VAR_11 = (struct fc_frame_header *)(VAR_13 + 1);
  VAR_14 = VAR_12->fip_dtype;

  if (!VAR_11)
   return 0;





  VAR_16 = *(u8 *)(VAR_11 + 1);
  if (VAR_16 == VAR_0) {
   FUNC_1(VAR_6, VAR_9->host,
      "Flogi Request Rejected by Switch\n");
   return 1;
  }
  FUNC_1(VAR_6, VAR_9->host,
    "Flogi Request Accepted by Switch\n");
 }
 return 0;
}
