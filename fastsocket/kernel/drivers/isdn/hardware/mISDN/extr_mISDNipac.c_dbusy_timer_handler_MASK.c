
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_2__ {scalar_t__ tx_idx; int Flags; } ;
struct isac_hw {int hwlock; int name; TYPE_1__ dch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isac_hw*,int ) ;
 int FUNC_1 (struct isac_hw*,int ,int) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct isac_hw *VAR_6)
{
 int VAR_7, VAR_8;
 u_long VAR_9;

 if (FUNC_8(VAR_0, &VAR_6->dch.Flags)) {
  FUNC_4(VAR_6->hwlock, VAR_9);
  VAR_7 = FUNC_0(VAR_6, VAR_3);
  VAR_8 = FUNC_0(VAR_6, VAR_5);
  FUNC_2("%s: D-Channel Busy RBCH %02x STAR %02x\n",
   VAR_6->name, VAR_7, VAR_8);
  if (VAR_7 & VAR_4)
   FUNC_7(VAR_1, &VAR_6->dch.Flags);
  else {

   FUNC_6(VAR_0, &VAR_6->dch.Flags);
   if (VAR_6->dch.tx_idx)
    VAR_6->dch.tx_idx = 0;
   else
    FUNC_3("%s: ISAC D-Channel Busy no tx_idx\n",
     VAR_6->name);

   FUNC_1(VAR_6, VAR_2, 0x01);
  }
  FUNC_5(VAR_6->hwlock, VAR_9);
 }
}
