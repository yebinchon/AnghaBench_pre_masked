
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int mii; int data; } ;
struct ethtool_cmd {scalar_t__ speed; scalar_t__ duplex; } ;
struct asix_data {scalar_t__ phymode; scalar_t__ ledmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct usbnet*,int) ;
 int FUNC_1 (struct usbnet*,char*,...) ;
 int FUNC_2 (struct usbnet*,scalar_t__) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_9)
{
 u16 VAR_10;
 struct ethtool_cmd VAR_11;
 struct asix_data *VAR_12 = (struct asix_data *)&VAR_9->data;

 FUNC_1(VAR_9,"ax88178_link_reset()");

 FUNC_3(&VAR_9->mii, 1, 1);
 FUNC_4(&VAR_9->mii, &VAR_11);
 VAR_10 = VAR_0;

 if (VAR_11.speed == VAR_8)
  VAR_10 |= VAR_3;
 else if (VAR_11.speed == VAR_7)
  VAR_10 |= VAR_4;
 else
  VAR_10 &= ~(VAR_4 | VAR_3);

 VAR_10 |= VAR_1;

 if (VAR_11.duplex == VAR_5)
  VAR_10 |= VAR_2;
 else
  VAR_10 &= ~VAR_2;

 FUNC_1(VAR_9, "ax88178_link_reset() speed: %d duplex: %d setting mode to 0x%04x", VAR_11.speed, VAR_11.duplex, VAR_10);

 FUNC_0(VAR_9, VAR_10);

 if (VAR_12->phymode == VAR_6 && VAR_12->ledmode)
  FUNC_2(VAR_9, VAR_11.speed);

 return 0;
}
