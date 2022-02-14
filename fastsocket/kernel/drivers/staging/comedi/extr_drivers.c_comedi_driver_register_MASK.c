
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_driver {struct comedi_driver* next; } ;


 struct comedi_driver* VAR_0 ;

int FUNC_0(struct comedi_driver *VAR_1)
{
 VAR_1->next = VAR_0;
 VAR_0 = VAR_1;

 return 0;
}
