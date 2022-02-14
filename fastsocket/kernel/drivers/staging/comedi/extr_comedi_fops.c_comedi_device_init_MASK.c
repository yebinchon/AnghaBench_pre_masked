
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int minor; int mutex; int spinlock; } ;


 int FUNC_0 (struct comedi_device*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct comedi_device *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(struct comedi_device));
 FUNC_2(&VAR_0->spinlock);
 FUNC_1(&VAR_0->mutex);
 VAR_0->minor = -1;
}
