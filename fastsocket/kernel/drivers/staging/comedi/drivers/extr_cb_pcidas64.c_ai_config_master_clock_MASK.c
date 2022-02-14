
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int layout; } ;


 int VAR_0 ;

 int FUNC_0 (struct comedi_device*,unsigned int*) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1, unsigned int *VAR_2)
{

 switch (FUNC_1(VAR_1)->layout) {
 case 128:
  return FUNC_0(VAR_1, VAR_2);
  break;
 default:
  return -VAR_0;
  break;
 }

 return -VAR_0;
}
