
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {scalar_t__ ao_cmd_running; TYPE_1__* interface; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usbduxsub*) ;

__attribute__((used)) static int FUNC_2(struct usbduxsub *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_1)
  return -VAR_0;
 FUNC_0(&VAR_1->interface->dev, "comedi: usbdux_ao_cancel\n");

 if (VAR_2)
  VAR_3 = FUNC_1(VAR_1);

 VAR_1->ao_cmd_running = 0;

 return VAR_3;
}
