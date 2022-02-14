
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dev; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct usb_device*,int,int,int*,int,int ) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_8(struct usb_device *VAR_5,
           const char *VAR_6)
{
 const struct firmware *VAR_7 = ((void*)0);
 u8 *VAR_8, *VAR_9;
 int VAR_10 = 0, VAR_11,VAR_12=40;
 u8 VAR_13;
 FUNC_1("start downloading fpga firmware %s",VAR_6);

 if ((VAR_10 = FUNC_7(&VAR_7, VAR_6, &VAR_5->dev)) != 0) {
  FUNC_0("did not find the firmware file. (%s) "
   "Please see linux/Documentation/dvb/ for more details on firmware-problems.",
   VAR_6);
  return VAR_10;
 } else {
  VAR_9 = FUNC_3(VAR_7->size, VAR_1);
  FUNC_5(VAR_5, 0xbc, 0x00, &VAR_13, 1, VAR_2);
  if (VAR_9 != ((void*)0) && VAR_13 != 0x67) {

   u8 VAR_14 = 0, VAR_15 = 0;
   FUNC_4(VAR_9, VAR_7->data, VAR_7->size);

   FUNC_5(VAR_5, 0xbc, 0xaa, &VAR_15, 1,
      VAR_4);
   for (VAR_11 = 0; VAR_11 < VAR_7->size;) {
    if ( (VAR_7->size - VAR_11) <VAR_12){
        VAR_12=VAR_7->size-VAR_11;
    }
    VAR_8 = (u8 *) VAR_9 + VAR_11;
    if (FUNC_5
     (VAR_5, VAR_3, 0x0, VAR_8 , VAR_12,
      VAR_4) != VAR_12
     ) {
     FUNC_0("error while transferring firmware");
     VAR_10 = -VAR_0;
     break;
    }
    VAR_11 = VAR_11 + VAR_12;
   }

   if (VAR_10 || FUNC_5
     (VAR_5, 0xa0, 0xe600, &VAR_14, 1,
     VAR_4) != 1) {
    FUNC_0("could not restart the USB controller CPU.");
    VAR_10 = -VAR_0;
   }
  }
 }
 FUNC_2(VAR_9);
 FUNC_6(VAR_7);
 return VAR_10;
}
