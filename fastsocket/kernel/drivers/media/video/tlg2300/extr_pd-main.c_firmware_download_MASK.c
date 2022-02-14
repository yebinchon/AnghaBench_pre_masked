
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {TYPE_2__** ep_out; int dev; } ;
struct firmware {size_t size; int data; } ;
struct TYPE_3__ {size_t wMaxPacketSize; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (size_t,size_t) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,int ,int *) ;
 int FUNC_6 (struct usb_device*,int ,void*,int ,int*,int) ;
 int FUNC_7 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_8(struct usb_device *VAR_4)
{
 int VAR_5 = 0, VAR_6;
 const struct firmware *VAR_7 = ((void*)0);
 void *VAR_8 = ((void*)0);
 size_t VAR_9 = 0, VAR_10;
 size_t VAR_11;

 VAR_5 = FUNC_5(&VAR_7, VAR_3, &VAR_4->dev);
 if (VAR_5) {
  FUNC_2("download err : %d", VAR_5);
  return VAR_5;
 }

 VAR_9 = VAR_7->size;

 VAR_8 = FUNC_1(VAR_7->data, VAR_9, VAR_1);
 if (!VAR_8) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_11 = VAR_4->ep_out[0x1]->desc.wMaxPacketSize;
 FUNC_2("\t\t download size : %d", (int)VAR_11);

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10 += VAR_11) {
  VAR_6 = 0;
  VAR_5 = FUNC_6(VAR_4,
    FUNC_7(VAR_4, 0x01),
    VAR_8 + VAR_10,
    FUNC_3(VAR_11, VAR_9 - VAR_10),
    &VAR_6,
    VAR_2 * 10);
  if (VAR_5)
   break;
 }
 FUNC_0(VAR_8);
out:
 FUNC_4(VAR_7);
 return VAR_5;
}
