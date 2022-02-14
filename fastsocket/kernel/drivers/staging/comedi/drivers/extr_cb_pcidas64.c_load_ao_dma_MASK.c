
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_2__ {unsigned int ao_dma_index; unsigned int* ao_buffer_bus_addr; void* plx9080_iobase; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct comedi_device*,struct comedi_cmd const*) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 unsigned int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2, const struct comedi_cmd *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 void *VAR_6 =
     FUNC_1(VAR_2)->plx9080_iobase + VAR_1;
 unsigned int VAR_7;

 do {
  VAR_7 = FUNC_1(VAR_2)->ao_dma_index;

  VAR_5 = FUNC_2(VAR_6);
  if (VAR_5 >=
      FUNC_1(VAR_2)->ao_buffer_bus_addr[VAR_7]
      && VAR_5 <
      FUNC_1(VAR_2)->ao_buffer_bus_addr[VAR_7] +
      VAR_0)
   return;
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 } while (VAR_4 >= VAR_0);
}
