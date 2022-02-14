
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int mii; } ;
struct ethtool_cmd {scalar_t__ speed; scalar_t__ duplex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct usbnet*,int ) ;
 int FUNC_1 (struct usbnet*,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_5)
{
 u16 VAR_6;
 struct ethtool_cmd VAR_7;

 FUNC_2(&VAR_5->mii, 1, 1);
 FUNC_3(&VAR_5->mii, &VAR_7);
 VAR_6 = VAR_0;

 if (VAR_7.speed != VAR_4)
  VAR_6 &= ~VAR_2;

 if (VAR_7.duplex != VAR_3)
  VAR_6 &= ~VAR_1;

 FUNC_1(VAR_5, "ax88772_link_reset() speed: %d duplex: %d setting mode to 0x%04x", VAR_7.speed, VAR_7.duplex, VAR_6);

 FUNC_0(VAR_5, VAR_6);

 return 0;
}
