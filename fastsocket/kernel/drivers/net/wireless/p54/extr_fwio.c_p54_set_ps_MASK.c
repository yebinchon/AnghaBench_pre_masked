
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct p54_psm {int beacon_rssi_skip_max; int nr; int * exclude; scalar_t__ rssi_delta_threshold; TYPE_3__* intervals; void* aid; void* mode; } ;
struct p54_common {int aid; int phy_ps; TYPE_2__* hw; int powersave_override; } ;
struct TYPE_6__ {void* periods; void* interval; } ;
struct TYPE_4__ {int flags; int listen_interval; } ;
struct TYPE_5__ {TYPE_1__ conf; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
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
 void* FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_3 (struct p54_common*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;

int FUNC_5(struct p54_common *VAR_12)
{
 struct sk_buff *VAR_13;
 struct p54_psm *VAR_14;
 unsigned int VAR_15;
 u16 VAR_16;

 if (VAR_12->hw->conf.flags & VAR_2 &&
     !VAR_12->powersave_override)
  VAR_16 = VAR_5 | VAR_6 | VAR_9 |
         VAR_8 | VAR_10;
 else
  VAR_16 = VAR_7;

 VAR_13 = FUNC_2(VAR_12, VAR_4, sizeof(*VAR_14),
       VAR_3, VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 = (struct p54_psm *)FUNC_4(VAR_13, sizeof(*VAR_14));
 VAR_14->mode = FUNC_1(VAR_16);
 VAR_14->aid = FUNC_1(VAR_12->aid);
 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->intervals); VAR_15++) {
  VAR_14->intervals[VAR_15].interval =
   FUNC_1(VAR_12->hw->conf.listen_interval);
  VAR_14->intervals[VAR_15].periods = FUNC_1(1);
 }

 VAR_14->beacon_rssi_skip_max = 200;
 VAR_14->rssi_delta_threshold = 0;
 VAR_14->nr = 1;
 VAR_14->exclude[0] = VAR_11;

 FUNC_3(VAR_12, VAR_13);
 VAR_12->phy_ps = VAR_16 != VAR_7;
 return 0;
}
