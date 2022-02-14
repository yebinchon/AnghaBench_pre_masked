
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int divisor2; int divisor1; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2)
{
 int VAR_3 = 0;


 if (FUNC_0(VAR_2->iobase + VAR_0, 0, 1, VAR_1->divisor1,
         2))
  VAR_3++;

 if (FUNC_0(VAR_2->iobase + VAR_0, 0, 2, VAR_1->divisor2,
         2))
  VAR_3++;
 if (VAR_3)
  return -1;

 return 0;
}
