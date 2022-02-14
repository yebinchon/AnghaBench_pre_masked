
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int length; int optionnum; } ;
struct TYPE_6__ {int length; int shiftcount; int optionnum; } ;
struct TYPE_5__ {int length; int mss; int optionnum; } ;
union all_known_options {int as_end; TYPE_4__ as_base; TYPE_2__ as_windowscale; TYPE_1__ as_mss; } ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct option_windowscale {int dummy; } ;
struct option_mss {int dummy; } ;
struct option_base {int dummy; } ;
struct TYPE_7__ {int rcv_wscale; int mss; } ;
struct nes_cm_node {TYPE_3__ tcp_cntxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nes_cm_node*,char*,int,int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_12 ;
 int FUNC_4 (struct nes_cm_node*,struct sk_buff*,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct nes_cm_node *VAR_13, u32 VAR_14,
      struct sk_buff *VAR_15)
{
 int VAR_16;
 int VAR_17 = VAR_10;
 char VAR_18[sizeof(struct option_mss) +
      sizeof(struct option_windowscale) + sizeof(struct option_base) +
      VAR_11];

 int VAR_19 = 0;

 union all_known_options *VAR_20;

 if (!VAR_13)
  return -VAR_0;

 VAR_20 = (union all_known_options *)&VAR_18[VAR_19];
 VAR_20->as_mss.optionnum = VAR_6;
 VAR_20->as_mss.length = sizeof(struct option_mss);
 VAR_20->as_mss.mss = FUNC_2(VAR_13->tcp_cntxt.mss);
 VAR_19 += sizeof(struct option_mss);

 VAR_20 = (union all_known_options *)&VAR_18[VAR_19];
 VAR_20->as_windowscale.optionnum = VAR_7;
 VAR_20->as_windowscale.length = sizeof(struct option_windowscale);
 VAR_20->as_windowscale.shiftcount = VAR_13->tcp_cntxt.rcv_wscale;
 VAR_19 += sizeof(struct option_windowscale);

 if (VAR_14 && !(VAR_3 & VAR_12)) {
  VAR_20 = (union all_known_options *)&VAR_18[VAR_19];
  VAR_20->as_base.optionnum = VAR_8;
  VAR_20->as_base.length = sizeof(struct option_base);
  VAR_19 += sizeof(struct option_base);

  VAR_20 = (union all_known_options *)&VAR_18[VAR_19];
  VAR_20->as_end = 1;
  VAR_19 += 1;
  VAR_20 = (union all_known_options *)&VAR_18[VAR_19];
  VAR_20->as_end = 1;
  VAR_19 += 1;
 }

 VAR_20 = (union all_known_options *)&VAR_18[VAR_19];
 VAR_20->as_end = VAR_5;
 VAR_19 += 1;

 if (!VAR_15)
  VAR_15 = FUNC_0(VAR_1);
 if (!VAR_15) {
  FUNC_3(VAR_2, "Failed to get a Free pkt\n");
  return -1;
 }

 if (VAR_14)
  VAR_17 |= VAR_9;

 FUNC_1(VAR_15, VAR_13, VAR_18, VAR_19, ((void*)0), 0, VAR_17);
 VAR_16 = FUNC_4(VAR_13, VAR_15, VAR_4, 1, 0);

 return VAR_16;
}
