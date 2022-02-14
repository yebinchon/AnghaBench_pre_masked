
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ia_vcc {int dummy; } ;
struct atm_vcc {int vci; int flags; } ;
struct TYPE_6__ {struct atm_vcc* vcc; } ;
struct TYPE_5__ {int tx_backlog; } ;
typedef TYPE_1__ IADEV ;


 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 struct ia_vcc* FUNC_1 (struct atm_vcc*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_5 (char*,...) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9 (IADEV *VAR_1) {
   struct sk_buff *VAR_2;
   int VAR_3;
   struct atm_vcc *VAR_4;
   struct ia_vcc *VAR_5;
   VAR_3 = FUNC_3(VAR_1);

   while (VAR_3 && (VAR_2 = FUNC_6(&VAR_1->tx_backlog))) {
      if (!(VAR_4 = FUNC_0(VAR_2)->vcc)) {
         FUNC_2(VAR_2);
         FUNC_5("ia_que_tx: Null vcc\n");
         break;
      }
      if (!FUNC_8(VAR_0,&VAR_4->flags)) {
         FUNC_2(VAR_2);
         FUNC_5("Free the SKB on closed vci %d \n", VAR_4->vci);
         break;
      }
      VAR_5 = FUNC_1(VAR_4);
      if (FUNC_4 (VAR_4, VAR_2)) {
         FUNC_7(&VAR_1->tx_backlog, VAR_2);
      }
      VAR_3--;
   }
   return 0;
}
