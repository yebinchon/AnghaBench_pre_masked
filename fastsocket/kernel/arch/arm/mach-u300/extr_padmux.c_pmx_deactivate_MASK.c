
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pmx {scalar_t__ setting; int activated; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ setting; int * dev; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct device*,char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_5 (struct pmx*,int) ;

int FUNC_6(struct device *VAR_5, struct pmx *VAR_6)
{
 int VAR_7;
 int VAR_8 = -VAR_2;

 if (VAR_6 == ((void*)0) || VAR_5 == ((void*)0))
  return -VAR_1;

 FUNC_3(&VAR_3);
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {

  if (VAR_4[VAR_7]->dev == ((void*)0))
   continue;

  if (VAR_6->setting == VAR_4[VAR_7]->setting) {

   if (VAR_5 != VAR_6->dev) {
    FUNC_1(1, "padmux: cannot deactivate "
         "pmx setting as it was activated "
         "by another consumer\n");

    VAR_8 = -VAR_0;
    continue;
   } else {
    FUNC_5(VAR_6, 0);
    VAR_4[VAR_7]->dev = ((void*)0);
    VAR_6->activated = 0;
    VAR_8 = 0;
    FUNC_2(VAR_5, "padmux: setting nr %d is deactivated",
     VAR_6->setting);
    break;
   }
  }
 }
 FUNC_4(&VAR_3);

 return VAR_8;
}
