
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct iio_dev {int num_interrupt_lines; TYPE_2__* event_interfaces; TYPE_2__* interrupts; int * event_attrs; TYPE_1__ dev; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct iio_dev *VAR_1)
{
 int VAR_2;

 if (VAR_1->num_interrupt_lines == 0)
  return;
 for (VAR_2 = 0; VAR_2 < VAR_1->num_interrupt_lines; VAR_2++)
  FUNC_3(&VAR_1->dev.kobj,
       &VAR_1->event_attrs[VAR_2]);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_interrupt_lines; VAR_2++) {
  FUNC_1(&VAR_0,
     VAR_1->event_interfaces[VAR_2].id);
  FUNC_0(&VAR_1->event_interfaces[VAR_2]);
 }
 FUNC_2(VAR_1->interrupts);
 FUNC_2(VAR_1->event_interfaces);
}
