
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int device_id; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2, 511);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1[VAR_4].device_id == VAR_3) {
   return VAR_4;
  }
 }
 if (VAR_3 == 255) {
  FUNC_1(" can't find board\n");
 } else if (VAR_3 == 0) {
  FUNC_1(" EEPROM read error (?) or device not found\n");
 } else {
  FUNC_1(" unknown device ID %d -- contact author\n", VAR_3);
 }
 return -1;
}
