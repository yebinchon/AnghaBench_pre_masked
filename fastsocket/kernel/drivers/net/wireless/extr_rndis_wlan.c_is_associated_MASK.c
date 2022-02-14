
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
struct rndis_wlan_private {int radio_on; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int *) ;
 struct rndis_wlan_private* FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct usbnet *VAR_1)
{
 struct rndis_wlan_private *VAR_2 = FUNC_1(VAR_1);
 u8 VAR_3[VAR_0];
 int VAR_4;

 if (!VAR_2->radio_on)
  return 0;

 VAR_4 = FUNC_0(VAR_1, VAR_3);

 return (VAR_4 == 0 && !FUNC_2(VAR_3));
}
