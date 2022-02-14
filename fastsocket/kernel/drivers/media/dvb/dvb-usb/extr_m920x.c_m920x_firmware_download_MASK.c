
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_device*,int ,int,int,int *,int) ;
 int FUNC_5 (struct usb_device*,int ,int,int ) ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct usb_device*,int ,int ,int,int,int,int *,int,int) ;
 int FUNC_9 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_device *VAR_10, const struct firmware *VAR_11)
{
 u16 VAR_12, VAR_13, VAR_14;
 u8 VAR_15[4], *VAR_16;
 int VAR_17, VAR_18, VAR_19 = 0;

 VAR_16 = FUNC_3(65536, VAR_3);
 if (VAR_16 == ((void*)0))
  return -VAR_2;

 if ((VAR_19 = FUNC_4(VAR_10, VAR_5, 0x0, 0x8000, VAR_15, 4)) != 0)
  goto done;
 FUNC_0("%x %x %x %x\n", VAR_15[0], VAR_15[1], VAR_15[2], VAR_15[3]);

 if ((VAR_19 = FUNC_4(VAR_10, VAR_6, 0x0, 0x0, VAR_15, 1)) != 0)
  goto done;
 FUNC_0("%x\n", VAR_15[0]);

 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  for (VAR_17 = 0; VAR_17 + (sizeof(u16) * 3) < VAR_11->size;) {
   VAR_12 = FUNC_1(VAR_11->data + VAR_17);
   VAR_17 += sizeof(u16);

   VAR_13 = FUNC_1(VAR_11->data + VAR_17);
   VAR_17 += sizeof(u16);

   VAR_14 = FUNC_1(VAR_11->data + VAR_17);
   VAR_17 += sizeof(u16);

   if (VAR_18 == 1) {

    FUNC_6(VAR_16, VAR_11->data + VAR_17, VAR_14);

    VAR_19 = FUNC_8(VAR_10, FUNC_9(VAR_10,0),
            VAR_6,
            VAR_9 | VAR_8,
            VAR_12, VAR_13, VAR_16, VAR_14, 20);
    if (VAR_19 != VAR_14) {
     FUNC_0("error while uploading fw!\n");
     VAR_19 = -VAR_1;
     goto done;
    }
    FUNC_7(3);
   }
   VAR_17 += VAR_14;
  }
  if (VAR_17 != VAR_11->size) {
   FUNC_0("bad firmware file!\n");
   VAR_19 = -VAR_0;
   goto done;
  }
 }

 FUNC_7(36);


 (void) FUNC_5(VAR_10, VAR_4, 0x01, VAR_7);
 FUNC_0("firmware uploaded!\n");

 done:
 FUNC_2(VAR_16);

 return VAR_19;
}
