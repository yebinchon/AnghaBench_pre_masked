
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int mii; } ;
struct ethtool_cmd {int duplex; int speed; } ;


 int FUNC_0 (struct usbnet*,char*,int ,int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_0)
{
 struct ethtool_cmd VAR_1;

 FUNC_1(&VAR_0->mii, 1, 1);
 FUNC_2(&VAR_0->mii, &VAR_1);

 FUNC_0(VAR_0, "link_reset() speed: %d duplex: %d",
        VAR_1.speed, VAR_1.duplex);

 return 0;
}
