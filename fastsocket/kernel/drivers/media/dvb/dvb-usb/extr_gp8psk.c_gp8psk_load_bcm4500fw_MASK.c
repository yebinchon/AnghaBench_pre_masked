
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct firmware {int* data; int size; } ;
struct dvb_usb_device {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*,int*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct dvb_usb_device*,int ,int,int ,int *,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int) ;
 int FUNC_6 (int*,int const*,int) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct dvb_usb_device *VAR_6)
{
 int VAR_7;
 const struct firmware *VAR_8 = ((void*)0);
 const u8 *VAR_9;
 u8 *VAR_10;
 if ((VAR_7 = FUNC_8(&VAR_8, VAR_5,
     &VAR_6->udev->dev)) != 0) {
  FUNC_1("did not find the bcm4500 firmware file. (%s) "
   "Please see linux/Documentation/dvb/ for more details on firmware-problems. (%d)",
   VAR_5,VAR_7);
  return VAR_7;
 }

 VAR_7 = -VAR_0;

 if (FUNC_2(VAR_6, VAR_4,1,0,((void*)0), 0))
  goto out_rel_fw;

 FUNC_3("downloading bcm4500 firmware from file '%s'",VAR_5);

 VAR_9 = VAR_8->data;
 VAR_10 = FUNC_5(64, VAR_3 | VAR_2);
 if (!VAR_10) {
  VAR_7 = -VAR_1;
  goto out_rel_fw;
 }

 while (VAR_9[0] != 0xff) {
  u16 VAR_11 = VAR_9[0] + 4;
  if (VAR_9 + VAR_11 >= VAR_8->data + VAR_8->size) {
   FUNC_1("failed to load bcm4500 firmware.");
   goto out_free;
  }
  FUNC_6(VAR_10, VAR_9, VAR_11);
  if (FUNC_0(VAR_6, VAR_10, VAR_11)) {
   FUNC_1("failed to load bcm4500 firmware.");
   goto out_free;
  }
  VAR_9 += VAR_11;
 }

 VAR_7 = 0;

out_free:
 FUNC_4(VAR_10);
out_rel_fw:
 FUNC_7(VAR_8);

 return VAR_7;
}
