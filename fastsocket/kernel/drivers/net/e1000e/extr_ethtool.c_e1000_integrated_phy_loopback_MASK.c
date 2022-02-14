
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;int (* commit ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {int type; scalar_t__ media_type; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ autoneg; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
struct e1000_adapter {int flags; struct e1000_hw hw; } ;
typedef int s32 ;


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
 int FUNC_0 (int,int) ;
 int VAR_15 ;
 int FUNC_1 (struct e1000_hw*,int) ;
 scalar_t__ VAR_16 ;




 int FUNC_2 (struct e1000_adapter*) ;

 int VAR_17 ;

 int FUNC_3 () ;
 int FUNC_4 (struct e1000_hw*,int ,int*) ;
 int FUNC_5 (struct e1000_hw*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct e1000_adapter *VAR_18)
{
 struct e1000_hw *VAR_19 = &VAR_18->hw;
 u32 VAR_20 = 0;
 u16 VAR_21 = 0;
 s32 VAR_22 = 0;

 VAR_19->mac.autoneg = 0;

 if (VAR_19->phy.type == VAR_17) {

  FUNC_5(VAR_19, VAR_14, 0x6100);


  VAR_20 = FUNC_7(VAR_0);
  VAR_20 &= ~VAR_8;
  VAR_20 |= (VAR_3 |
        VAR_2 |
        VAR_6 |
        VAR_1);

  FUNC_8(VAR_0, VAR_20);
  FUNC_3();
  FUNC_13(500, 1000);

  return 0;
 }


 switch (VAR_19->phy.type) {
 case 128:

  FUNC_5(VAR_19, VAR_13, 0x0808);

  FUNC_5(VAR_19, VAR_14, 0x9140);

  FUNC_5(VAR_19, VAR_14, 0x8140);
  break;
 case 129:
  FUNC_5(VAR_19, VAR_11, 0x1CC);
  break;
 case 130:

  FUNC_4(VAR_19, FUNC_0(2, 21), &VAR_21);
  VAR_21 &= ~0x0007;
  VAR_21 |= 0x006;
  FUNC_5(VAR_19, FUNC_0(2, 21), VAR_21);

  VAR_19->phy.ops.commit(VAR_19);
  FUNC_13(1000, 2000);

  FUNC_4(VAR_19, FUNC_0(769, 16), &VAR_21);
  FUNC_5(VAR_19, FUNC_0(769, 16), VAR_21 | 0x000C);

  FUNC_4(VAR_19, FUNC_0(776, 16), &VAR_21);
  FUNC_5(VAR_19, FUNC_0(776, 16), VAR_21 | 0x0040);

  FUNC_4(VAR_19, FUNC_0(769, 16), &VAR_21);
  FUNC_5(VAR_19, FUNC_0(769, 16), VAR_21 | 0x0040);

  FUNC_4(VAR_19, FUNC_0(769, 20), &VAR_21);
  FUNC_5(VAR_19, FUNC_0(769, 20), VAR_21 | 0x0400);
  break;
 case 133:
 case 132:

  VAR_22 = VAR_19->phy.ops.acquire(VAR_19);
  if (VAR_22) {
   FUNC_6("Cannot setup 1Gbps loopback.\n");
   return VAR_22;
  }
  FUNC_1(VAR_19, 0);
  VAR_19->phy.ops.release(VAR_19);
  break;
 case 131:

  FUNC_4(VAR_19, FUNC_0(0, 21), &VAR_21);
  FUNC_5(VAR_19, FUNC_0(0, 21), VAR_21 & ~(1 << 3));

  FUNC_4(VAR_19, FUNC_0(776, 18), &VAR_21);
  FUNC_5(VAR_19, FUNC_0(776, 18), VAR_21 | 1);

  FUNC_5(VAR_19, VAR_12, 0x8001);
  break;
 default:
  break;
 }


 FUNC_5(VAR_19, VAR_14, 0x4140);
 FUNC_9(250);


 VAR_20 = FUNC_7(VAR_0);
 VAR_20 &= ~VAR_8;
 VAR_20 |= (VAR_3 |
       VAR_2 |
       VAR_7 |
       VAR_1);

 if (VAR_18->flags & VAR_10)
  VAR_20 |= VAR_5;

 if (VAR_19->phy.media_type == VAR_16 &&
     VAR_19->phy.type == 128) {
  VAR_20 |= VAR_4;
 } else {



  if ((FUNC_7(VAR_15) & VAR_9) == 0)
   VAR_20 |= (VAR_4 | VAR_5);
 }

 FUNC_8(VAR_0, VAR_20);




 if (VAR_19->phy.type == 128)
  FUNC_2(VAR_18);

 FUNC_13(500, 1000);

 return 0;
}
