
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_6, bool VAR_7)
{
 u32 VAR_8 = FUNC_2(VAR_4);
 s32 VAR_9 = 0;

 if (VAR_7 && (FUNC_2(VAR_5) & VAR_3)) {
  u16 VAR_10;

  VAR_9 = VAR_6->phy.ops.acquire(VAR_6);
  if (VAR_9)
   return VAR_9;

  VAR_9 =
      FUNC_0(VAR_6, VAR_1,
      &VAR_10);
  if (VAR_9)
   goto release;

  VAR_9 =
      FUNC_1(VAR_6,
       VAR_1,
       VAR_10 &
       ~VAR_2);
  if (VAR_9)
   goto release;

  FUNC_6(10, 20);

  FUNC_3(VAR_4, VAR_8 | VAR_0);

  VAR_9 =
      FUNC_1(VAR_6,
       VAR_1,
       VAR_10);
release:
  VAR_6->phy.ops.release(VAR_6);
 } else {

  FUNC_3(VAR_4, VAR_8 & ~VAR_0);
 }

 return VAR_9;
}
