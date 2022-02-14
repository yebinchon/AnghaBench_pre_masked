
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dummy; } ;
struct hexline {int len; int* data; int addr; int chk; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int cpu_cs_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (struct firmware const*,struct hexline*,int*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct usb_device*,int ,int*,int) ;

int FUNC_4(struct usb_device *VAR_3, const struct firmware *VAR_4, int VAR_5)
{
 struct hexline VAR_6;
 u8 VAR_7;
 int VAR_8,VAR_9=0;


 VAR_7 = 1;
 if ((VAR_8 = FUNC_3(VAR_3,VAR_2[VAR_5].cpu_cs_register,&VAR_7,1)) != 1)
  FUNC_2("could not stop the USB controller CPU.");

 while ((VAR_8 = FUNC_1(VAR_4,&VAR_6,&VAR_9)) > 0) {
  FUNC_0("writing to address 0x%04x (buffer: 0x%02x %02x)\n",VAR_6.addr,VAR_6.len,VAR_6.chk);
  VAR_8 = FUNC_3(VAR_3,VAR_6.addr,VAR_6.data,VAR_6.len);

  if (VAR_8 != VAR_6.len) {
   FUNC_2("error while transferring firmware "
    "(transferred size: %d, block size: %d)",
    VAR_8,VAR_6.len);
   VAR_8 = -VAR_0;
   break;
  }
 }
 if (VAR_8 < 0) {
  FUNC_2("firmware download failed at %d with %d",VAR_9,VAR_8);
  return VAR_8;
 }

 if (VAR_8 == 0) {

  VAR_7 = 0;
  if (VAR_8 || FUNC_3(VAR_3,VAR_2[VAR_5].cpu_cs_register,&VAR_7,1) != 1) {
   FUNC_2("could not restart the USB controller CPU.");
   VAR_8 = -VAR_0;
  }
 } else
  VAR_8 = -VAR_1;

 return VAR_8;
}
