
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int compress_inited; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct usb_ov511*) ;

__attribute__((used)) static int
FUNC_2(struct usb_ov511 *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->compress_inited) {
  if (FUNC_1(VAR_1) < 0) {
   FUNC_0("Error uploading quantization tables");
   VAR_2 = -VAR_0;
   goto out;
  }
 }

 VAR_1->compress_inited = 1;
out:
 return VAR_2;
}
