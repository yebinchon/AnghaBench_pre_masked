
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct firmware {int* data; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*,char*,...) ;
 int FUNC_7 (struct usb_device*,char*) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct usb_device*,int ,int,int const*) ;

__attribute__((used)) static void FUNC_10(const struct firmware *VAR_1, void *VAR_2)
{
 struct usb_device *VAR_3 = VAR_2;
 const u8 *VAR_4;
 u8 VAR_5;
 u32 VAR_6 = 0;
 int VAR_7, VAR_8;

 FUNC_5(VAR_3);
 if (!VAR_1) {
  FUNC_6(VAR_3, "firmware is not available\n");
  goto err;
 }

 VAR_4 = VAR_1->data;
 VAR_8 = VAR_1->size;
 if (VAR_8 < 4)
  goto err_fw_corrupted;

 VAR_6 = FUNC_3(VAR_4);
 VAR_4 += 4;
 VAR_8 -= 4;
 if (FUNC_1(0, VAR_4, VAR_8) != VAR_6)
  goto err_fw_corrupted;




 VAR_5 = 1;
 VAR_7 = FUNC_9(VAR_3, VAR_0, sizeof(VAR_5), &VAR_5);

 if (VAR_7 < 0) {
  FUNC_6(VAR_3, "modem reset failed with error %d\n", VAR_7);
  goto err;
 }

 while (VAR_8 > 3) {
  u8 VAR_9 = FUNC_0(VAR_4);
  u16 VAR_10 = FUNC_2(VAR_4 + 1);

  VAR_8 -= VAR_9 + 3;
  if (VAR_8 < 0)
   goto err_fw_corrupted;

  VAR_7 = FUNC_9(VAR_3, VAR_10, VAR_9, VAR_4 + 3);
  if (VAR_7 < 0) {
   FUNC_6(VAR_3, "uploading firmware data failed "
     "with error %d\n", VAR_7);
   goto err;
  }
  VAR_4 += VAR_9 + 3;
 }

 if (VAR_8 != 0)
  goto err_fw_corrupted;




 VAR_5 = 0;
 VAR_7 = FUNC_9(VAR_3, VAR_0, 1, &VAR_5);
 if (VAR_7 < 0)
  FUNC_6(VAR_3, "modem de-assert failed with error %d\n", VAR_7);
 else
  FUNC_7(VAR_3, "firmware uploaded\n");

 goto err;

err_fw_corrupted:
 FUNC_6(VAR_3, "firmware is corrupted\n");
err:
 FUNC_4(VAR_1);
 FUNC_8(VAR_3);
}
