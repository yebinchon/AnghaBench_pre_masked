
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {int dev; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hid_device*,int) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,void*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_5, const struct hid_device_id *VAR_6)
{
 unsigned long VAR_7 = VAR_6->driver_data;
 int VAR_8;

 FUNC_3(VAR_5, (void *)VAR_7);

 if (VAR_7 & VAR_4)
  VAR_5->quirks |= VAR_2;

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8) {
  FUNC_0(&VAR_5->dev, "parse failed\n");
  goto err_free;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_0 | ((VAR_7 & VAR_3) ?
    VAR_1 : 0));
 if (VAR_8) {
  FUNC_0(&VAR_5->dev, "hw start failed\n");
  goto err_free;
 }

 return 0;
err_free:
 return VAR_8;
}
