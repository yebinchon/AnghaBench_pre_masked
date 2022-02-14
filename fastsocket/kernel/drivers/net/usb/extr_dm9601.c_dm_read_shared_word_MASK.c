
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int phy_mutex; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,char*,int,int,int ,int) ;
 int FUNC_1 (struct usbnet*,char*,char*) ;
 int FUNC_2 (struct usbnet*,int ,int,int *) ;
 int FUNC_3 (struct usbnet*,int ,int*) ;
 int FUNC_4 (struct usbnet*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct usbnet *VAR_5, int VAR_6, u8 VAR_7, __le16 *VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_5(&VAR_5->phy_mutex);

 FUNC_4(VAR_5, VAR_0, VAR_6 ? (VAR_7 | 0x40) : VAR_7);
 FUNC_4(VAR_5, VAR_1, VAR_6 ? 0xc : 0x4);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  u8 VAR_11;

  FUNC_7(1);
  VAR_9 = FUNC_3(VAR_5, VAR_1, &VAR_11);
  if (VAR_9 < 0)
   goto out;


  if ((VAR_11 & 1) == 0)
   break;
 }

 if (VAR_10 == VAR_3) {
  FUNC_1(VAR_5, "%s read timed out!", VAR_6 ? "phy" : "eeprom");
  VAR_9 = -VAR_4;
  goto out;
 }

 FUNC_4(VAR_5, VAR_1, 0x0);
 VAR_9 = FUNC_2(VAR_5, VAR_2, 2, VAR_8);

 FUNC_0(VAR_5, "read shared %d 0x%02x returned 0x%04x, %d",
        VAR_6, VAR_7, *VAR_8, VAR_9);

 out:
 FUNC_6(&VAR_5->phy_mutex);
 return VAR_9;
}
