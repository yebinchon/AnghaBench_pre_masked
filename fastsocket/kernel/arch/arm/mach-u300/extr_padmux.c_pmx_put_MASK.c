
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pmx {scalar_t__ setting; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ setting; int * dev; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;

int FUNC_4(struct device *VAR_4, struct pmx *VAR_5)
{
 int VAR_6;
 int VAR_7 = -VAR_1;

 if (VAR_5 == ((void*)0) || VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_2(&VAR_2);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {

  if (VAR_5->setting == VAR_3[VAR_6]->setting) {

   if (VAR_4 != VAR_5->dev) {
    FUNC_1(1, "padmux: cannot release handle as "
     "it is bound to another consumer\n");
    VAR_7 = -VAR_0;
    break;
   } else {
    VAR_3[VAR_6]->dev = ((void*)0);
    VAR_7 = 0;
    break;
   }
  }
 }
 FUNC_3(&VAR_2);

 return VAR_7;
}
