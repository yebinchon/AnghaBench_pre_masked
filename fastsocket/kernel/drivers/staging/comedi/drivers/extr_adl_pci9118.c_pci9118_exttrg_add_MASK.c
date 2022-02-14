
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int exttrg_users; int IntControlReg; scalar_t__ iobase_a; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4, unsigned char VAR_5)
{
 if (VAR_5 > 3)
  return -1;
 VAR_3->exttrg_users |= (1 << VAR_5);
 VAR_3->IntControlReg |= VAR_1;
 FUNC_1(VAR_3->IntControlReg, VAR_4->iobase + VAR_2);
 FUNC_1(FUNC_0(VAR_3->iobase_a + VAR_0) | 0x1f00, VAR_3->iobase_a + VAR_0);
 return 0;
}
