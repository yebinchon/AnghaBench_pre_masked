
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbduxsub {int * insnBuffer; TYPE_2__* comedidev; TYPE_1__* interface; int usbdev; } ;
struct TYPE_4__ {int minor; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ,int*,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usbduxsub *VAR_4, int VAR_5)
{
 int VAR_6 = (-VAR_1);
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_6 = FUNC_2(VAR_4->usbdev,
          FUNC_3(VAR_4->usbdev,
            VAR_0),
          VAR_4->insnBuffer, VAR_3,
          &VAR_7, 1);
  if (VAR_6 < 0) {
   FUNC_0(&VAR_4->interface->dev, "comedi%d: "
    "insn: USB error %d while receiving DUX command"
    "\n", VAR_4->comedidev->minor, VAR_6);
   return VAR_6;
  }
  if (FUNC_1(VAR_4->insnBuffer[0]) == VAR_5)
   return VAR_6;
 }


 FUNC_0(&VAR_4->interface->dev, "comedi%d: insn: "
  "wrong data returned from firmware: want cmd %d, got cmd %d.\n",
  VAR_4->comedidev->minor, VAR_5,
  FUNC_1(VAR_4->insnBuffer[0]));
 return -VAR_1;
}
