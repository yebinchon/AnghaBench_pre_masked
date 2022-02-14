
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
struct TYPE_6__ {int num_asics; } ;
struct TYPE_5__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5)
{
 int VAR_6;

 FUNC_2("comedi%d: %s: remove\n", VAR_5->minor, VAR_3.driver_name);
 if (VAR_5->iobase)
  FUNC_3(VAR_5->iobase, VAR_0 * VAR_4->num_asics);

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  if (VAR_2->asics[VAR_6].irq)
   FUNC_0(VAR_2->asics[VAR_6].irq, VAR_5);
 }

 if (VAR_2 && VAR_2->sprivs)
  FUNC_1(VAR_2->sprivs);

 return 0;
}
