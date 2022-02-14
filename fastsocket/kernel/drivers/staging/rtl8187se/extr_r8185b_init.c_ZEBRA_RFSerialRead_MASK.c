
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
struct TYPE_3__ {int enableB; int clk; int read_write; int data; } ;
struct TYPE_4__ {int longData; TYPE_1__ struc; } ;
typedef TYPE_2__ ThreeWireReg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*,int ,int) ;

void
FUNC_5(
 struct net_device *VAR_6,
 u32 VAR_7,
 u8 VAR_8,
 u32 *VAR_9,
 u8 VAR_10,
 u8 VAR_11
 )
{
 ThreeWireReg VAR_12;
 int VAR_13;
 u16 VAR_14,VAR_15,VAR_16,VAR_17, VAR_18;
 u32 VAR_19;
 u8 VAR_20;
 ThreeWireReg VAR_21;

 {
  VAR_20 = FUNC_0(VAR_6, VAR_5);
  VAR_20 |= VAR_4;
  FUNC_3(VAR_6, VAR_5, VAR_20);
 }

 VAR_18 = VAR_14 = FUNC_1(VAR_6, VAR_2);
 VAR_15 = FUNC_1(VAR_6, VAR_0);
 VAR_16 = FUNC_1(VAR_6, VAR_3);

 FUNC_4(VAR_6, VAR_0, VAR_15|0xf);
 FUNC_4(VAR_6, VAR_3, VAR_16|0xf);

 *VAR_9 = 0;




 VAR_14 &= ~0xf;


 VAR_12.longData = 0;
 VAR_12.struc.enableB = 1;
 FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(4);

 VAR_12.longData = 0;
 VAR_12.struc.enableB = 0;
 VAR_12.struc.clk = 0;
 VAR_12.struc.read_write = 0;
 FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(5);

 VAR_19 = (VAR_11) ? 0x01 : ((u32)0x01<<(32-1));
 for(VAR_13 = 0; VAR_13 < VAR_8/2; VAR_13++)
 {
  VAR_12.struc.data = ((VAR_7&VAR_19) != 0) ? 1 : 0;
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(1);
  VAR_12.struc.clk = 1;
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);

  VAR_19 = (VAR_11) ? (VAR_19<<1): (VAR_19>>1);

  if(VAR_13 == 2)
  {




   VAR_12.struc.read_write=1;
   FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);
   VAR_12.struc.clk = 0;
   FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);
   break;
  }
  VAR_12.struc.data = ((VAR_7&VAR_19) != 0) ? 1: 0;
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);

  VAR_12.struc.clk = 0;
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(1);

  VAR_19 = (VAR_11) ? (VAR_19<<1) : (VAR_19>>1);
 }

 VAR_12.struc.clk = 0;
 VAR_12.struc.data = 0;
 FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);
 VAR_19 = (VAR_11) ? 0x01 : ((u32)0x01 << (12-1));






 FUNC_4(VAR_6, VAR_0, ( ((VAR_15|0x0E) & (~0x01))) );

 for(VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
 {
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(1);
  VAR_12.struc.clk = 1;
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);
  VAR_17 = FUNC_1(VAR_6, VAR_1);
  VAR_21.longData = VAR_17;
  *VAR_9 |= VAR_21.struc.clk ? VAR_19 : 0;

  VAR_12.struc.clk = 0;
  FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);

  VAR_19 = (VAR_11) ? (VAR_19<<1) : (VAR_19>>1);
 }
 VAR_12.struc.enableB = 1;
 VAR_12.struc.clk = 0;
 VAR_12.struc.data = 0;
 VAR_12.struc.read_write = 1;
 FUNC_4(VAR_6, VAR_2, VAR_12.longData|VAR_14); FUNC_2(2);


 FUNC_4(VAR_6, VAR_0, VAR_15);

 FUNC_4(VAR_6, VAR_3, VAR_16);

 FUNC_4(VAR_6, VAR_2, 0x3a0);

}
