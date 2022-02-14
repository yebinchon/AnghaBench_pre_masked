
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {unsigned int n_subdevices; TYPE_1__* subdevices; } ;
struct TYPE_2__ {int minor; int spin_lock; int async_dma_dir; struct comedi_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct comedi_device *VAR_3,
       unsigned int VAR_4)
{
 unsigned VAR_5;

 VAR_3->n_subdevices = VAR_4;
 VAR_3->subdevices =
     FUNC_0(VAR_4, sizeof(struct comedi_subdevice),
      VAR_2);
 if (!VAR_3->subdevices)
  return -VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  VAR_3->subdevices[VAR_5].device = VAR_3;
  VAR_3->subdevices[VAR_5].async_dma_dir = VAR_0;
  FUNC_1(&VAR_3->subdevices[VAR_5].spin_lock);
  VAR_3->subdevices[VAR_5].minor = -1;
 }
 return 0;
}
