
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int type; } ;
struct TYPE_4__ {int (* release ) (struct e1000_hw*) ;int (* check_reset_block ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct e1000_hw*,int) ;



 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static s32 FUNC_12(struct e1000_hw *VAR_12)
{
 u32 VAR_13, VAR_14 = FUNC_5(VAR_11);
 s32 VAR_15;




 FUNC_0(VAR_12, 1);

 VAR_15 = VAR_12->phy.ops.acquire(VAR_12);
 if (VAR_15) {
  FUNC_4("Failed to initialize PHY flow\n");
  goto out;
 }





 switch (VAR_12->mac.type) {
 case 129:
  if (FUNC_1(VAR_12))
   break;




  VAR_13 = FUNC_5(VAR_1);
  VAR_13 |= VAR_2;
  FUNC_6(VAR_1, VAR_13);





  FUNC_7(50);


 case 130:
  if (FUNC_1(VAR_12))
   break;


 case 128:
  if ((VAR_12->mac.type == 128) &&
      (VAR_14 & VAR_9))
   break;

  if (VAR_12->phy.ops.check_reset_block(VAR_12)) {
   FUNC_4("Required LANPHYPC toggle blocked by ME\n");
   VAR_15 = -VAR_6;
   break;
  }

  FUNC_4("Toggling LANPHYPC\n");


  VAR_13 = FUNC_5(VAR_10);
  VAR_13 &= ~VAR_8;
  VAR_13 |= VAR_7;
  FUNC_6(VAR_10, VAR_13);


  VAR_13 = FUNC_5(VAR_0);
  VAR_13 |= VAR_4;
  VAR_13 &= ~VAR_5;
  FUNC_6(VAR_0, VAR_13);
  FUNC_3();
  FUNC_11(10, 20);
  VAR_13 &= ~VAR_4;
  FUNC_6(VAR_0, VAR_13);
  FUNC_3();
  if (VAR_12->mac.type < 129) {
   FUNC_7(50);
  } else {
   u16 VAR_16 = 20;
   do {
    FUNC_11(5000, 10000);
   } while (!(FUNC_5(VAR_1) &
       VAR_3) && VAR_16--);
   FUNC_11(30000, 60000);
   if (FUNC_1(VAR_12))
    break;




   VAR_13 = FUNC_5(VAR_1);
   VAR_13 &= ~VAR_2;
   FUNC_6(VAR_1, VAR_13);

   if (FUNC_1(VAR_12))
    break;

   VAR_15 = -VAR_6;
  }
  break;
 default:
  break;
 }

 VAR_12->phy.ops.release(VAR_12);
 if (!VAR_15) {





  VAR_15 = FUNC_2(VAR_12);
 }

out:

 if ((VAR_12->mac.type == 130) &&
     !(VAR_14 & VAR_9)) {
  FUNC_11(10000, 20000);
  FUNC_0(VAR_12, 0);
 }

 return VAR_15;
}
