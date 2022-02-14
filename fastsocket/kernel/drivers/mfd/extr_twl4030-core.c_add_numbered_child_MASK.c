
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_client {TYPE_1__* client; } ;
struct resource {int start; int flags; } ;
struct device {struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device dev; } ;


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
 struct twl4030_client* VAR_2 ;

__attribute__((used)) static struct device *
FUNC_9(unsigned VAR_3, const char *VAR_4, int VAR_5,
  void *VAR_6, unsigned VAR_7,
  bool VAR_8, int VAR_9, int VAR_10)
{
 struct platform_device *VAR_11;
 struct twl4030_client *VAR_12 = &VAR_2[VAR_3];
 int VAR_13;

 VAR_11 = FUNC_7(VAR_4, VAR_5);
 if (!VAR_11) {
  FUNC_1(&VAR_12->client->dev, "can't alloc dev\n");
  VAR_13 = -VAR_0;
  goto err;
 }

 FUNC_3(&VAR_11->dev, VAR_8);
 VAR_11->dev.parent = &VAR_12->client->dev;

 if (VAR_6) {
  VAR_13 = FUNC_5(VAR_11, VAR_6, VAR_7);
  if (VAR_13 < 0) {
   FUNC_1(&VAR_11->dev, "can't add platform_data\n");
   goto err;
  }
 }

 if (VAR_9) {
  struct resource VAR_14[2] = {
   { .start = VAR_9, .flags = VAR_1, },
   { .start = VAR_10, .flags = VAR_1, },
  };

  VAR_13 = FUNC_6(VAR_11, VAR_14, VAR_10 ? 2 : 1);
  if (VAR_13 < 0) {
   FUNC_1(&VAR_11->dev, "can't add irqs\n");
   goto err;
  }
 }

 VAR_13 = FUNC_4(VAR_11);

err:
 if (VAR_13 < 0) {
  FUNC_8(VAR_11);
  FUNC_2(&VAR_12->client->dev, "can't add %s dev\n", VAR_4);
  return FUNC_0(VAR_13);
 }
 return &VAR_11->dev;
}
