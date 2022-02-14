
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio_private {int WRCapSel; } ;
struct comedi_device {TYPE_1__* subdevices; } ;
struct TYPE_2__ {scalar_t__ private; } ;


 int FUNC_0 (struct comedi_device*,int ,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4)
{
 FUNC_1
     ("s626_dio_reset_irq: disable  interrupt on dio channel %d group %d\n",
      VAR_4, VAR_3);


 FUNC_0(VAR_2, VAR_0, VAR_1);


 FUNC_0(VAR_2,
    ((struct dio_private *)(VAR_2->subdevices + 2 +
       VAR_3)->private)->WRCapSel, VAR_4);

 return 0;
}
