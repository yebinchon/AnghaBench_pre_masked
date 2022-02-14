
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633_mbc {int usb_active; int usb; } ;
struct pcf50633 {int dev; int mbc_pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pcf50633*,int ) ;
 int FUNC_3 (struct pcf50633*,int ,int,int) ;
 struct pcf50633_mbc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct pcf50633 *VAR_12, int VAR_13)
{
 struct pcf50633_mbc *VAR_14 = FUNC_4(VAR_12->mbc_pdev);
 int VAR_15 = 0;
 u8 VAR_16;
 int VAR_17 = 1;
 u8 VAR_18, VAR_19;

 if (VAR_13 >= 1000)
  VAR_16 = VAR_2;
 else if (VAR_13 >= 500)
  VAR_16 = VAR_4;
 else if (VAR_13 >= 100)
  VAR_16 = VAR_3;
 else {
  VAR_16 = VAR_6;
  VAR_17 = 0;
 }

 VAR_15 = FUNC_3(VAR_12, VAR_10,
     VAR_5, VAR_16);
 if (VAR_15)
  FUNC_0(VAR_12->dev, "error setting usb curlim to %d mA\n", VAR_13);
 else
  FUNC_1(VAR_12->dev, "usb curlim to %d mA\n", VAR_13);


 VAR_18 = FUNC_2(VAR_12, VAR_11);
 VAR_19 = (VAR_18 & VAR_8);




 if (VAR_19 != VAR_7)
  FUNC_3(VAR_12, VAR_9,
    VAR_0, VAR_0);
 else
  FUNC_3(VAR_12, VAR_9,
    VAR_1, VAR_1);

 VAR_14->usb_active = VAR_17;

 FUNC_5(&VAR_14->usb);

 return VAR_15;
}
