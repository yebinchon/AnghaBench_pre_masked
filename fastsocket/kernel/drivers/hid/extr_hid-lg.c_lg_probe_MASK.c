
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {int dev; int quirks; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hid_device*,unsigned int) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,void*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_6, const struct hid_device_id *VAR_7)
{
 unsigned long VAR_8 = VAR_7->driver_data;
 unsigned int VAR_9 = VAR_0;
 int VAR_10;

 FUNC_3(VAR_6, (void *)VAR_8);

 if (VAR_8 & VAR_5)
  VAR_6->quirks |= VAR_2;

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10) {
  FUNC_0(&VAR_6->dev, "parse failed\n");
  goto err_free;
 }

 if (VAR_8 & (VAR_3 | VAR_4))
  VAR_9 &= ~VAR_1;

 VAR_10 = FUNC_1(VAR_6, VAR_9);
 if (VAR_10) {
  FUNC_0(&VAR_6->dev, "hw start failed\n");
  goto err_free;
 }

 if (VAR_8 & VAR_3)
  FUNC_5(VAR_6);
 if (VAR_8 & VAR_4)
  FUNC_4(VAR_6);

 return 0;
err_free:
 return VAR_10;
}
