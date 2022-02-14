
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int ai_fifo_depth; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2)
{
 int VAR_3;
 struct comedi_subdevice *VAR_4 = VAR_2->subdevices + VAR_0;

 VAR_3 = VAR_1.ai_fifo_depth / 2;

 FUNC_0(VAR_2, VAR_4, VAR_3);
}
