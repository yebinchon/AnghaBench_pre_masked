
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmd_mutex; int children; } ;
struct TYPE_3__ {int eh_list_node; } ;
struct domain_device {int dev_type; TYPE_2__ ex_dev; TYPE_1__ ssp_dev; } ;




 int FUNC_0 (int *) ;

 int FUNC_1 (int *) ;

void FUNC_2(struct domain_device *VAR_0)
{
        switch (VAR_0->dev_type) {
        case 128:
  FUNC_0(&VAR_0->ssp_dev.eh_list_node);
                break;
        case 130:
        case 129:
                FUNC_0(&VAR_0->ex_dev.children);
  FUNC_1(&VAR_0->ex_dev.cmd_mutex);
                break;
        default:
                break;
        }
}
