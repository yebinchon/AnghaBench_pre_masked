
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wacom {TYPE_4__* intf; TYPE_2__* wacom_wac; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_8__ {TYPE_3__ dev; } ;
struct TYPE_6__ {TYPE_1__* features; } ;
struct TYPE_5__ {int type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct wacom *VAR_3)
{
 switch (VAR_3->wacom_wac->features->type) {
 case 134:
 case 133:
  FUNC_0(&VAR_3->intf->dev.kobj,
       &VAR_1);
  break;

 case 128:
 case 129:
  FUNC_0(&VAR_3->intf->dev.kobj,
       &VAR_0);
  break;

 case 130:
 case 132:
 case 131:
  FUNC_0(&VAR_3->intf->dev.kobj,
       &VAR_2);
  break;
 }
}
