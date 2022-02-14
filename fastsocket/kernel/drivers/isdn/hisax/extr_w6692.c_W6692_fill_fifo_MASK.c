
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct IsdnCardState {int debug; int tx_cnt; char* dlog; TYPE_2__ dbusytimer; int HW_Flags; int (* writeW6692 ) (struct IsdnCardState*,int ,int) ;int (* writeW6692fifo ) (struct IsdnCardState*,int *,int) ;TYPE_1__* tx_skb; } ;
struct TYPE_5__ {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct IsdnCardState*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (struct IsdnCardState*,int *,int) ;
 int FUNC_8 (struct IsdnCardState*,int ,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct IsdnCardState *VAR_10)
{
 int VAR_11, VAR_12;
 u_char *VAR_13;

 if ((VAR_10->debug & VAR_3) && !(VAR_10->debug & VAR_4))
  FUNC_2(VAR_10, "W6692_fill_fifo");

 if (!VAR_10->tx_skb)
  return;

 VAR_11 = VAR_10->tx_skb->len;
 if (VAR_11 <= 0)
  return;

 VAR_12 = 0;
 if (VAR_11 > VAR_8) {
  VAR_12 = !0;
  VAR_11 = VAR_8;
 }
 VAR_13 = VAR_10->tx_skb->data;
 FUNC_5(VAR_10->tx_skb, VAR_11);
 VAR_10->tx_cnt += VAR_11;
 VAR_10->writeW6692fifo(VAR_10, VAR_13, VAR_11);
 VAR_10->writeW6692(VAR_10, VAR_5, VAR_12 ? VAR_7 : (VAR_7 | VAR_6));
 if (FUNC_9(VAR_1, &VAR_10->HW_Flags)) {
  FUNC_2(VAR_10, "W6692_fill_fifo dbusytimer running");
  FUNC_3(&VAR_10->dbusytimer);
 }
 FUNC_4(&VAR_10->dbusytimer);
 VAR_10->dbusytimer.expires = VAR_9 + ((VAR_0 * VAR_2) / 1000);
 FUNC_1(&VAR_10->dbusytimer);
 if (VAR_10->debug & VAR_4) {
  char *VAR_14 = VAR_10->dlog;

  VAR_14 += FUNC_6(VAR_14, "W6692_fill_fifo cnt %d", VAR_11);
  FUNC_0(VAR_14, VAR_13, VAR_11);
  FUNC_2(VAR_10, VAR_10->dlog);
 }
}
