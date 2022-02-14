
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int compress_inited; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct usb_ov511*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct usb_ov511*,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct usb_ov511 *VAR_9)
{
 int VAR_10 = 0;

 if (!VAR_9->compress_inited) {
  FUNC_2(VAR_9, 0x70, VAR_2);
  FUNC_2(VAR_9, 0x71, VAR_1);
  FUNC_2(VAR_9, 0x72, VAR_4);
  FUNC_2(VAR_9, 0x73, VAR_3);
  FUNC_2(VAR_9, 0x74, VAR_6);
  FUNC_2(VAR_9, 0x75, VAR_5);
  FUNC_2(VAR_9, 0x76, VAR_8);
  FUNC_2(VAR_9, 0x77, VAR_7);

  if (FUNC_1(VAR_9) < 0) {
   FUNC_0("Error uploading quantization tables");
   VAR_10 = -VAR_0;
   goto out;
  }
 }

 VAR_9->compress_inited = 1;
out:
 return VAR_10;
}
