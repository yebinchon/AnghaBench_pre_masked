
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int llv; int hlv; int img_lum; int * select; } ;
struct wacom {TYPE_4__* intf; TYPE_3__ led; TYPE_2__* wacom_wac; } ;
struct TYPE_10__ {int kobj; } ;
struct TYPE_9__ {TYPE_5__ dev; } ;
struct TYPE_7__ {TYPE_1__* features; } ;
struct TYPE_6__ {int type; } ;
 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct wacom*) ;

__attribute__((used)) static int FUNC_3(struct wacom *VAR_3)
{
 int VAR_4;


 switch (VAR_3->wacom_wac->features->type) {
 case 134:
 case 133:
  VAR_3->led.select[0] = 0;
  VAR_3->led.select[1] = 0;
  VAR_3->led.llv = 10;
  VAR_3->led.hlv = 20;
  VAR_3->led.img_lum = 10;
  VAR_4 = FUNC_1(&VAR_3->intf->dev.kobj,
        &VAR_1);
  break;

 case 128:
 case 129:
  VAR_3->led.select[0] = 0;
  VAR_3->led.select[1] = 0;
  VAR_3->led.llv = 0;
  VAR_3->led.hlv = 0;
  VAR_3->led.img_lum = 0;

  VAR_4 = FUNC_1(&VAR_3->intf->dev.kobj,
        &VAR_0);
  break;

 case 130:
 case 132:
 case 131:
  VAR_3->led.select[0] = 0;
  VAR_3->led.select[1] = 0;
  VAR_3->led.llv = 32;
  VAR_3->led.hlv = 0;
  VAR_3->led.img_lum = 0;

  VAR_4 = FUNC_1(&VAR_3->intf->dev.kobj,
        &VAR_2);
  break;

 default:
  return 0;
 }

 if (VAR_4) {
  FUNC_0(&VAR_3->intf->dev,
   "cannot create sysfs group err: %d\n", VAR_4);
  return VAR_4;
 }
 FUNC_2(VAR_3);

 return 0;
}
