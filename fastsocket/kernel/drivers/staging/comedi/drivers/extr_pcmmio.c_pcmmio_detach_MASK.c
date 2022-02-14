
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; int minor; } ;
struct TYPE_8__ {scalar_t__ sprivs; TYPE_1__* asics; } ;
struct TYPE_7__ {int driver_name; } ;
struct TYPE_6__ {int total_iosize; } ;
struct TYPE_5__ {scalar_t__ irq; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4)
{
 int VAR_5;

 FUNC_2("comedi%d: %s: remove\n", VAR_4->minor, VAR_2.driver_name);
 if (VAR_4->iobase)
  FUNC_3(VAR_4->iobase, VAR_3->total_iosize);

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (VAR_1 && VAR_1->asics[VAR_5].irq)
   FUNC_0(VAR_1->asics[VAR_5].irq, VAR_4);
 }

 if (VAR_1 && VAR_1->sprivs)
  FUNC_1(VAR_1->sprivs);

 return 0;
}
