
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {int num; struct device* dev; int parent; } ;
struct device {struct vme_bridge* platform_data; int * bus; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,int) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

int FUNC_6 (struct vme_bridge *VAR_2)
{
 struct device *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_2->num = FUNC_4();





 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = &(VAR_2->dev[VAR_5]);
  FUNC_3(VAR_3, 0, sizeof(struct device));

  VAR_3->parent = VAR_2->parent;
  VAR_3->bus = &(VAR_1);





  VAR_3->platform_data = VAR_2;
  FUNC_0(VAR_3, "vme-%x.%x", VAR_2->num, VAR_5 + 1);

  VAR_4 = FUNC_1(VAR_3);
  if(VAR_4)
   goto err_reg;
 }

 return VAR_4;

 VAR_5 = VAR_0;
err_reg:
 while (VAR_5 > -1) {
  VAR_3 = &(VAR_2->dev[VAR_5]);
  FUNC_2(VAR_3);
 }
 FUNC_5(VAR_2->num);
 return VAR_4;
}
