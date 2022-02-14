
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_vif {int type; } ;
struct TYPE_8__ {int cmd; scalar_t__ len; } ;
struct TYPE_5__ {int gpio; } ;
struct carl9170_rsp {TYPE_4__ hdr; TYPE_1__ gpio; } ;
struct TYPE_6__ {int pbc_state; int pbc; } ;
struct ar9170 {TYPE_3__* hw; int fw_boot_wait; TYPE_2__ wps; } ;
struct TYPE_7__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct ar9170*,scalar_t__,void*) ;
 int FUNC_1 (struct ar9170*,char*,scalar_t__) ;
 struct ieee80211_vif* FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct ar9170*,struct carl9170_rsp*) ;
 int FUNC_4 (struct ar9170*,int ) ;
 int FUNC_5 (struct ar9170*,struct carl9170_rsp*) ;
 int FUNC_6 (struct ar9170*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*,int ,void*,scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int ,char*,scalar_t__) ;
 int FUNC_17 (int ,char*,int,...) ;
 int FUNC_18 (int ,char*) ;

void FUNC_19(struct ar9170 *VAR_6, void *VAR_7, u32 VAR_8)
{
 struct carl9170_rsp *VAR_9 = VAR_7;
 struct ieee80211_vif *VAR_10;

 if ((VAR_9->hdr.cmd & VAR_3) != VAR_3) {
  if (!(VAR_9->hdr.cmd & VAR_1))
   FUNC_0(VAR_6, VAR_8, VAR_7);

  return;
 }

 if (FUNC_15(VAR_9->hdr.len != (VAR_8 - 4))) {
  if (FUNC_11()) {
   FUNC_17(VAR_6->hw->wiphy, "FW: received over-/under"
    "sized event %x (%d, but should be %d).\n",
          VAR_9->hdr.cmd, VAR_9->hdr.len, VAR_8 - 4);

   FUNC_12("dump:", VAR_4,
          VAR_7, VAR_8);
  }

  return;
 }


 switch (VAR_9->hdr.cmd) {
 case 136:

  FUNC_13();
  VAR_10 = FUNC_2(VAR_6);

  if (!VAR_10) {
   FUNC_14();
   break;
  }

  switch (VAR_10->type) {
  case 128:
   FUNC_3(VAR_6, VAR_9);
   break;

  case 130:
  case 131:
  case 129:
   FUNC_6(VAR_6, 1);
   break;

  default:
   break;
  }
  FUNC_14();

  break;


 case 133:

  FUNC_5(VAR_6, VAR_9);
  break;

 case 140:
  break;

 case 141:

  break;

 case 132:

  FUNC_4(VAR_6, VAR_2);
  break;

 case 134:

  FUNC_1(VAR_6, (char *)VAR_7 + 4, VAR_8 - 4);
  break;

 case 137:
  FUNC_16(VAR_6->hw->wiphy, "FW: HD %d\n", VAR_8 - 4);
  FUNC_12("FW:", VAR_4,
         (char *)VAR_7 + 4, VAR_8 - 4);
  break;

 case 135:
  if (!FUNC_11())
   break;

  FUNC_18(VAR_6->hw->wiphy, "FW: RADAR! Please report this "
         "incident to linux-wireless@vger.kernel.org !\n");
  break;

 case 138:
  break;

 case 139:
  FUNC_7(&VAR_6->fw_boot_wait);
  break;

 default:
  FUNC_17(VAR_6->hw->wiphy, "FW: received unhandled event %x\n",
   VAR_9->hdr.cmd);
  FUNC_12("dump:", VAR_4, VAR_7, VAR_8);
  break;
 }
}
