
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int mutex; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct comedi_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_2(&VAR_0->mutex);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_0->mutex);
 FUNC_1(&VAR_0->mutex);
}
