
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ private; scalar_t__ irq; } ;
struct TYPE_2__ {scalar_t__ mite; int * gpct_mite_ring; int cdo_mite_ring; int ao_mite_ring; int ai_mite_ring; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->irq) {
  FUNC_0(VAR_1->irq, VAR_1);
 }
 if (VAR_1->private) {
  FUNC_2(VAR_0->ai_mite_ring);
  FUNC_2(VAR_0->ao_mite_ring);
  FUNC_2(VAR_0->cdo_mite_ring);
  FUNC_2(VAR_0->gpct_mite_ring[0]);
  FUNC_2(VAR_0->gpct_mite_ring[1]);
  if (VAR_0->mite)
   FUNC_3(VAR_0->mite);
 }

 return 0;
}
