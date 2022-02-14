
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct w6692_hw {int name; struct w6692_ch* bc; } ;
struct TYPE_4__ {int state; scalar_t__ tx_idx; int Flags; scalar_t__ tx_skb; int err_xdu; int nr; int err_rdo; TYPE_1__* rx_skb; int err_inv; int err_crc; } ;
struct w6692_ch {TYPE_2__ bch; } ;
struct TYPE_3__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct w6692_ch*,int ) ;
 int FUNC_1 (struct w6692_ch*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct w6692_ch*,int ,int) ;
 int FUNC_3 (char*,int ,int ,...) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct w6692_ch*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct w6692_hw *VAR_21, int VAR_22)
{
 struct w6692_ch *VAR_23 = &VAR_21->bc[VAR_22];
 int VAR_24;
 u8 VAR_25, VAR_26 = 0;

 VAR_25 = FUNC_0(VAR_23, VAR_8);
 FUNC_3("%s: B%d EXIR %02x\n", VAR_21->name, VAR_23->bch.nr, VAR_25);
 if (VAR_25 & VAR_10) {
  VAR_26 = FUNC_0(VAR_23, VAR_16);
  if (VAR_26 & (VAR_18 | VAR_17 | VAR_19)) {
   if ((VAR_26 & VAR_18) &&
       FUNC_7(VAR_0, &VAR_23->bch.Flags)) {
    FUNC_3("%s: B%d RDOV proto=%x\n", VAR_21->name,
     VAR_23->bch.nr, VAR_23->bch.state);



   }
   if (FUNC_7(VAR_1, &VAR_23->bch.Flags)) {
    if (VAR_26 & VAR_17) {
     FUNC_3("%s: B%d CRC error\n",
      VAR_21->name, VAR_23->bch.nr);



    }
    if (VAR_26 & VAR_19) {
     FUNC_3("%s: B%d message abort\n",
      VAR_21->name, VAR_23->bch.nr);



    }
   }
   FUNC_2(VAR_23, VAR_3, VAR_4 |
    VAR_6 | VAR_5);
   if (VAR_23->bch.rx_skb)
    FUNC_6(VAR_23->bch.rx_skb, 0);
  } else {
   VAR_24 = FUNC_0(VAR_23, VAR_15) &
    (VAR_14 - 1);
   if (VAR_24 == 0)
    VAR_24 = VAR_14;
   FUNC_1(VAR_23, VAR_24);
   FUNC_4(&VAR_23->bch, 0);
  }
 }
 if (VAR_25 & VAR_11) {
  if (!(VAR_25 & VAR_10))
   VAR_26 = FUNC_0(VAR_23, VAR_16);
  if (VAR_26 & VAR_18) {
   FUNC_3("%s: B%d RDOV proto=%x\n", VAR_21->name,
    VAR_23->bch.nr, VAR_23->bch.state);



   FUNC_2(VAR_23, VAR_3, VAR_4 |
    VAR_6 | VAR_5);
  } else {
   FUNC_1(VAR_23, VAR_14);
   if (FUNC_7(VAR_2, &VAR_23->bch.Flags) &&
       VAR_23->bch.rx_skb && (VAR_23->bch.rx_skb->len > 0))
    FUNC_4(&VAR_23->bch, 0);
  }
 }
 if (VAR_25 & VAR_9) {

  if (!(VAR_26 & VAR_18)) {
   FUNC_3("%s: B%d RDOV IRQ proto=%x\n", VAR_21->name,
    VAR_23->bch.nr, VAR_23->bch.state);



   FUNC_2(VAR_23, VAR_3, VAR_4 |
    VAR_6 | VAR_5);
  }
 }
 if (VAR_25 & VAR_13) {
  if (!(VAR_25 & (VAR_10 | VAR_11))) {
   VAR_26 = FUNC_0(VAR_23, VAR_16);
   FUNC_3("%s: B%d star %02x\n", VAR_21->name,
    VAR_23->bch.nr, VAR_26);
  }
  if (VAR_26 & VAR_20) {
   FUNC_3("%s: B%d XDOW proto=%x\n", VAR_21->name,
    VAR_23->bch.nr, VAR_23->bch.state);



   FUNC_2(VAR_23, VAR_3, VAR_7 |
    VAR_5);

   if (VAR_23->bch.tx_skb) {
    if (!FUNC_7(VAR_2, &VAR_23->bch.Flags))
     VAR_23->bch.tx_idx = 0;
   }
  }
  FUNC_5(VAR_23);
  if (VAR_25 & VAR_12)
   return;
 }
 if (VAR_25 & VAR_12) {
  FUNC_3("%s: B%d XDUN proto=%x\n", VAR_21->name,
   VAR_23->bch.nr, VAR_23->bch.state);



  FUNC_2(VAR_23, VAR_3, VAR_7 | VAR_5);

  if (VAR_23->bch.tx_skb) {
   if (!FUNC_7(VAR_2, &VAR_23->bch.Flags))
    VAR_23->bch.tx_idx = 0;
  }
  FUNC_5(VAR_23);
 }
}
