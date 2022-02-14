
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ao_buffer_bus_addr; scalar_t__ plx9080_iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short VAR_2 ;
 unsigned int FUNC_0 (struct comedi_device*) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 unsigned short FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned short VAR_6;

 VAR_4 = FUNC_0(VAR_3);
 VAR_6 = FUNC_2(FUNC_1(VAR_3)->plx9080_iobase + VAR_0);
 if ((VAR_6 & VAR_2) == 0)
  return 0;

 VAR_5 =
     FUNC_3(FUNC_1(VAR_3)->plx9080_iobase + VAR_1);
 if (VAR_5 != FUNC_1(VAR_3)->ao_buffer_bus_addr[VAR_4])
  return 0;

 return 1;
}
