
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int attached; } ;


 int FUNC_0 (struct comedi_device*) ;

void FUNC_1(struct comedi_device *VAR_0)
{
 if (!VAR_0->attached)
  return;
 FUNC_0(VAR_0);
}
