
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int mii; } ;
struct ethtool_cmd {scalar_t__ duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct usbnet*,int ) ;
 int FUNC_1 (struct usbnet*,char*,int ,scalar_t__,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_3)
{
 u8 VAR_4;
 struct ethtool_cmd VAR_5;

 FUNC_2(&VAR_3->mii, 1, 1);
 FUNC_3(&VAR_3->mii, &VAR_5);
 VAR_4 = VAR_0;

 if (VAR_5.duplex != VAR_2)
  VAR_4 |= ~VAR_1;

 FUNC_1(VAR_3, "ax88172_link_reset() speed: %d duplex: %d setting mode to 0x%04x", VAR_5.speed, VAR_5.duplex, VAR_4);

 FUNC_0(VAR_3, VAR_4);

 return 0;
}
