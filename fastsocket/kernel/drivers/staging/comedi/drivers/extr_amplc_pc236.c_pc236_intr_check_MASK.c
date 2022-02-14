
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int spinlock; } ;
struct TYPE_2__ {scalar_t__ lcr_iobase; scalar_t__ enable_irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_2(&VAR_5->spinlock, VAR_7);
 if (VAR_4->enable_irq) {
  VAR_6 = 1;
 }
 FUNC_3(&VAR_5->spinlock, VAR_7);

 return VAR_6;
}
