
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sd {scalar_t__ frame_rate; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; TYPE_2__ cam; } ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int FUNC_0 (struct rate_s const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct gspca_dev*,int,scalar_t__) ;
 int FUNC_3 (struct gspca_dev*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;
 struct rate_s {
  u8 fps;
  u8 r11;
  u8 r0d;
  u8 re5;
 };
 const struct rate_s *VAR_4;
 static const struct rate_s VAR_5[] = {
  {60, 0x01, 0xc1, 0x04},
  {50, 0x01, 0x41, 0x02},
  {40, 0x02, 0xc1, 0x04},
  {30, 0x04, 0x81, 0x02},
  {15, 0x03, 0x41, 0x04},
 };
 static const struct rate_s VAR_6[] = {
  {125, 0x02, 0x81, 0x02},
  {100, 0x02, 0xc1, 0x04},
  {75, 0x03, 0xc1, 0x04},
  {60, 0x04, 0xc1, 0x04},
  {50, 0x02, 0x41, 0x04},
  {40, 0x03, 0x41, 0x04},
  {30, 0x04, 0x41, 0x04},
 };

 if (VAR_1->cam.cam_mode[VAR_1->curr_mode].priv == 0) {
  VAR_4 = VAR_5;
  VAR_3 = FUNC_0(VAR_5);
 } else {
  VAR_4 = VAR_6;
  VAR_3 = FUNC_0(VAR_6);
 }
 while (--VAR_3 > 0) {
  if (VAR_2->frame_rate >= VAR_4->fps)
   break;
  VAR_4++;
 }

 FUNC_3(VAR_1, 0x11, VAR_4->r11);
 FUNC_3(VAR_1, 0x0d, VAR_4->r0d);
 FUNC_2(VAR_1, 0xe5, VAR_4->re5);

 FUNC_1(VAR_0, "frame_rate: %d", VAR_4->fps);
}
