
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int nr; int tx_idx; int Flags; scalar_t__ rx_skb; } ;
struct hscx_hw {TYPE_2__ bch; TYPE_1__* ip; int fifo_size; } ;
struct TYPE_3__ {int type; int name; struct hscx_hw* hscx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (struct hscx_hw*,int ) ;
 int FUNC_1 (struct hscx_hw*,int) ;
 int FUNC_2 (struct hscx_hw*,int ) ;
 int FUNC_3 (struct hscx_hw*) ;
 int FUNC_4 (struct hscx_hw*) ;
 int FUNC_5 (struct hscx_hw*) ;
 int FUNC_6 (char*,int ,int,...) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct hscx_hw *VAR_19, u8 VAR_20)
{
 u8 VAR_21, VAR_22, VAR_23 = 0;

 if (VAR_19->ip->type & VAR_16)
  VAR_21 = FUNC_0(VAR_19, VAR_10);
 else if (VAR_19->ip->type & VAR_15) {
  VAR_21 = FUNC_0(VAR_19, VAR_14);
  VAR_22 = (VAR_19->bch.nr & 1) ? VAR_17 : VAR_18;
  if (VAR_22 & VAR_20) {
   VAR_23 = FUNC_0(VAR_19, VAR_13);
   FUNC_6("%s: B%1d EXIRB %02x\n", VAR_19->ip->name,
    VAR_19->bch.nr, VAR_23);
  }
 } else if (VAR_19->bch.nr & 2) {
  if (VAR_20 & (VAR_2 | VAR_4))
   FUNC_9(&VAR_19->ip->hscx[0], VAR_20);
  if (VAR_20 & VAR_3) {
   VAR_23 = FUNC_0(VAR_19, VAR_13);
   FUNC_6("%s: B%1d EXIRB %02x\n", VAR_19->ip->name,
    VAR_19->bch.nr, VAR_23);
  }
  VAR_21 = VAR_20 & 0xF8;
 } else {
  VAR_21 = FUNC_0(VAR_19, VAR_14);
  if (VAR_20 & VAR_2) {
   VAR_23 = FUNC_0(VAR_19, VAR_13);
   FUNC_6("%s: B%1d EXIRB %02x\n", VAR_19->ip->name,
    VAR_19->bch.nr, VAR_23);
  }
  VAR_21 = VAR_21 & 0xF8;
 }
 if (VAR_23 & VAR_12)
  VAR_21 |= VAR_8;
 if (VAR_23 & VAR_11)
  VAR_21 |= VAR_5;
 FUNC_6("%s: B%1d ISTAB %02x\n", VAR_19->ip->name, VAR_19->bch.nr, VAR_21);

 if (!FUNC_8(VAR_0, &VAR_19->bch.Flags))
  return;

 if (VAR_21 & VAR_6)
  FUNC_5(VAR_19);

 if (VAR_21 & VAR_7) {
  FUNC_2(VAR_19, VAR_19->fifo_size);
  if (FUNC_8(VAR_1, &VAR_19->bch.Flags)) {

   if (VAR_19->bch.rx_skb)
    FUNC_7(&VAR_19->bch, 0);
  }
 }

 if (VAR_21 & VAR_5) {
  FUNC_6("%s: B%1d RFO error\n", VAR_19->ip->name, VAR_19->bch.nr);
  FUNC_1(VAR_19, 0x40);
 }

 if (VAR_21 & VAR_9)
  FUNC_4(VAR_19);

 if (VAR_21 & VAR_8) {
  if (FUNC_8(VAR_1, &VAR_19->bch.Flags)) {
   FUNC_3(VAR_19);
   return;
  }
  FUNC_6("%s: B%1d XDU error at len %d\n", VAR_19->ip->name,
   VAR_19->bch.nr, VAR_19->bch.tx_idx);
  VAR_19->bch.tx_idx = 0;
  FUNC_1(VAR_19, 0x01);
 }
}
