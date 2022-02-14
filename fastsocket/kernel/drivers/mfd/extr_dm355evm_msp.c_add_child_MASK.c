
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int flags; } ;
struct device {struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,char const*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,void*,unsigned int) ;
 int FUNC_6 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_7 (char const*,int) ;
 int FUNC_8 (struct platform_device*) ;

__attribute__((used)) static struct device *FUNC_9(struct i2c_client *VAR_2, const char *VAR_3,
  void *VAR_4, unsigned VAR_5,
  bool VAR_6, int VAR_7)
{
 struct platform_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(VAR_3, -1);
 if (!VAR_8) {
  FUNC_1(&VAR_2->dev, "can't alloc dev\n");
  VAR_9 = -VAR_0;
  goto err;
 }

 FUNC_3(&VAR_8->dev, VAR_6);
 VAR_8->dev.parent = &VAR_2->dev;

 if (VAR_4) {
  VAR_9 = FUNC_5(VAR_8, VAR_4, VAR_5);
  if (VAR_9 < 0) {
   FUNC_1(&VAR_8->dev, "can't add platform_data\n");
   goto err;
  }
 }

 if (VAR_7) {
  struct resource VAR_10 = {
   .start = VAR_7,
   .flags = VAR_1,
  };

  VAR_9 = FUNC_6(VAR_8, &VAR_10, 1);
  if (VAR_9 < 0) {
   FUNC_1(&VAR_8->dev, "can't add irq\n");
   goto err;
  }
 }

 VAR_9 = FUNC_4(VAR_8);

err:
 if (VAR_9 < 0) {
  FUNC_8(VAR_8);
  FUNC_2(&VAR_2->dev, "can't add %s dev\n", VAR_3);
  return FUNC_0(VAR_9);
 }
 return &VAR_8->dev;
}
