
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int brightness; int gain; int exposure; int avg_lum; scalar_t__ autogain_ignore_frames; scalar_t__ sof_read; } ;
struct gspca_dev {int width; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int * VAR_1 ;
 int FUNC_3 (struct gspca_dev*,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 __u8 VAR_4;

 FUNC_3(VAR_2, 0x0f, 0x10);
 FUNC_4(VAR_2, 0x0002, VAR_1[0], 8);
 FUNC_4(VAR_2, 0x000a, VAR_1[1], 8);
 FUNC_4(VAR_2, 0x0012, VAR_1[2], 8);
 FUNC_4(VAR_2, 0x0042, VAR_1[3], 8);


 if (VAR_2->width == 176)
  FUNC_3(VAR_2, 0x4a, 0xff);
 else
  FUNC_3(VAR_2, 0x4a, 0x30);
 FUNC_3(VAR_2, 0x4b, 0x00);
 FUNC_3(VAR_2, 0x08, VAR_3->brightness);


 FUNC_3(VAR_2, 0x0e, VAR_3->gain);
 FUNC_3(VAR_2, 0x02, VAR_3->exposure);

 VAR_4 = 0x02;
 if (VAR_2->width == 176) {
  VAR_4 |= 0x01;
  FUNC_0(VAR_0, "pac207_start mode 176x144");
 } else {
  FUNC_0(VAR_0, "pac207_start mode 352x288");
 }
 FUNC_3(VAR_2, 0x41, VAR_4);

 FUNC_3(VAR_2, 0x13, 0x01);
 FUNC_3(VAR_2, 0x1c, 0x01);
 FUNC_2(10);
 FUNC_3(VAR_2, 0x40, 0x01);

 VAR_3->sof_read = 0;
 VAR_3->autogain_ignore_frames = 0;
 FUNC_1(&VAR_3->avg_lum, -1);
 return 0;
}
