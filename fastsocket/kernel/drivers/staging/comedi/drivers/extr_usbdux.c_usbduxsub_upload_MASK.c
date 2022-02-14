
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usbduxsub {TYPE_1__* interface; int usbdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int ,int ,unsigned int,int,int *,unsigned int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usbduxsub *VAR_3,
       uint8_t * VAR_4,
       unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3->usbdev,
      FUNC_3(VAR_3->usbdev, 0),

      VAR_1,

      VAR_2,

      VAR_5,

      0x0000,

      VAR_4,

      VAR_6,

      VAR_0);
 FUNC_0(&VAR_3->interface->dev, "comedi_: result=%d\n", VAR_7);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_3->interface->dev, "comedi_: upload failed\n");
  return VAR_7;
 }
 return 0;
}
