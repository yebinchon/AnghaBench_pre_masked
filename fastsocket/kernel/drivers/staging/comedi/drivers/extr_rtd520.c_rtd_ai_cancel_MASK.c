
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int flags; int intCount; scalar_t__ aiCount; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (struct comedi_device*,int ) ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (struct comedi_device*,int) ;
 int FUNC_9 (struct comedi_device*,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_3, struct comedi_subdevice *VAR_4)
{
 u16 VAR_5;

 FUNC_6(VAR_3, 0);
 FUNC_5(VAR_3);
 FUNC_1(VAR_3, 0);
 FUNC_2(VAR_3, 0);
 VAR_2->aiCount = 0;
 VAR_5 = FUNC_4(VAR_3);
 FUNC_0
     ("rtd520: Acquisition canceled. %ld ints, intStat=%x, overStat=%x\n",
      VAR_2->intCount, VAR_5,
      0xffff & FUNC_3(VAR_3));
 return 0;
}
