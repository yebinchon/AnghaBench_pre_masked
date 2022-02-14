
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int ao_dma_index; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct comedi_device *VAR_1)
{
 unsigned int VAR_2;

 if (FUNC_0(VAR_1)->ao_dma_index == 0)
  VAR_2 = VAR_0 - 1;
 else
  VAR_2 = FUNC_0(VAR_1)->ao_dma_index - 1;
 return VAR_2;
}
