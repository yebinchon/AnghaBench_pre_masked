
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct usbtest_dev {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbtest_dev*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (unsigned int*) ;
 unsigned int* FUNC_2 (unsigned int,int ) ;
 scalar_t__ VAR_9 ;
 struct usb_device* FUNC_3 (struct usbtest_dev*) ;
 int FUNC_4 (struct usb_device*,int ,int,int,int ,int ,unsigned int*,unsigned int,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7 (struct usbtest_dev *VAR_10,
  unsigned VAR_11, unsigned VAR_12, unsigned VAR_13)
{
 unsigned VAR_14, VAR_15, VAR_16;
 int VAR_17;
 u8 *VAR_18;
 char *VAR_19 = "?";
 struct usb_device *VAR_20;

 if (VAR_12 < 1 || VAR_12 > 0xffff || VAR_13 >= VAR_12)
  return -VAR_1;

 VAR_18 = FUNC_2(VAR_12, VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_20 = FUNC_3 (VAR_10);
 VAR_16 = VAR_12;
 VAR_17 = 0;




 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {

  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
   VAR_18 [VAR_15] = VAR_14 + VAR_15;
  VAR_17 = FUNC_4 (VAR_20, FUNC_6 (VAR_20,0),
    0x5b, VAR_7|VAR_8,
    0, 0, VAR_18, VAR_16, VAR_5);
  if (VAR_17 != VAR_16) {
   VAR_19 = "write";
   if (VAR_17 >= 0) {
    FUNC_0(VAR_10, "ctrl_out, wlen %d (expected %d)\n",
      VAR_17, VAR_16);
    VAR_17 = -VAR_0;
   }
   break;
  }


  VAR_17 = FUNC_4 (VAR_20, FUNC_5 (VAR_20,0),
    0x5c, VAR_6|VAR_8,
    0, 0, VAR_18, VAR_16, VAR_4);
  if (VAR_17 != VAR_16) {
   VAR_19 = "read";
   if (VAR_17 >= 0) {
    FUNC_0(VAR_10, "ctrl_out, rlen %d (expected %d)\n",
      VAR_17, VAR_16);
    VAR_17 = -VAR_0;
   }
   break;
  }


  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
   if (VAR_18 [VAR_15] != (u8) (VAR_14 + VAR_15)) {
    FUNC_0(VAR_10, "ctrl_out, byte %d is %d not %d\n",
     VAR_15, VAR_18 [VAR_15], (u8) VAR_14 + VAR_15);
    VAR_17 = -VAR_0;
    break;
   }
  }
  if (VAR_17 < 0) {
   VAR_19 = "verify";
   break;
  }

  VAR_16 += VAR_13;





  if (VAR_16 > VAR_12)
   VAR_16 = VAR_9 ? 1 : 0;
 }

 if (VAR_17 < 0)
  FUNC_0 (VAR_10, "ctrl_out %s failed, code %d, count %d\n",
   VAR_19, VAR_17, VAR_14);

 FUNC_1 (VAR_18);
 return VAR_17;
}
