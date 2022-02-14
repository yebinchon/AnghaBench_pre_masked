
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {scalar_t__ interface; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*,int) ;
 int FUNC_2 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(VAR_1);


 if (VAR_1->interface == VAR_0) {
  u16 VAR_3;
  VAR_3 = 0x7 | (0x7 << 12);
  FUNC_2(VAR_1, 0x18, VAR_3);

  VAR_3 = FUNC_1(VAR_1, 0x18);

  VAR_3 |= (1 << 8);

  VAR_3 |= (1 << 15);
  FUNC_2(VAR_1, 0x18, VAR_3);
 }

 return VAR_2;
}
