
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; scalar_t__ private; TYPE_1__* subdevices; int minor; } ;
struct TYPE_4__ {scalar_t__ mite; } ;
struct TYPE_3__ {scalar_t__ range_table_list; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1)
{
 FUNC_3("comedi%d: ni_670x: remove\n", VAR_1->minor);

 if (VAR_1->subdevices[0].range_table_list) {
  FUNC_1(VAR_1->subdevices[0].range_table_list);
 }
 if (VAR_1->private && VAR_0->mite)
  FUNC_2(VAR_0->mite);

 if (VAR_1->irq)
  FUNC_0(VAR_1->irq, VAR_1);

 return 0;
}
