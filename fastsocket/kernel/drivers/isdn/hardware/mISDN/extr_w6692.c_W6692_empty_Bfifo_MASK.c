
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct w6692_hw {char* name; int log; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ maxlen; int nr; TYPE_2__* rx_skb; struct w6692_hw* hw; } ;
struct w6692_ch {TYPE_1__ bch; scalar_t__ addr; } ;
struct TYPE_6__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct w6692_ch*,int ,int) ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__,int *,int) ;
 TYPE_2__* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int * FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ,int,char*,int,char*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct w6692_ch *VAR_9, int VAR_10)
{
 struct w6692_hw *VAR_11 = VAR_9->bch.hw;
 u8 *VAR_12;

 FUNC_3("%s: empty_Bfifo %d\n", VAR_11->name, VAR_10);
 if (FUNC_9(VAR_9->bch.state == VAR_3)) {
  FUNC_3("%s: empty_Bfifo ISDN_P_NONE\n", VAR_11->name);
  FUNC_0(VAR_9, VAR_4, VAR_5 | VAR_6);
  if (VAR_9->bch.rx_skb)
   FUNC_7(VAR_9->bch.rx_skb, 0);
  return;
 }
 if (!VAR_9->bch.rx_skb) {
  VAR_9->bch.rx_skb = FUNC_2(VAR_9->bch.maxlen, VAR_2);
  if (FUNC_9(!VAR_9->bch.rx_skb)) {
   FUNC_4("%s: B receive out of memory\n", VAR_11->name);
   FUNC_0(VAR_9, VAR_4, VAR_5 |
    VAR_6);
   return;
  }
 }
 if (VAR_9->bch.rx_skb->len + VAR_10 > VAR_9->bch.maxlen) {
  FUNC_3("%s: empty_Bfifo incoming packet too large\n",
   VAR_11->name);
  FUNC_0(VAR_9, VAR_4, VAR_5 | VAR_6);
  FUNC_7(VAR_9->bch.rx_skb, 0);
  return;
 }
 VAR_12 = FUNC_6(VAR_9->bch.rx_skb, VAR_10);
 FUNC_1(VAR_9->addr + VAR_7, VAR_12, VAR_10);
 FUNC_0(VAR_9, VAR_4, VAR_5 | VAR_6);
 if (VAR_8 & VAR_0) {
  FUNC_8(VAR_11->log, 63, "B%1d-recv %s %d ",
   VAR_9->bch.nr, VAR_11->name, VAR_10);
  FUNC_5(VAR_11->log, VAR_1, VAR_12, VAR_10);
 }
}
