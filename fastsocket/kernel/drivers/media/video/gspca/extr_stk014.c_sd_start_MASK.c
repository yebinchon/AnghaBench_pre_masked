
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int quality; int jpeg_hdr; } ;
struct gspca_dev {int width; int alt; int usb_err; int iface; int dev; int height; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int) ;
 int FUNC_6 (struct gspca_dev*,int,int ) ;
 int FUNC_7 (struct gspca_dev*,int) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*) ;
 int FUNC_12 (struct gspca_dev*,int,int) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3, VAR_4;


 FUNC_2(VAR_2->jpeg_hdr, VAR_1->height, VAR_1->width,
   0x22);
 FUNC_3(VAR_2->jpeg_hdr, VAR_2->quality);


 FUNC_13(VAR_1->dev, VAR_1->iface, 1);

 FUNC_7(VAR_1, 0x10000000);
 FUNC_7(VAR_1, 0x00000000);
 FUNC_7(VAR_1, 0x8002e001);
 FUNC_7(VAR_1, 0x14000000);
 if (VAR_1->width > 320)
  VAR_4 = 0x8002e001;
 else
  VAR_4 = 0x4001f000;
 FUNC_7(VAR_1, VAR_4);
 VAR_3 = FUNC_13(VAR_1->dev,
     VAR_1->iface,
     VAR_1->alt);
 if (VAR_3 < 0) {
  FUNC_1("set intf %d %d failed",
   VAR_1->iface, VAR_1->alt);
  VAR_1->usb_err = VAR_3;
  goto out;
 }
  FUNC_5(VAR_1, 0x0630);
 FUNC_4(VAR_1, 0x000020);
 FUNC_5(VAR_1, 0x0650);
 FUNC_12(VAR_1, 0x000020, 0xffffffff);
 FUNC_6(VAR_1, 0x0620, 0);
 FUNC_6(VAR_1, 0x0630, 0);
 FUNC_6(VAR_1, 0x0640, 0);
 FUNC_6(VAR_1, 0x0650, 0);
 FUNC_6(VAR_1, 0x0660, 0);
 FUNC_8(VAR_1);
 FUNC_10(VAR_1);
 FUNC_9(VAR_1);
 FUNC_7(VAR_1, 0x09800000);
 FUNC_7(VAR_1, 0x0a800000);
 FUNC_7(VAR_1, 0x0b800000);
 FUNC_7(VAR_1, 0x0d030000);
 FUNC_11(VAR_1);


 FUNC_7(VAR_1, 0x01000000);
 FUNC_7(VAR_1, 0x01000000);
 if (VAR_1->usb_err >= 0)
  FUNC_0(VAR_0, "camera started alt: 0x%02x",
    VAR_1->alt);
out:
 return VAR_1->usb_err;
}
