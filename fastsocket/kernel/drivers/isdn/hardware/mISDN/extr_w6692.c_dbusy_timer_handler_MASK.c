
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct w6692_hw {int lock; int name; } ;
struct dchannel {scalar_t__ tx_idx; int Flags; struct w6692_hw* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct w6692_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct w6692_hw*,int ,int ) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct dchannel *VAR_7)
{
 struct w6692_hw *VAR_8 = VAR_7->hw;
 int VAR_9, VAR_10;
 u_long VAR_11;

 if (FUNC_8(VAR_0, &VAR_7->Flags)) {
  FUNC_4(&VAR_8->lock, VAR_11);
  VAR_9 = FUNC_0(VAR_8, VAR_4);
  VAR_10 = FUNC_0(VAR_8, VAR_5);
  FUNC_2("%s: D-Channel Busy RBCH %02x STAR %02x\n",
   VAR_8->name, VAR_9, VAR_10);
  if (VAR_10 & VAR_6)
   FUNC_7(VAR_1, &VAR_7->Flags);
  else {

   FUNC_6(VAR_0, &VAR_7->Flags);
   if (VAR_7->tx_idx)
    VAR_7->tx_idx = 0;
   else
    FUNC_3("%s: W6692 D-Channel Busy no tx_idx\n",
     VAR_8->name);

   FUNC_1(VAR_8, VAR_2, VAR_3);
  }
  FUNC_5(&VAR_8->lock, VAR_11);
 }
}
