
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dio_private {int WRCapSel; } ;
struct comedi_device {TYPE_1__* subdevices; } ;
struct TYPE_2__ {scalar_t__ private; } ;


 int FUNC_0 (struct comedi_device*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3)
{
 unsigned int VAR_4;


 FUNC_0(VAR_3, VAR_0, VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {

  FUNC_0(VAR_3,
     ((struct dio_private *)(VAR_3->subdevices + 2 +
        VAR_4)->private)->WRCapSel,
     0xffff);
 }

 return 0;
}
