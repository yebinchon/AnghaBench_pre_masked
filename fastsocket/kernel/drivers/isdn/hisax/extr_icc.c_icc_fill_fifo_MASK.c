
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct IsdnCardState {int debug; int tx_cnt; char* dlog; TYPE_2__ dbusytimer; int HW_Flags; int (* writeisac ) (struct IsdnCardState*,int ,int) ;int (* writeisacfifo ) (struct IsdnCardState*,int *,int) ;TYPE_1__* tx_skb; } ;
struct TYPE_5__ {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct IsdnCardState*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (struct IsdnCardState*,int *,int) ;
 int FUNC_8 (struct IsdnCardState*,int ,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct IsdnCardState *VAR_7)
{
 int VAR_8, VAR_9;
 u_char *VAR_10;

 if ((VAR_7->debug & VAR_4) && !(VAR_7->debug & VAR_5))
  FUNC_2(VAR_7, "icc_fill_fifo");

 if (!VAR_7->tx_skb)
  return;

 VAR_8 = VAR_7->tx_skb->len;
 if (VAR_8 <= 0)
  return;

 VAR_9 = 0;
 if (VAR_8 > 32) {
  VAR_9 = !0;
  VAR_8 = 32;
 }
 VAR_10 = VAR_7->tx_skb->data;
 FUNC_5(VAR_7->tx_skb, VAR_8);
 VAR_7->tx_cnt += VAR_8;
 VAR_7->writeisacfifo(VAR_7, VAR_10, VAR_8);
 VAR_7->writeisac(VAR_7, VAR_3, VAR_9 ? 0x8 : 0xa);
 if (FUNC_9(VAR_1, &VAR_7->HW_Flags)) {
  FUNC_2(VAR_7, "icc_fill_fifo dbusytimer running");
  FUNC_3(&VAR_7->dbusytimer);
 }
 FUNC_4(&VAR_7->dbusytimer);
 VAR_7->dbusytimer.expires = VAR_6 + ((VAR_0 * VAR_2)/1000);
 FUNC_1(&VAR_7->dbusytimer);
 if (VAR_7->debug & VAR_5) {
  char *VAR_11 = VAR_7->dlog;

  VAR_11 += FUNC_6(VAR_11, "icc_fill_fifo cnt %d", VAR_8);
  FUNC_0(VAR_11, VAR_10, VAR_8);
  FUNC_2(VAR_7, VAR_7->dlog);
 }
}
