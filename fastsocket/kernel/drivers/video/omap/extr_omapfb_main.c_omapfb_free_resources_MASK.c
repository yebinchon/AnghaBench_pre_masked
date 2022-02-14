
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int region_cnt; } ;
struct omapfb_device {int dev; TYPE_2__* panel; int * fb_info; TYPE_1__ mem_desc; } ;
struct TYPE_5__ {int (* cleanup ) (TYPE_2__*) ;int (* disable ) (TYPE_2__*) ;} ;


 int FUNC_0 () ;

 int VAR_0 ;
 int FUNC_1 (struct omapfb_device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct omapfb_device*) ;
 int FUNC_4 (struct omapfb_device*,int ) ;
 int FUNC_5 (struct omapfb_device*) ;
 int FUNC_6 (struct omapfb_device*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct omapfb_device *VAR_1, int VAR_2)
{
 int VAR_3;

 switch (VAR_2) {
 case 128:
  for (VAR_3 = 0; VAR_3 < VAR_1->mem_desc.region_cnt; VAR_3++)
   FUNC_9(VAR_1->fb_info[VAR_3]);
 case 7:
  FUNC_5(VAR_1);
 case 6:
  VAR_1->panel->disable(VAR_1->panel);
 case 5:
  FUNC_4(VAR_1, VAR_0);
 case 4:
  FUNC_6(VAR_1);
 case 3:
  FUNC_1(VAR_1);
 case 2:
  VAR_1->panel->cleanup(VAR_1->panel);
 case 1:
  FUNC_2(VAR_1->dev, ((void*)0));
  FUNC_3(VAR_1);
 case 0:

  break;
 default:
  FUNC_0();
 }
}
