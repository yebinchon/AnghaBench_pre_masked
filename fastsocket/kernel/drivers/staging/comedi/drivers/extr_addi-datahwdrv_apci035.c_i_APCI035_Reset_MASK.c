
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

int FUNC_1(struct comedi_device *VAR_2)
{
 int VAR_3 = 0;
 for (VAR_3 = 1; VAR_3 <= 4; VAR_3++) {
  VAR_1 = VAR_3;
  FUNC_0(0x0, VAR_0->iobase + ((VAR_1 - 1) * 32) + 0);
 }
 FUNC_0(0x0, VAR_0->iobase + 128 + 12);

 return 0;
}
