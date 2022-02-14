
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctrl_name; } ;
struct omapfb_platform_data {TYPE_1__ lcd; } ;
struct omapfb_device {TYPE_2__* dev; TYPE_3__* ctrl; TYPE_3__* int_ctrl; } ;
typedef int name ;
struct TYPE_7__ {char* name; } ;
struct TYPE_6__ {struct omapfb_platform_data* platform_data; } ;


 int FUNC_0 (TYPE_3__**) ;
 TYPE_3__** VAR_0 ;
 int FUNC_1 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct omapfb_device *VAR_1)
{
 struct omapfb_platform_data *VAR_2;
 char VAR_3[17];
 int VAR_4;

 VAR_2 = VAR_1->dev->platform_data;

 VAR_1->ctrl = ((void*)0);

 FUNC_3(VAR_3, VAR_2->lcd.ctrl_name, sizeof(VAR_3) - 1);
 VAR_3[sizeof(VAR_3) - 1] = '\0';

 if (FUNC_2(VAR_3, "internal") == 0) {
  VAR_1->ctrl = VAR_1->int_ctrl;
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  FUNC_1(VAR_1->dev, "ctrl %s\n", VAR_0[VAR_4]->name);
  if (FUNC_2(VAR_0[VAR_4]->name, VAR_3) == 0) {
   VAR_1->ctrl = VAR_0[VAR_4];
   break;
  }
 }

 if (VAR_1->ctrl == ((void*)0)) {
  FUNC_1(VAR_1->dev, "ctrl %s not supported\n", VAR_3);
  return -1;
 }

 return 0;
}
