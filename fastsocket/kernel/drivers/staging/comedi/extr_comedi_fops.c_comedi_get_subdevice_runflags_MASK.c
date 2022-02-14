
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int runflags; int spin_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

unsigned FUNC_2(struct comedi_subdevice *VAR_0)
{
 unsigned long VAR_1;
 unsigned VAR_2;

 FUNC_0(&VAR_0->spin_lock, VAR_1);
 VAR_2 = VAR_0->runflags;
 FUNC_1(&VAR_0->spin_lock, VAR_1);
 return VAR_2;
}
