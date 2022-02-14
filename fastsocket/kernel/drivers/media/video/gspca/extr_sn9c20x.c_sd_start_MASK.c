
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {int vstart; int hstart; int * jpeg_hdr; int quality; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {int width; int height; int* usb_buf; scalar_t__ curr_mode; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 int * FUNC_0 (int,int) ;
 int * FUNC_1 (int,int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct gspca_dev*,int,int) ;
 int FUNC_7 (struct gspca_dev*,int,int *,int) ;
 int FUNC_8 (struct gspca_dev*,int,int) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*) ;
 int FUNC_12 (struct gspca_dev*) ;
 int FUNC_13 (struct gspca_dev*) ;
 int FUNC_14 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_15(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 int VAR_7 = VAR_5->cam.cam_mode[(int) VAR_5->curr_mode].priv;
 int VAR_8 = VAR_5->width;
 int VAR_9 = VAR_5->height;
 u8 VAR_10, VAR_11 = 0;

 FUNC_4(VAR_6->jpeg_hdr, VAR_9, VAR_8,
   0x21);
 FUNC_5(VAR_6->jpeg_hdr, VAR_6->quality);

 if (VAR_7 & VAR_3)
  VAR_10 = 0x2d;
 else if (VAR_7 & VAR_2)
  VAR_10 = 0x2c;
 else
  VAR_10 = 0x2f;

 switch (VAR_7 & VAR_4) {
 case 131:
  VAR_11 = 0xc0;
  FUNC_3("Set 1280x1024");
  break;
 case 128:
  VAR_11 = 0x80;
  FUNC_3("Set 640x480");
  break;
 case 129:
  VAR_11 = 0x90;
  FUNC_3("Set 320x240");
  break;
 case 130:
  VAR_11 = 0xa0;
  FUNC_3("Set 160x120");
  break;
 }

 FUNC_2(VAR_5, VAR_7);
 FUNC_7(VAR_5, 0x1100, &VAR_6->jpeg_hdr[VAR_0], 64);
 FUNC_7(VAR_5, 0x1140, &VAR_6->jpeg_hdr[VAR_1], 64);
 FUNC_7(VAR_5, 0x10fb, FUNC_0(VAR_8, VAR_9), 5);
 FUNC_7(VAR_5, 0x1180, FUNC_1(VAR_7, VAR_6->hstart, VAR_6->vstart), 6);
 FUNC_8(VAR_5, 0x1189, VAR_11);
 FUNC_8(VAR_5, 0x10e0, VAR_10);

 FUNC_9(VAR_5);
 FUNC_12(VAR_5);
 FUNC_14(VAR_5);
 FUNC_11(VAR_5);
 FUNC_10(VAR_5);
 FUNC_13(VAR_5);

 FUNC_8(VAR_5, 0x1007, 0x20);

 FUNC_6(VAR_5, 0x1061, 1);
 FUNC_8(VAR_5, 0x1061, VAR_5->usb_buf[0] | 0x02);
 return 0;
}
