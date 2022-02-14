
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int minor; } ;



int FUNC_0(void *VAR_0)
{
 struct comedi_device *VAR_1 = (struct comedi_device *)VAR_0;


 return VAR_1->minor;
}
