
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_IobaseAddon; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

int FUNC_1(struct comedi_device *VAR_4)
{
 FUNC_0(0x0, VAR_3->iobase + VAR_0);
 FUNC_0(0x0, VAR_3->i_IobaseAddon + VAR_1);
 FUNC_0(0x0, VAR_3->i_IobaseAddon + VAR_2);
 FUNC_0(0x0, VAR_3->i_IobaseAddon + VAR_2 + 2);
 return 0;
}
