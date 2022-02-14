
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct usb_device {int dummy; } ;
struct hexline {int addr; int len; int chk; int type; int data; } ;
struct firmware {int dummy; } ;
typedef int b ;
struct TYPE_10__ {int num_adapters; TYPE_4__* adapter; } ;
struct TYPE_6__ {int buffersize; } ;
struct TYPE_7__ {TYPE_1__ bulk; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct TYPE_9__ {TYPE_3__ stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 int FUNC_1 (struct usb_device*,int) ;
 int FUNC_2 (struct firmware const*,struct hexline*,int*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (struct usb_device*,int ,int*,int,int*,int) ;
 int FUNC_8 (struct usb_device*,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_9 (struct usb_device*,int ) ;
 int FUNC_10 (struct usb_device*,int) ;

int FUNC_11(struct usb_device *VAR_8, const struct firmware *VAR_9)
{
 struct hexline VAR_10;
 int VAR_11 = 0, VAR_12, VAR_13, VAR_14, VAR_15;
 u8 VAR_16[16];
 u32 VAR_17;

 u8 VAR_18[260];

 while ((VAR_12 = FUNC_2(VAR_9, &VAR_10, &VAR_11)) > 0) {
  FUNC_0("writing to address 0x%08x (buffer: 0x%02x %02x)\n",
    VAR_10.addr, VAR_10.len, VAR_10.chk);

  VAR_18[0] = VAR_10.len;
  VAR_18[1] = (VAR_10.addr >> 8) & 0xff;
  VAR_18[2] = VAR_10.addr & 0xff;
  VAR_18[3] = VAR_10.type;
  FUNC_5(&VAR_18[4],VAR_10.data,VAR_10.len);
  VAR_18[4+VAR_10.len] = VAR_10.chk;

  VAR_12 = FUNC_7(VAR_8,
   FUNC_10(VAR_8, 0x01),
   VAR_18,
   VAR_10.len + 5,
   &VAR_13,
   1000);

  if (VAR_12 < 0) {
   FUNC_3("firmware download failed at %d with %d",VAR_11,VAR_12);
   return VAR_12;
  }
 }

 if (VAR_12 == 0) {

  if ((VAR_12 = FUNC_1(VAR_8, 0x70000000)) == 0) {
   FUNC_4("firmware started successfully.");
   FUNC_6(500);
  }
 } else
  VAR_12 = -VAR_0;


 if (VAR_7 < 1)
  VAR_7 = 1;


 FUNC_8(VAR_8, FUNC_9(VAR_8, 0),
      VAR_1,
      VAR_4 | VAR_3, 0, 0,
      VAR_16, sizeof(VAR_16), VAR_2);
 VAR_17 = (VAR_16[8] << 24) | (VAR_16[9] << 16) | (VAR_16[10] << 8) | VAR_16[11];



 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  for (VAR_15 = 0; VAR_15 < VAR_6[VAR_14].num_adapters;
    VAR_15++) {
   if (VAR_17 >= 0x10201) {
    VAR_6[VAR_14].adapter[VAR_15].stream.u.bulk.buffersize = 188*VAR_7;
   } else {


    VAR_6[VAR_14].adapter[VAR_15].stream.u.bulk.buffersize = ((188*VAR_7+188/2)/512)*512;
    if (VAR_6[VAR_14].adapter[VAR_15].stream.u.bulk.buffersize < 512)
     VAR_6[VAR_14].adapter[VAR_15].stream.u.bulk.buffersize = 512;
   }
  }
 }

 return VAR_12;
}
