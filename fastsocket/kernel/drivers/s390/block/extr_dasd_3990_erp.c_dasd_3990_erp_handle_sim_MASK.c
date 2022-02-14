
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct TYPE_2__ {int dev; } ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int *,char*,char,char,char,char) ;
 int FUNC_1 (int *,char*,char,char,char,char) ;

void
FUNC_2(struct dasd_device *VAR_2, char *VAR_3)
{

 if ((VAR_3[24] & VAR_1) || (VAR_3[1] & 0x10)) {

  FUNC_0(&VAR_2->cdev->dev, "SIM - SRC: "
       "%02x%02x%02x%02x\n", VAR_3[22],
       VAR_3[23], VAR_3[11], VAR_3[12]);
 } else if (VAR_3[24] & VAR_0) {

  FUNC_1(&VAR_2->cdev->dev, "log SIM - SRC: "
       "%02x%02x%02x%02x\n", VAR_3[22],
       VAR_3[23], VAR_3[11], VAR_3[12]);
 }
}
