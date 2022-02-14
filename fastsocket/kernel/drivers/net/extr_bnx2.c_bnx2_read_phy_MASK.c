
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_9, u32 VAR_10, u32 *VAR_11)
{
 u32 VAR_12;
 int VAR_13, VAR_14;

 if (VAR_9->phy_flags & VAR_7) {
  VAR_12 = FUNC_0(VAR_9, VAR_5);
  VAR_12 &= ~VAR_6;

  FUNC_1(VAR_9, VAR_5, VAR_12);
  FUNC_0(VAR_9, VAR_5);

  FUNC_2(40);
 }

 VAR_12 = (VAR_9->phy_addr << 21) | (VAR_10 << 16) |
  VAR_1 | VAR_3 |
  VAR_4;
 FUNC_1(VAR_9, VAR_0, VAR_12);

 for (VAR_13 = 0; VAR_13 < 50; VAR_13++) {
  FUNC_2(10);

  VAR_12 = FUNC_0(VAR_9, VAR_0);
  if (!(VAR_12 & VAR_4)) {
   FUNC_2(5);

   VAR_12 = FUNC_0(VAR_9, VAR_0);
   VAR_12 &= VAR_2;

   break;
  }
 }

 if (VAR_12 & VAR_4) {
  *VAR_11 = 0x0;
  VAR_14 = -VAR_8;
 }
 else {
  *VAR_11 = VAR_12;
  VAR_14 = 0;
 }

 if (VAR_9->phy_flags & VAR_7) {
  VAR_12 = FUNC_0(VAR_9, VAR_5);
  VAR_12 |= VAR_6;

  FUNC_1(VAR_9, VAR_5, VAR_12);
  FUNC_0(VAR_9, VAR_5);

  FUNC_2(40);
 }

 return VAR_14;
}
