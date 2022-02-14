
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 static int VAR_11;
 VAR_9 = FUNC_0(VAR_8);

 if (VAR_11 != VAR_8->speed) {
  VAR_11 = VAR_8->speed;
  VAR_10 = FUNC_1(VAR_8, VAR_4);
  if ((VAR_10 & VAR_3) ==
     VAR_1) {
   VAR_10 = FUNC_1(VAR_8, VAR_0);
   VAR_10 &= ~VAR_7;
   FUNC_2(VAR_8, VAR_0, VAR_10 | VAR_2 | VAR_5 | VAR_6);




  }
 }
 return VAR_9;
}
