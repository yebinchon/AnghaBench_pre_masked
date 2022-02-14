
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ expires; } ;
struct TYPE_7__ {scalar_t__ tx_xmtlen; } ;
struct TYPE_8__ {TYPE_1__ amd7930; } ;
struct IsdnCardState {int debug; scalar_t__ tx_cnt; char* dlog; TYPE_4__ dbusytimer; int HW_Flags; TYPE_2__ dc; TYPE_3__* tx_skb; } ;
typedef scalar_t__ WORD ;
struct TYPE_9__ {scalar_t__ len; int* data; } ;
typedef int BYTE ;


 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int*,scalar_t__) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct IsdnCardState*,char*,...) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (struct IsdnCardState*,int) ;
 scalar_t__ FUNC_10 (struct IsdnCardState*,int) ;
 int FUNC_11 (TYPE_3__*,scalar_t__) ;
 int FUNC_12 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (struct IsdnCardState*,int,int) ;
 int FUNC_15 (struct IsdnCardState*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_16(struct IsdnCardState *VAR_6)
{

        WORD VAR_7, VAR_8, VAR_9, VAR_10;
        BYTE VAR_11, VAR_12;
        BYTE *VAR_13, *VAR_14;

 if ((VAR_6->debug & VAR_3) && !(VAR_6->debug & VAR_4))
  FUNC_6(VAR_6, "Amd7930: fill_Dfifo");

 if ((!VAR_6->tx_skb) || (VAR_6->tx_skb->len <= 0))
  return;

        VAR_8 = 0;
        if(!VAR_6->dc.amd7930.tx_xmtlen)

                VAR_9 = VAR_8 = VAR_6->tx_skb->len;

        else VAR_9 = VAR_6->dc.amd7930.tx_xmtlen;



 FUNC_0(VAR_6);

        VAR_14 = VAR_13 = VAR_6->tx_skb->data;


        VAR_11 = 0x10;
        while((VAR_11 & 0x10) && (VAR_6->tx_cnt < VAR_9)) {
                FUNC_14(VAR_6, 0x04, *VAR_13);
                VAR_13++;
                VAR_6->tx_cnt++;
                VAR_11= FUNC_9(VAR_6, 0x07);
        }
        VAR_10 = VAR_13 - VAR_6->tx_skb->data;
 FUNC_11(VAR_6->tx_skb, VAR_10);


        VAR_7 = FUNC_10(VAR_6, 0x85);
        VAR_12 = FUNC_9(VAR_6, 0x8E);

 if (VAR_6->debug & VAR_3) {
  FUNC_6(VAR_6, "Amd7930: fill_Dfifo, DMR3: 0x%02X, DTCR read: 0x%04X write: 0x%02X 0x%02X", VAR_12, VAR_7, FUNC_3(VAR_8), FUNC_2(VAR_8));
        }


        if(!VAR_6->dc.amd7930.tx_xmtlen) {
                FUNC_15(VAR_6, 0x85, VAR_8);
                VAR_6->dc.amd7930.tx_xmtlen = VAR_8;
        }

 if (FUNC_13(VAR_1, &VAR_6->HW_Flags)) {
  FUNC_6(VAR_6, "Amd7930: fill_Dfifo dbusytimer running");
  FUNC_7(&VAR_6->dbusytimer);
 }
 FUNC_8(&VAR_6->dbusytimer);
 VAR_6->dbusytimer.expires = VAR_5 + ((VAR_0 * VAR_2) / 1000);
 FUNC_5(&VAR_6->dbusytimer);

 if (VAR_6->debug & VAR_4) {
  char *VAR_15 = VAR_6->dlog;

  VAR_15 += FUNC_12(VAR_15, "Amd7930: fill_Dfifo cnt: %d |", VAR_10);
  FUNC_4(VAR_15, VAR_14, VAR_10);
  FUNC_6(VAR_6, VAR_6->dlog);
 }

        FUNC_1(VAR_6);
}
