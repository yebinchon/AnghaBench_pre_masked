
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int *) ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;

void FUNC_7(struct e1000_hw *VAR_9)
{
 s32 VAR_10;

 if (VAR_9->mac.type < VAR_7)
  return;

 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10) {
  FUNC_3("Failed to init PHY flow ret_val=%d\n", VAR_10);
  return;
 }






 if (VAR_9->phy.type == VAR_8) {
  u16 VAR_11;

  VAR_10 = VAR_9->phy.ops.acquire(VAR_9);
  if (VAR_10) {
   FUNC_3("Failed to setup iRST\n");
   return;
  }

  if (!(FUNC_4(VAR_1) & VAR_0)) {



   VAR_10 = FUNC_1(VAR_9, VAR_4, &VAR_11);
   if (VAR_10)
    goto release;
   VAR_11 |= VAR_5;
   FUNC_2(VAR_9, VAR_4, VAR_11);


   FUNC_2(VAR_9, VAR_6, 0);
  }

  VAR_10 = FUNC_1(VAR_9, VAR_2, &VAR_11);
  if (VAR_10)
   goto release;
  VAR_11 &= ~VAR_3;
  FUNC_2(VAR_9, VAR_2, VAR_11);
release:
  if (VAR_10)
   FUNC_3("Error %d in resume workarounds\n", VAR_10);
  VAR_9->phy.ops.release(VAR_9);
 }
}
