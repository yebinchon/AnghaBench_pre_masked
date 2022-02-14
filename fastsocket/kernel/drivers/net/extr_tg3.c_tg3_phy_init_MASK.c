
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tg3 {int phy_flags; TYPE_2__* mdio_bus; TYPE_1__* pdev; int dev; } ;
struct phy_device {int interface; int supported; int advertising; int dev_flags; int dev; } ;
struct TYPE_4__ {struct phy_device** phy_map; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (struct phy_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 struct phy_device* FUNC_4 (int ,int ,int ,int ,int) ;
 int FUNC_5 (struct phy_device*) ;
 int VAR_8 ;
 int FUNC_6 (struct tg3*) ;

__attribute__((used)) static int FUNC_7(struct tg3 *VAR_9)
{
 struct phy_device *VAR_10;

 if (VAR_9->phy_flags & VAR_6)
  return 0;


 FUNC_6(VAR_9);

 VAR_10 = VAR_9->mdio_bus->phy_map[VAR_7];


 VAR_10 = FUNC_4(VAR_9->dev, FUNC_3(&VAR_10->dev), VAR_8,
        VAR_10->dev_flags, VAR_10->interface);
 if (FUNC_0(VAR_10)) {
  FUNC_2(&VAR_9->pdev->dev, "Could not attach to PHY\n");
  return FUNC_1(VAR_10);
 }


 switch (VAR_10->interface) {
 case 130:
 case 128:
  if (!(VAR_9->phy_flags & VAR_5)) {
   VAR_10->supported &= (VAR_2 |
           VAR_4 |
           VAR_3);
   break;
  }

 case 129:
  VAR_10->supported &= (VAR_1 |
          VAR_4 |
          VAR_3);
  break;
 default:
  FUNC_5(VAR_9->mdio_bus->phy_map[VAR_7]);
  return -VAR_0;
 }

 VAR_9->phy_flags |= VAR_6;

 VAR_10->advertising = VAR_10->supported;

 return 0;
}
