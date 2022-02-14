
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int WRDOut; int WREdgSel; int WRCapSel; int WRIntSel; } ;


 int FUNC_0 (struct comedi_device*,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_4)
{
 uint16_t VAR_5;
 struct comedi_subdevice *VAR_6;


 FUNC_0(VAR_4, VAR_0, VAR_1);


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = VAR_4->subdevices + 2 + VAR_5;
  FUNC_0(VAR_4, VAR_3->WRIntSel, 0);
  FUNC_0(VAR_4, VAR_3->WRCapSel, 0xFFFF);

  FUNC_0(VAR_4, VAR_3->WREdgSel, 0);


  FUNC_0(VAR_4, VAR_3->WRDOut, 0);

 }
 FUNC_1("s626_dio_init: DIO initialized \n");
}
