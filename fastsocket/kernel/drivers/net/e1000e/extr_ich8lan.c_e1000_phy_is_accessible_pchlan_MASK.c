
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_5__ {int id; int revision; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (struct e1000_hw*) ;

__attribute__((used)) static bool FUNC_8(struct e1000_hw *VAR_8)
{
 u16 VAR_9 = 0;
 u32 VAR_10 = 0;
 s32 VAR_11;
 u16 VAR_12;
 u32 VAR_13 = 0;

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  VAR_11 = FUNC_2(VAR_8, VAR_4, &VAR_9);
  if (VAR_11 || (VAR_9 == 0xFFFF))
   continue;
  VAR_10 = (u32)(VAR_9 << 16);

  VAR_11 = FUNC_2(VAR_8, VAR_5, &VAR_9);
  if (VAR_11 || (VAR_9 == 0xFFFF)) {
   VAR_10 = 0;
   continue;
  }
  VAR_10 |= (u32)(VAR_9 & VAR_6);
  break;
 }

 if (VAR_8->phy.id) {
  if (VAR_8->phy.id == VAR_10)
   goto out;
 } else if (VAR_10) {
  VAR_8->phy.id = VAR_10;
  VAR_8->phy.revision = (u32)(VAR_9 & ~VAR_6);
  goto out;
 }




 VAR_8->phy.ops.release(VAR_8);
 VAR_11 = FUNC_0(VAR_8);
 if (!VAR_11)
  VAR_11 = FUNC_1(VAR_8);
 VAR_8->phy.ops.acquire(VAR_8);

 if (VAR_11)
  return 0;
out:
 if (VAR_8->mac.type == VAR_7) {

  FUNC_2(VAR_8, VAR_1, &VAR_9);
  VAR_9 &= ~VAR_2;
  FUNC_3(VAR_8, VAR_1, VAR_9);


  VAR_13 = FUNC_4(VAR_0);
  VAR_13 &= ~VAR_3;
  FUNC_5(VAR_0, VAR_13);
 }

 return 1;
}
