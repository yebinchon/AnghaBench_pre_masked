
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {int rsize; int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hid_device*,unsigned int) ;
 int FUNC_2 (struct hid_device*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_3,
  const struct hid_device_id *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6 = VAR_0;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "parse failed\n");
  goto err_free;
 }

 if (VAR_3->rsize == 184) {

  VAR_6 = (VAR_6 & ~VAR_2) |
   VAR_1;
 }

 VAR_5 = FUNC_1(VAR_3, VAR_6);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "hw start failed\n");
  goto err_free;
 }

 return 0;
err_free:
 return VAR_5;
}
