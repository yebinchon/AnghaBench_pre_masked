
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct comedi_async* vm_private_data; } ;
struct comedi_device {int mutex; } ;
struct comedi_async {int mmap_count; TYPE_1__* subdevice; } ;
struct TYPE_2__ {struct comedi_device* device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vm_area_struct *VAR_0)
{
 struct comedi_async *VAR_1;
 struct comedi_device *VAR_2;

 VAR_1 = VAR_0->vm_private_data;
 VAR_2 = VAR_1->subdevice->device;

 FUNC_0(&VAR_2->mutex);
 VAR_1->mmap_count--;
 FUNC_1(&VAR_2->mutex);
}
