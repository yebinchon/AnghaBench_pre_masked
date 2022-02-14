
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daqboard2000_hw {int refDacs; int dacControl; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {struct daqboard2000_hw* daq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_4)
{
 struct daqboard2000_hw *VAR_5 = VAR_3->daq;
 int VAR_6;


 VAR_5->refDacs = 0x80 | VAR_1;
 for (VAR_6 = 0; VAR_6 < 20; VAR_6++) {
  if ((VAR_5->dacControl & VAR_2) == 0) {
   break;
  }
  FUNC_0(2);
 }



 VAR_5->refDacs = 0x80 | VAR_0;
 for (VAR_6 = 0; VAR_6 < 20; VAR_6++) {
  if ((VAR_5->dacControl & VAR_2) == 0) {
   break;
  }
  FUNC_0(2);
 }

}
