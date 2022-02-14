
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_driver {int (* probe ) (struct xenbus_device*,struct xenbus_device_id const*) ;int ids; } ;
struct xenbus_device_id {int dummy; } ;
struct xenbus_device {int nodename; int dev; } ;
struct device {int driver; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ) ;
 struct xenbus_device_id* FUNC_2 (int ,struct xenbus_device*) ;
 int FUNC_3 (struct xenbus_device*,struct xenbus_device_id const*) ;
 int FUNC_4 (struct xenbus_device*) ;
 struct xenbus_device* FUNC_5 (struct device*) ;
 struct xenbus_driver* FUNC_6 (int ) ;
 int FUNC_7 (struct xenbus_device*) ;
 int FUNC_8 (struct xenbus_device*,int,char*,int ) ;
 int FUNC_9 (struct xenbus_device*,int ) ;

int FUNC_10(struct device *VAR_2)
{
 struct xenbus_device *VAR_3 = FUNC_5(VAR_2);
 struct xenbus_driver *VAR_4 = FUNC_6(VAR_2->driver);
 const struct xenbus_device_id *VAR_5;
 int VAR_6;

 FUNC_0("%s", VAR_3->nodename);

 if (!VAR_4->probe) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 VAR_5 = FUNC_2(VAR_4->ids, VAR_3);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6) {
  FUNC_1(&VAR_3->dev, "talk_to_otherend on %s failed.\n",
    VAR_3->nodename);
  return VAR_6;
 }

 VAR_6 = VAR_4->probe(VAR_3, VAR_5);
 if (VAR_6)
  goto fail;

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6) {
  FUNC_1(&VAR_3->dev, "watch_otherend on %s failed.\n",
         VAR_3->nodename);
  return VAR_6;
 }

 return 0;
fail:
 FUNC_8(VAR_3, VAR_6, "xenbus_dev_probe on %s", VAR_3->nodename);
 FUNC_9(VAR_3, VAR_1);
 return -VAR_0;
}
