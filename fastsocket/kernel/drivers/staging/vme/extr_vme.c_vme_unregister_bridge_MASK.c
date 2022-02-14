
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {int num; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;

void FUNC_2 (struct vme_bridge *VAR_1)
{
 int VAR_2;
 struct device *VAR_3;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = &(VAR_1->dev[VAR_2]);
  FUNC_0(VAR_3);
 }
 FUNC_1(VAR_1->num);
}
