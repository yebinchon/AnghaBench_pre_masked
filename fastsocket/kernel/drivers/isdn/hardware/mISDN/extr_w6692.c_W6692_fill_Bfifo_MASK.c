
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct w6692_hw {char* name; int log; } ;
struct TYPE_4__ {int tx_idx; int nr; int Flags; TYPE_1__* tx_skb; struct w6692_hw* hw; } ;
struct w6692_ch {TYPE_2__ bch; scalar_t__ addr; } ;
struct TYPE_3__ {int len; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct w6692_ch*,int ,int) ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__,int*,int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int,char*,int,char*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct w6692_ch *VAR_10)
{
 struct w6692_hw *VAR_11 = VAR_10->bch.hw;
 int VAR_12;
 u8 *VAR_13, VAR_14 = VAR_4 | VAR_6;

 FUNC_2("%s: fill Bfifo\n", VAR_11->name);
 if (!VAR_10->bch.tx_skb)
  return;
 VAR_12 = VAR_10->bch.tx_skb->len - VAR_10->bch.tx_idx;
 if (VAR_12 <= 0)
  return;
 VAR_13 = VAR_10->bch.tx_skb->data + VAR_10->bch.tx_idx;
 if (VAR_12 > VAR_7)
  VAR_12 = VAR_7;
 else if (FUNC_5(VAR_2, &VAR_10->bch.Flags))
  VAR_14 |= VAR_5;

 FUNC_2("%s: fill Bfifo%d/%d\n", VAR_11->name,
   VAR_12, VAR_10->bch.tx_idx);
 VAR_10->bch.tx_idx += VAR_12;
 FUNC_1(VAR_10->addr + VAR_8, VAR_13, VAR_12);
 FUNC_0(VAR_10, VAR_3, VAR_14);
 if (VAR_9 & VAR_0) {
  FUNC_4(VAR_11->log, 63, "B%1d-send %s %d ",
   VAR_10->bch.nr, VAR_11->name, VAR_12);
  FUNC_3(VAR_11->log, VAR_1, VAR_13, VAR_12);
 }
}
