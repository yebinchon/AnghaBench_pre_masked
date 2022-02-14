
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct fip_header {scalar_t__ fip_subcode; int fip_dl_len; int fip_ver; int fip_op; } ;
struct fcoe_ctlr {scalar_t__ mode; int state; int ctlr_mutex; scalar_t__ map_dest; int ctl_src_addr; } ;
struct ethhdr {int h_dest; } ;
typedef enum fip_state { ____Placeholder_fip_state } fip_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct fcoe_ctlr*,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct ethhdr* FUNC_3 (struct sk_buff*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct fcoe_ctlr*,struct sk_buff*) ;
 int FUNC_5 (struct fcoe_ctlr*,struct fip_header*) ;
 int FUNC_6 (struct fcoe_ctlr*,struct sk_buff*) ;
 int FUNC_7 (struct fcoe_ctlr*,int) ;
 int FUNC_8 (struct fcoe_ctlr*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_14(struct fcoe_ctlr *VAR_16, struct sk_buff *VAR_17)
{
 struct fip_header *VAR_18;
 struct ethhdr *VAR_19;
 enum fip_state VAR_20;
 u16 VAR_21;
 u8 VAR_22;

 if (FUNC_13(VAR_17))
  goto drop;
 if (VAR_17->len < sizeof(*VAR_18))
  goto drop;
 VAR_19 = FUNC_3(VAR_17);
 if (VAR_16->mode == VAR_1) {
  if (FUNC_2(VAR_19->h_dest, VAR_16->ctl_src_addr) &&
      FUNC_2(VAR_19->h_dest, VAR_15) &&
      FUNC_2(VAR_19->h_dest, VAR_14))
   goto drop;
 } else if (FUNC_2(VAR_19->h_dest, VAR_16->ctl_src_addr) &&
     FUNC_2(VAR_19->h_dest, VAR_13))
  goto drop;
 VAR_18 = (struct fip_header *)VAR_17->data;
 VAR_21 = FUNC_12(VAR_18->fip_op);
 VAR_22 = VAR_18->fip_subcode;

 if (FUNC_0(VAR_18->fip_ver) != VAR_12)
  goto drop;
 if (FUNC_12(VAR_18->fip_dl_len) * VAR_0 + sizeof(*VAR_18) > VAR_17->len)
  goto drop;

 FUNC_10(&VAR_16->ctlr_mutex);
 VAR_20 = VAR_16->state;
 if (VAR_20 == VAR_8) {
  VAR_16->map_dest = 0;
  FUNC_7(VAR_16, VAR_9);
  VAR_20 = VAR_9;
  FUNC_1(VAR_16, "Using FIP mode\n");
 }
 FUNC_11(&VAR_16->ctlr_mutex);

 if (VAR_16->mode == VAR_1 && VAR_21 == VAR_5)
  return FUNC_8(VAR_16, VAR_17);

 if (VAR_20 != VAR_9 && VAR_20 != VAR_11 &&
     VAR_20 != VAR_10)
  goto drop;

 if (VAR_21 == VAR_4) {
  FUNC_6(VAR_16, VAR_17);
  return 0;
 }

 if (VAR_20 != VAR_9)
  goto drop;

 if (VAR_21 == VAR_3 && VAR_22 == VAR_6)
  FUNC_4(VAR_16, VAR_17);
 else if (VAR_21 == VAR_2 && VAR_22 == VAR_7)
  FUNC_5(VAR_16, VAR_18);
 FUNC_9(VAR_17);
 return 0;
drop:
 FUNC_9(VAR_17);
 return -1;
}
