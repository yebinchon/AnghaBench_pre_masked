
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int ,int) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_7, u8 VAR_8)
{
 u32 VAR_9 = ((u32)(VAR_8 & 0x1f)) << 27;
 u32 VAR_10;
 u32 VAR_11;
 u16 VAR_12,VAR_13,VAR_14,VAR_15;
 int VAR_16;
 short VAR_17, VAR_18;
 u8 VAR_19 = 6;
 u8 VAR_20 = 12;
 u8 VAR_21 = 0;

 VAR_12 = FUNC_0(VAR_7, VAR_5);
 VAR_13 = FUNC_0(VAR_7, VAR_3);
 VAR_14 = FUNC_0(VAR_7, VAR_6);

 FUNC_2(VAR_7, VAR_3, (VAR_13|0xf));
 FUNC_2(VAR_7, VAR_6, (VAR_14|0xf));

 VAR_10 = 0;

 VAR_12 &= ~0xf;

 FUNC_2(VAR_7, VAR_5, VAR_12 | VAR_1 ); FUNC_1(4);

 FUNC_2(VAR_7, VAR_5, VAR_12 ); FUNC_1(5);

 VAR_18 = 0;

 VAR_11 = (VAR_21) ? 0x01 : (((u32)0x01)<<(32-1));

 for (VAR_16 = 0; VAR_16 < VAR_19/2; VAR_16++) {
  VAR_17 = ((VAR_9&VAR_11) != 0) ? 1 : 0;
  FUNC_2(VAR_7, VAR_5, VAR_17|VAR_12 | VAR_18); FUNC_1(1);

  FUNC_2(VAR_7, VAR_5, VAR_17|VAR_12 | VAR_0 | VAR_18); FUNC_1(2);
  FUNC_2(VAR_7, VAR_5, VAR_17|VAR_12 | VAR_0 | VAR_18); FUNC_1(2);

  VAR_11 = (VAR_21) ? (VAR_11<<1): (VAR_11>>1);

  if (VAR_16 == 2) {
   VAR_18 = VAR_2;
   FUNC_2(VAR_7, VAR_5, VAR_17|VAR_12 | VAR_0 | VAR_18); FUNC_1(2);
   FUNC_2(VAR_7, VAR_5, VAR_17|VAR_12 | VAR_18); FUNC_1(2);
   break;
  }

  VAR_17 = ((VAR_9&VAR_11) != 0) ? 1: 0;

  FUNC_2(VAR_7, VAR_5, VAR_12|VAR_17|VAR_18| VAR_0); FUNC_1(2);
  FUNC_2(VAR_7, VAR_5, VAR_12|VAR_17|VAR_18| VAR_0); FUNC_1(2);

  FUNC_2(VAR_7, VAR_5, VAR_12| VAR_17 |VAR_18); FUNC_1(1);

  VAR_11 = (VAR_21) ? (VAR_11<<1) : (VAR_11>>1);
 }

 FUNC_2(VAR_7, VAR_5, VAR_18|VAR_12); FUNC_1(2);
 VAR_11 = (VAR_21) ? 0x01 : (((u32)0x01) << (12-1));





 FUNC_2(VAR_7, VAR_3, (VAR_13 & (~0x01)));

 for (VAR_16 = 0; VAR_16 < VAR_20; VAR_16++) {
  FUNC_2(VAR_7, VAR_5, VAR_18|VAR_12); FUNC_1(1);

  FUNC_2(VAR_7, VAR_5, VAR_18|VAR_12|VAR_0); FUNC_1(2);
  FUNC_2(VAR_7, VAR_5, VAR_18|VAR_12|VAR_0); FUNC_1(2);
  FUNC_2(VAR_7, VAR_5, VAR_18|VAR_12|VAR_0); FUNC_1(2);
  VAR_15 = FUNC_0(VAR_7, VAR_4);

  VAR_10 |= (VAR_15 & VAR_0 ? VAR_11 : 0);

  FUNC_2(VAR_7, VAR_5, (VAR_18|VAR_12)); FUNC_1(2);

  VAR_11 = (VAR_21) ? (VAR_11<<1) : (VAR_11>>1);
 }

 FUNC_2(VAR_7, VAR_5, VAR_1|VAR_2|VAR_12); FUNC_1(2);

 FUNC_2(VAR_7, VAR_3, VAR_13);
 FUNC_2(VAR_7, VAR_6, VAR_14);
 FUNC_2(VAR_7, VAR_5, 0x3a0);

 return VAR_10;
}
