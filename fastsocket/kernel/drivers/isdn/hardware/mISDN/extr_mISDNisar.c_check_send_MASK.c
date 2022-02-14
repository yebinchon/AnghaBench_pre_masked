
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct isar_hw {int name; } ;
struct TYPE_4__ {scalar_t__ tx_idx; TYPE_1__* tx_skb; int Flags; } ;
struct isar_ch {TYPE_2__ bch; } ;
struct TYPE_3__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isar_ch*) ;
 int FUNC_1 (char*,int ,int) ;
 struct isar_ch* FUNC_2 (struct isar_hw*,int) ;
 int FUNC_3 (struct isar_ch*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct isar_hw *VAR_3, u8 VAR_4)
{
 struct isar_ch *VAR_5;

 FUNC_1("%s: rdm %x\n", VAR_3->name, VAR_4);
 if (VAR_4 & VAR_0) {
  VAR_5 = FUNC_2(VAR_3, 1);
  if (VAR_5 && FUNC_4(VAR_2, &VAR_5->bch.Flags)) {
   if (VAR_5->bch.tx_skb && (VAR_5->bch.tx_skb->len >
       VAR_5->bch.tx_idx))
    FUNC_0(VAR_5);
   else
    FUNC_3(VAR_5);
  }
 }
 if (VAR_4 & VAR_1) {
  VAR_5 = FUNC_2(VAR_3, 2);
  if (VAR_5 && FUNC_4(VAR_2, &VAR_5->bch.Flags)) {
   if (VAR_5->bch.tx_skb && (VAR_5->bch.tx_skb->len >
       VAR_5->bch.tx_idx))
    FUNC_0(VAR_5);
   else
    FUNC_3(VAR_5);
  }
 }
}
