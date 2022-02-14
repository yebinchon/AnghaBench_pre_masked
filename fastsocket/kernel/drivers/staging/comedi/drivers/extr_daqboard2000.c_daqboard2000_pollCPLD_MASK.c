
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ daq; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 int VAR_5;


 for (VAR_4 = 0; VAR_4 < 50; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0->daq + 0x1000);
  if ((VAR_5 & VAR_2) == VAR_2) {
   VAR_3 = 1;
   break;
  }
  FUNC_1(100);
 }
 FUNC_1(5);
 return VAR_3;
}
