
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_alive_resp {scalar_t__ is_valid; scalar_t__ ver_subtype; int ver_type; } ;
struct TYPE_2__ {struct il_alive_resp alive_frame; } ;
struct il_rx_pkt {TYPE_1__ u; } ;
struct il_rx_buf {int dummy; } ;
struct delayed_work {int dummy; } ;
struct il_priv {int workqueue; struct delayed_work alive_start; int card_alive; struct delayed_work init_alive_start; int card_alive_init; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int *,struct il_alive_resp*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct delayed_work*,int ) ;
 struct il_rx_pkt* FUNC_6 (struct il_rx_buf*) ;

__attribute__((used)) static void
FUNC_7(struct il_priv *VAR_2, struct il_rx_buf *VAR_3)
{
 struct il_rx_pkt *VAR_4 = FUNC_6(VAR_3);
 struct il_alive_resp *VAR_5;
 struct delayed_work *VAR_6;

 VAR_5 = &VAR_4->u.alive_frame;

 FUNC_0("Alive ucode status 0x%08X revision " "0x%01X 0x%01X\n",
        VAR_5->is_valid, VAR_5->ver_type, VAR_5->ver_subtype);

 if (VAR_5->ver_subtype == VAR_0) {
  FUNC_0("Initialization Alive received.\n");
  FUNC_3(&VAR_2->card_alive_init, &VAR_4->u.alive_frame,
         sizeof(struct il_alive_resp));
  VAR_6 = &VAR_2->init_alive_start;
 } else {
  FUNC_0("Runtime Alive received.\n");
  FUNC_3(&VAR_2->card_alive, &VAR_4->u.alive_frame,
         sizeof(struct il_alive_resp));
  VAR_6 = &VAR_2->alive_start;
  FUNC_2(VAR_2);
 }



 if (VAR_5->is_valid == VAR_1)
  FUNC_5(VAR_2->workqueue, VAR_6, FUNC_4(5));
 else
  FUNC_1("uCode did not respond OK.\n");
}
