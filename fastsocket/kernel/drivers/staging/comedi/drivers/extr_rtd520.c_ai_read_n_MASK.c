
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {int dummy; } ;
typedef int s16 ;
struct TYPE_4__ {int cur_chan; } ;
struct TYPE_3__ {scalar_t__ aiCount; int chanBipolar; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (TYPE_2__*,short) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
       int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  short VAR_6;
  s16 VAR_7;

  if (0 == VAR_1->aiCount) {
   VAR_7 = FUNC_2(VAR_2);
   continue;
  }







  VAR_7 = FUNC_2(VAR_2);

  VAR_7 = VAR_7 >> 3;
  if (FUNC_0(VAR_1->chanBipolar, VAR_3->async->cur_chan)) {
   VAR_6 = VAR_7 + 2048;
  } else {
   VAR_6 = VAR_7;
  }
  if (!FUNC_4(VAR_3->async, VAR_6))
   return -1;

  if (VAR_1->aiCount > 0)
   VAR_1->aiCount--;
 }
 return 0;
}
