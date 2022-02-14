
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {TYPE_1__* ctrls; int quality; int jpeg_hdr; } ;
struct gspca_dev {int height; int width; int* usb_buf; int usb_err; scalar_t__ ctrl_inac; } ;
struct TYPE_2__ {int val; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_4 ;
 int FUNC_2 (struct gspca_dev*,int,int ) ;
 int FUNC_3 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 u8 *VAR_7;
 int VAR_8;


 FUNC_0(VAR_6->jpeg_hdr, VAR_5->height, VAR_5->width,
   0x21);
 FUNC_1(VAR_6->jpeg_hdr, VAR_6->quality);

 VAR_7 = VAR_5->usb_buf;

 VAR_7[0] = 0x01;
 VAR_7[1] = 0x01;
 FUNC_3(VAR_5, 2);




 VAR_7[0] = 0x00;
 VAR_7[1] = 0x0c | 0x01;
 VAR_7[2] = 0x01;
 VAR_7[3] = VAR_5->width / 8;
 VAR_7[4] = VAR_5->height / 8;
 VAR_7[5] = 0x30;

 VAR_7[6] = 0x02;
 VAR_7[7] = VAR_6->ctrls[VAR_2].val * 0x40;
 VAR_7[8] = 0x01;



 VAR_7[9] = 0x52;

 VAR_7[10] = 0x18;

 FUNC_3(VAR_5, 11);

 VAR_7[0] = 0x23;
 VAR_7[1] = 0x09;

 FUNC_3(VAR_5, 2);

 VAR_7[0] = 0x3c;




 VAR_7[1] = 50;

 FUNC_3(VAR_5, 2);


 VAR_7[0] = 0x5e;
 VAR_7[1] = 0;




 VAR_7[2] = VAR_6->ctrls[VAR_1].val << 3;
 VAR_7[3] = ((VAR_6->ctrls[VAR_1].val >> 2) & 0xf8) | 0x04;
 VAR_7[4] = VAR_6->ctrls[VAR_0].val;
 VAR_7[5] = 0x00;

 FUNC_3(VAR_5, 6);

 VAR_7[0] = 0x67;

 VAR_7[1] = VAR_6->ctrls[VAR_3].val * 4 + 3;
 VAR_7[2] = 0x14;
 FUNC_3(VAR_5, 3);

 VAR_7[0] = 0x69;
 VAR_7[1] = 0x2f;
 VAR_7[2] = 0x28;
 VAR_7[3] = 0x42;
 FUNC_3(VAR_5, 4);

 VAR_7[0] = 0x63;
 VAR_7[1] = 0x07;
 FUNC_3(VAR_5, 2);



 for (VAR_8 = 0; VAR_8 < sizeof VAR_4; VAR_8++)
  FUNC_2(VAR_5, VAR_8 + 1, VAR_4[VAR_8]);

 VAR_7[0] = 0x00;
 VAR_7[1] = 0x4d;
 FUNC_3(VAR_5, 2);

 VAR_5->ctrl_inac = 0;
 return VAR_5->usb_err;
}
