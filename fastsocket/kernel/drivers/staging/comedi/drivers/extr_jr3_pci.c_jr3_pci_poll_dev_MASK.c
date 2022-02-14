
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct poll_delay_t {int min; int max; } ;
struct jr3_pci_subdev_private {unsigned long next_time_min; void* next_time_max; } ;
struct TYPE_4__ {void* expires; } ;
struct jr3_pci_dev_private {int n_channels; TYPE_2__ timer; } ;
struct comedi_device {int spinlock; TYPE_1__* subdevices; struct jr3_pci_dev_private* private; } ;
struct TYPE_3__ {struct jr3_pci_subdev_private* private; } ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned long VAR_0 ;
 struct poll_delay_t FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct comedi_device *VAR_3 = (struct comedi_device *)VAR_1;
 struct jr3_pci_dev_private *VAR_4 = VAR_3->private;
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_3(&VAR_3->spinlock, VAR_2);
 VAR_6 = 1000;
 VAR_5 = VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4->n_channels; VAR_7++) {
  struct jr3_pci_subdev_private *VAR_8 =
      VAR_3->subdevices[VAR_7].private;
  if (VAR_5 > VAR_8->next_time_min) {
   struct poll_delay_t VAR_9;

   VAR_9 = FUNC_1(&VAR_3->subdevices[VAR_7]);
   VAR_8->next_time_min =
       VAR_0 + FUNC_2(VAR_9.min);
   VAR_8->next_time_max =
       VAR_0 + FUNC_2(VAR_9.max);
   if (VAR_9.max && VAR_9.max < VAR_6) {




    VAR_6 = VAR_9.max;
   }
  }
 }
 FUNC_4(&VAR_3->spinlock, VAR_2);

 VAR_4->timer.expires = VAR_0 + FUNC_2(VAR_6);
 FUNC_0(&VAR_4->timer);
}
