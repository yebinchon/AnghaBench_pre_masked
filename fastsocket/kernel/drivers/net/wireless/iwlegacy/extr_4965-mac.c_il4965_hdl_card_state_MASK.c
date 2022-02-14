
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ card_state_notif; } ;
struct il_rx_pkt {TYPE_2__ u; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {unsigned long status; int wait_command_queue; TYPE_3__* hw; } ;
struct TYPE_6__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct il_priv*,int ,int ) ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*,int ,int ) ;
 int FUNC_6 (int ) ;
 struct il_rx_pkt* FUNC_7 (struct il_rx_buf*) ;
 int FUNC_8 (int ,unsigned long*) ;
 scalar_t__ FUNC_9 (int ,unsigned long*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct il_priv *VAR_10, struct il_rx_buf *VAR_11)
{
 struct il_rx_pkt *VAR_12 = FUNC_7(VAR_11);
 u32 VAR_13 = FUNC_6(VAR_12->u.card_state_notif.flags);
 unsigned long VAR_14 = VAR_10->status;

 FUNC_0("Card state received: HW:%s SW:%s CT:%s\n",
    (VAR_13 & VAR_6) ? "Kill" : "On",
    (VAR_13 & VAR_8) ? "Kill" : "On",
    (VAR_13 & VAR_3) ? "Reached" : "Not reached");

 if (VAR_13 & (VAR_8 | VAR_6 | VAR_3)) {

  FUNC_1(VAR_10, VAR_2,
         VAR_0);

  FUNC_5(VAR_10, VAR_4, VAR_5);

  if (!(VAR_13 & VAR_7)) {
   FUNC_1(VAR_10, VAR_1,
          VAR_0);
   FUNC_5(VAR_10, VAR_4,
         VAR_5);
  }
 }

 if (VAR_13 & VAR_3)
  FUNC_3(VAR_10);

 if (VAR_13 & VAR_6)
  FUNC_8(VAR_9, &VAR_10->status);
 else
  FUNC_2(VAR_9, &VAR_10->status);

 if (!(VAR_13 & VAR_7))
  FUNC_4(VAR_10);

 if ((FUNC_9(VAR_9, &VAR_14) !=
      FUNC_9(VAR_9, &VAR_10->status)))
  FUNC_11(VAR_10->hw->wiphy,
       FUNC_9(VAR_9, &VAR_10->status));
 else
  FUNC_10(&VAR_10->wait_command_queue);
}
