
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio_private {int WRCapSel; int RDCapSel; int WRIntSel; int RDIntSel; int WREdgSel; int RDEdgSel; } ;
struct comedi_device {TYPE_1__* subdevices; } ;
struct TYPE_2__ {scalar_t__ private; } ;


 unsigned int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,unsigned int) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;


 VAR_4 = VAR_3 / 16;
 VAR_5 = 1 << (VAR_3 - (16 * VAR_4));
 FUNC_2("s626_dio_set_irq: enable interrupt on dio channel %d group %d\n",
       VAR_3 - (16 * VAR_4), VAR_4);


 VAR_6 = FUNC_0(VAR_2,
     ((struct dio_private *)(VAR_2->subdevices + 2 +
        VAR_4)->private)->RDEdgSel);
 FUNC_1(VAR_2,
    ((struct dio_private *)(VAR_2->subdevices + 2 +
       VAR_4)->private)->WREdgSel,
    VAR_5 | VAR_6);


 VAR_6 = FUNC_0(VAR_2,
     ((struct dio_private *)(VAR_2->subdevices + 2 +
        VAR_4)->private)->RDIntSel);
 FUNC_1(VAR_2,
    ((struct dio_private *)(VAR_2->subdevices + 2 +
       VAR_4)->private)->WRIntSel,
    VAR_5 | VAR_6);


 FUNC_1(VAR_2, VAR_0, VAR_1);


 VAR_6 = FUNC_0(VAR_2,
     ((struct dio_private *)(VAR_2->subdevices + 2 +
        VAR_4)->private)->RDCapSel);
 FUNC_1(VAR_2,
    ((struct dio_private *)(VAR_2->subdevices + 2 +
       VAR_4)->private)->WRCapSel,
    VAR_5 | VAR_6);

 return 0;
}
