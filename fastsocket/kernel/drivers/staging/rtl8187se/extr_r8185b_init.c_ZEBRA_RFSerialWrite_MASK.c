
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int enableB; int data; int clk; } ;
struct TYPE_4__ {int longData; TYPE_1__ struc; } ;
typedef TYPE_2__ ThreeWireReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,int ,int) ;
 int FUNC_5 (struct net_device*,int ,int) ;

void
FUNC_6(
 struct net_device *VAR_5,
 u32 VAR_6,
 u8 VAR_7,
 u8 VAR_8
 )
{
 ThreeWireReg VAR_9;
 int VAR_10;
 u16 VAR_11,VAR_12,VAR_13;
 u32 VAR_14;
 u16 VAR_15;

 u8 VAR_16;

 VAR_16 = FUNC_1(VAR_5, VAR_4);
 VAR_16 |= VAR_3;
 FUNC_4(VAR_5, VAR_4, VAR_16);
 VAR_15 = FUNC_2(VAR_5, VAR_1);
 VAR_11 = VAR_15 & 0xfff8;

 VAR_12 = FUNC_2(VAR_5, VAR_0);
 VAR_13 = FUNC_2(VAR_5, VAR_2);


 VAR_13 &= 0xfff8;

 FUNC_5(VAR_5, VAR_0, (VAR_12|0x0007));
 FUNC_5(VAR_5, VAR_2, (VAR_13|0x0007));
 FUNC_3(10);



 VAR_9.longData = 0;
 VAR_9.struc.enableB = 1;
 FUNC_5(VAR_5, VAR_1, (VAR_9.longData|VAR_11));
 FUNC_3(2);
 VAR_9.struc.enableB = 0;
 FUNC_5(VAR_5, VAR_1, (VAR_9.longData|VAR_11));
 FUNC_3(10);

 VAR_14 = (VAR_8)?0x01:((u32)0x01<<(VAR_7-1));

 for(VAR_10=0; VAR_10<VAR_7/2; VAR_10++)
 {
  VAR_9.struc.data = ((VAR_6&VAR_14)!=0) ? 1 : 0;
  FUNC_5(VAR_5, VAR_1, (VAR_9.longData|VAR_11));
  VAR_9.struc.clk = 1;
  FUNC_5(VAR_5, VAR_1, (VAR_9.longData|VAR_11));
  FUNC_5(VAR_5, VAR_1, (VAR_9.longData|VAR_11));

  VAR_14 = (VAR_8)?(VAR_14<<1):(VAR_14>>1);
  VAR_9.struc.data = ((VAR_6&VAR_14)!=0) ? 1 : 0;
  FUNC_5(VAR_5, VAR_1, (VAR_9.longData|VAR_11));
  FUNC_5(VAR_5, VAR_1, (VAR_9.longData|VAR_11));
  VAR_9.struc.clk = 0;
  FUNC_5(VAR_5, VAR_1, (VAR_9.longData|VAR_11));
  VAR_14 = (VAR_8)?(VAR_14<<1):(VAR_14>>1);
 }

 VAR_9.struc.enableB = 1;
 VAR_9.struc.clk = 0;
 VAR_9.struc.data = 0;
 FUNC_5(VAR_5, VAR_1, VAR_9.longData|VAR_11);
 FUNC_3(10);

 FUNC_5(VAR_5, VAR_1, VAR_11|0x0004);
 FUNC_5(VAR_5, VAR_2, VAR_13|0x0000);

 FUNC_0(VAR_5);
}
