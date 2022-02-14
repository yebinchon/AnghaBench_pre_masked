
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; scalar_t__ subdevices; } ;
struct TYPE_4__ {scalar_t__ mite; int * di_mite_ring; } ;
struct TYPE_3__ {int n_8255; int is_diodaq; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*,scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2)
{
 int VAR_3;

 if (VAR_1 && !VAR_1->is_diodaq) {
  for (VAR_3 = 0; VAR_3 < VAR_1->n_8255; VAR_3++) {
   FUNC_3(VAR_2, VAR_2->subdevices + VAR_3);
  }
 }

 if (VAR_2->irq)
  FUNC_0(VAR_2->irq, VAR_2);

 if (VAR_0) {
  if (VAR_0->di_mite_ring) {
   FUNC_1(VAR_0->di_mite_ring);
   VAR_0->di_mite_ring = ((void*)0);
  }
  if (VAR_0->mite)
   FUNC_2(VAR_0->mite);
 }
 return 0;
}
