
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ plx9080_iobase; } ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int ,unsigned int) ;
 TYPE_1__* FUNC_3 (struct comedi_device*) ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 =
     FUNC_4(FUNC_3(VAR_2)->plx9080_iobase + VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_0("restarting ao dma, descriptor reg 0x%x\n", VAR_3);
 FUNC_2(VAR_2, 0, VAR_3);

 FUNC_1(VAR_2, 0);
}
