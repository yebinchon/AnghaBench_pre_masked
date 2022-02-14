
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct vme_bridge* FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_1)
{
 struct vme_bridge *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);


 VAR_3 = 0;
 while(VAR_3 < VAR_0) {
  if(&(VAR_2->dev[VAR_3]) == VAR_1) {
   break;
  }
  VAR_3++;
 }
 if (VAR_3 == VAR_0) {
  FUNC_0(VAR_1, "Failed to identify slot\n");
  VAR_3 = 0;
  goto err_dev;
 }
 VAR_3++;

err_dev:
 return VAR_3;
}
