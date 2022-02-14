
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int spinlock; } ;
struct TYPE_2__ {int plx9080_iobase; } ;


 int FUNC_0 (int ,unsigned int) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct comedi_device *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2;


 FUNC_2(&VAR_0->spinlock, VAR_2);

 FUNC_0(FUNC_1(VAR_0)->plx9080_iobase, VAR_1);

 FUNC_3(&VAR_0->spinlock, VAR_2);
}
