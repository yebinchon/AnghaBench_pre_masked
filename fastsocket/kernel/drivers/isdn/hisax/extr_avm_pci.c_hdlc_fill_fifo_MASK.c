
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_12__ {scalar_t__ isac; } ;
struct TYPE_13__ {TYPE_5__ avm; } ;
struct IsdnCardState {int debug; scalar_t__ subtyp; TYPE_6__ hw; } ;
struct TYPE_8__ {int xml; int cmd; } ;
struct TYPE_9__ {TYPE_1__ sr; } ;
struct TYPE_10__ {int count; TYPE_2__ ctrl; } ;
struct TYPE_11__ {TYPE_3__ hdlc; } ;
struct BCState {scalar_t__ mode; int tx_cnt; char* blog; scalar_t__ channel; TYPE_4__ hw; TYPE_7__* tx_skb; struct IsdnCardState* cs; } ;
struct TYPE_14__ {int len; int * data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int *,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct IsdnCardState*,char*,...) ;
 int FUNC_2 (unsigned int*,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_7__*,int) ;
 int FUNC_6 (char*,char*,char,int) ;
 int FUNC_7 (struct BCState*,int) ;

__attribute__((used)) static inline void
FUNC_8(struct BCState *VAR_7)
{
 struct IsdnCardState *VAR_8 = VAR_7->cs;
 int VAR_9, VAR_10 =0;
 int VAR_11 = 32;
 u_char *VAR_12;
 u_int *VAR_13;

 if ((VAR_8->debug & VAR_3) && !(VAR_8->debug & VAR_4))
  FUNC_1(VAR_8, "hdlc_fill_fifo");
 if (!VAR_7->tx_skb)
  return;
 if (VAR_7->tx_skb->len <= 0)
  return;

 VAR_7->hw.hdlc.ctrl.sr.cmd &= ~VAR_2;
 if (VAR_7->tx_skb->len > VAR_11) {
  VAR_9 = VAR_11;
 } else {
  VAR_9 = VAR_7->tx_skb->len;
  if (VAR_7->mode != VAR_5)
   VAR_7->hw.hdlc.ctrl.sr.cmd |= VAR_2;
 }
 if ((VAR_8->debug & VAR_3) && !(VAR_8->debug & VAR_4))
  FUNC_1(VAR_8, "hdlc_fill_fifo %d/%ld", VAR_9, VAR_7->tx_skb->len);
 VAR_12 = VAR_7->tx_skb->data;
 VAR_13 = (u_int *)VAR_12;
 FUNC_5(VAR_7->tx_skb, VAR_9);
 VAR_7->tx_cnt -= VAR_9;
 VAR_7->hw.hdlc.count += VAR_9;
 VAR_7->hw.hdlc.ctrl.sr.xml = ((VAR_9 == VAR_11) ? 0 : VAR_9);
 FUNC_7(VAR_7, 3);
 if (VAR_8->subtyp == VAR_0) {
  while (VAR_10<VAR_9) {



   FUNC_4(*VAR_13++, VAR_8->hw.avm.isac);

   VAR_10 += 4;
  }
 } else {
  while (VAR_10<VAR_9) {
   FUNC_3(*VAR_12++, VAR_8->hw.avm.isac);
   VAR_10++;
  }
 }
 if (VAR_8->debug & VAR_4) {
  char *VAR_14 = VAR_7->blog;

  if (VAR_8->subtyp == VAR_1)
   VAR_12 = (u_char *) VAR_13;
  VAR_14 += FUNC_6(VAR_14, "hdlc_fill_fifo %c cnt %d",
        VAR_7->channel ? 'B' : 'A', VAR_9);
  FUNC_0(VAR_14, VAR_12, VAR_9);
  FUNC_1(VAR_8, VAR_7->blog);
 }
}
