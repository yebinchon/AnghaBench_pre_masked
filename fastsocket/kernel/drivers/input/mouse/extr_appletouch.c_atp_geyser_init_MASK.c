
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,int,int ,int ,char*,int,int) ;
 int FUNC_5 (struct usb_device*,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_12)
{
 char *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_13 = FUNC_3(8, VAR_7);
 if (!VAR_13) {
  FUNC_1("Out of memory");
  return -VAR_6;
 }

 VAR_14 = FUNC_4(VAR_12, FUNC_5(VAR_12, 0),
   VAR_0,
   VAR_8 | VAR_11 | VAR_10,
   VAR_2,
   VAR_1, VAR_13, 8, 5000);

 if (VAR_14 != 8) {
  FUNC_0("atp_geyser_init: read error\n");
  for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
   FUNC_0("appletouch[%d]: %d\n", VAR_15, VAR_13[VAR_15]);

  FUNC_1("Failed to read mode from device.");
  VAR_16 = -VAR_5;
  goto out_free;
 }


 VAR_13[0] = VAR_3;

 VAR_14 = FUNC_4(VAR_12, FUNC_6(VAR_12, 0),
   VAR_4,
   VAR_9 | VAR_11 | VAR_10,
   VAR_2,
   VAR_1, VAR_13, 8, 5000);

 if (VAR_14 != 8) {
  FUNC_0("atp_geyser_init: write error\n");
  for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
   FUNC_0("appletouch[%d]: %d\n", VAR_15, VAR_13[VAR_15]);

  FUNC_1("Failed to request geyser raw mode");
  VAR_16 = -VAR_5;
  goto out_free;
 }
 VAR_16 = 0;
out_free:
 FUNC_2(VAR_13);
 return VAR_16;
}
