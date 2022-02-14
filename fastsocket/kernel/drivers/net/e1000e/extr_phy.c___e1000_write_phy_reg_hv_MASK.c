
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {int addr; scalar_t__ type; int revision; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int*,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int*,int,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int,int) ;
 int FUNC_7 (char*,int,int,int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_6, u32 VAR_7, u16 VAR_8,
        bool VAR_9, bool VAR_10)
{
 s32 VAR_11;
 u16 VAR_12 = FUNC_1(VAR_7);
 u16 VAR_13 = FUNC_0(VAR_7);
 u32 VAR_14 = VAR_6->phy.addr = FUNC_4(VAR_12);

 if (!VAR_9) {
  VAR_11 = VAR_6->phy.ops.acquire(VAR_6);
  if (VAR_11)
   return VAR_11;
 }


 if (VAR_12 == VAR_0) {
  VAR_11 = FUNC_3(VAR_6, VAR_7, &VAR_8,
        0, VAR_10);
  goto out;
 }

 if (VAR_12 > 0 && VAR_12 < VAR_1) {
  VAR_11 = FUNC_2(VAR_6, VAR_7,
        &VAR_8, 0);
  goto out;
 }

 if (!VAR_10) {
  if (VAR_12 == VAR_1)
   VAR_12 = 0;




  if ((VAR_6->phy.type == VAR_5) &&
      (VAR_6->phy.revision >= 1) &&
      (VAR_6->phy.addr == 2) &&
      !(VAR_4 & VAR_13) && (VAR_8 & (1 << 11))) {
   u16 VAR_15 = 0x7EFF;
   VAR_11 = FUNC_2(VAR_6,
         (1 << 6) | 0x3,
         &VAR_15, 0);
   if (VAR_11)
    goto out;
  }

  if (VAR_13 > VAR_3) {

   VAR_11 = FUNC_5(VAR_6,
           (VAR_12 << VAR_2));

   VAR_6->phy.addr = VAR_14;

   if (VAR_11)
    goto out;
  }
 }

 FUNC_7("writing PHY page %d (or 0x%x shifted) reg 0x%x\n", VAR_12,
       VAR_12 << VAR_2, VAR_13);

 VAR_11 = FUNC_6(VAR_6, VAR_4 & VAR_13,
         VAR_8);

out:
 if (!VAR_9)
  VAR_6->phy.ops.release(VAR_6);

 return VAR_11;
}
