
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct IsdnCardState {int debug; int tx_cnt; char* dlog; TYPE_2__ dbusytimer; int HW_Flags; int (* writeisac ) (struct IsdnCardState*,int ,int) ;int (* writeisacfifo ) (struct IsdnCardState*,int*,int) ;TYPE_1__* tx_skb; } ;
struct TYPE_5__ {int len; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct IsdnCardState*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (struct IsdnCardState*,int*,int) ;
 int FUNC_8 (struct IsdnCardState*,int ,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct IsdnCardState *VAR_8)
{
 int VAR_9;
 u_char VAR_10, *VAR_11;

 if ((VAR_8->debug &VAR_5) && !(VAR_8->debug &VAR_6))
  FUNC_2(VAR_8, "dch_fill_fifo()");

 if (!VAR_8->tx_skb) return;
 VAR_9 = VAR_8->tx_skb->len;
 if (VAR_9 <= 0) return;

 if (VAR_9 > VAR_1) {
  VAR_9 = VAR_1;
  VAR_10 = 0x08;
 } else {
  VAR_10 = 0x0A;
 }

 VAR_11 = VAR_8->tx_skb->data;
 FUNC_5(VAR_8->tx_skb, VAR_9);
 VAR_8->tx_cnt += VAR_9;
 VAR_8->writeisacfifo(VAR_8, VAR_11, VAR_9);
 VAR_8->writeisac(VAR_8, VAR_4, VAR_10);


 if (FUNC_9(VAR_2, &VAR_8->HW_Flags)) {
  FUNC_2(VAR_8, "dch_fill_fifo dbusytimer running");
  FUNC_3(&VAR_8->dbusytimer);
 }
 FUNC_4(&VAR_8->dbusytimer);
 VAR_8->dbusytimer.expires = VAR_7 + ((VAR_0 * VAR_3)/1000);
 FUNC_1(&VAR_8->dbusytimer);

 if (VAR_8->debug &VAR_6) {
  char *VAR_12 = VAR_8->dlog;

  VAR_12 += FUNC_6(VAR_12, "dch_fill_fifo() cnt %d", VAR_9);
  FUNC_0(VAR_12, VAR_11, VAR_9);
  FUNC_2(VAR_8, VAR_8->dlog);
 }
}
