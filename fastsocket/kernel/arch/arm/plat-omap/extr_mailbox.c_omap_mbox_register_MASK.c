
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox {int dev; int name; scalar_t__ next; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,struct device*,int ,struct omap_mbox*,char*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 struct omap_mbox** FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct device *VAR_5, struct omap_mbox *VAR_6)
{
 int VAR_7 = 0;
 struct omap_mbox **VAR_8;

 if (!VAR_6)
  return -VAR_1;
 if (VAR_6->next)
  return -VAR_0;

 VAR_6->dev = FUNC_2(&VAR_4,
      VAR_5, 0, VAR_6, "%s", VAR_6->name);
 if (FUNC_0(VAR_6->dev))
  return FUNC_1(VAR_6->dev);

 VAR_7 = FUNC_3(VAR_6->dev, &VAR_2);
 if (VAR_7)
  goto err_sysfs;

 FUNC_7(&VAR_3);
 VAR_8 = FUNC_6(VAR_6->name);
 if (*VAR_8) {
  VAR_7 = -VAR_0;
  FUNC_8(&VAR_3);
  goto err_find;
 }
 *VAR_8 = VAR_6;
 FUNC_8(&VAR_3);

 return 0;

err_find:
 FUNC_4(VAR_6->dev, &VAR_2);
err_sysfs:
 FUNC_5(VAR_6->dev);
 return VAR_7;
}
