
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {size_t sensor; scalar_t__ bridge; int reg11; int avg_lum; scalar_t__ exp_too_low_cnt; scalar_t__ exp_too_high_cnt; scalar_t__ autogain_ignore_frames; scalar_t__ frames_to_drop; } ;
struct cam {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; struct cam cam; } ;
typedef int __u8 ;
struct TYPE_4__ {int flags; int sensor_init_size; int sensor_init; int bridge_init; } ;
struct TYPE_3__ {int priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct gspca_dev*,int const*) ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct gspca_dev*,int,int*,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_10(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 struct cam *VAR_7 = &VAR_5->cam;
 int VAR_8, VAR_9;
 __u8 VAR_10[0x31];

 VAR_9 = VAR_7->cam_mode[VAR_5->curr_mode].priv & 0x07;

 FUNC_3(&VAR_10[0x01], VAR_4[VAR_6->sensor].bridge_init, 0x19);

 VAR_10[0x18] |= VAR_9 << 4;


 if (VAR_6->bridge == VAR_0) {
  VAR_10[0x05] = 0x20;
  VAR_10[0x06] = 0x20;
  VAR_10[0x07] = 0x20;
 } else {
  VAR_10[0x10] = 0x00;
  VAR_10[0x11] = 0x00;
 }


 if (VAR_4[VAR_6->sensor].flags & VAR_1) {
  VAR_10[0x1a] = 0x14;
  VAR_10[0x1b] = 0x0a;
  VAR_10[0x1c] = 0x02;
  VAR_10[0x1d] = 0x02;
  VAR_10[0x1e] = 0x09;
  VAR_10[0x1f] = 0x07;
 } else {
  VAR_10[0x1a] = 0x1d;
  VAR_10[0x1b] = 0x10;
  VAR_10[0x1c] = 0x05;
  VAR_10[0x1d] = 0x03;
  VAR_10[0x1e] = 0x0f;
  VAR_10[0x1f] = 0x0c;
 }


 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
  VAR_10[0x20 + VAR_8] = VAR_8 * 16;
 VAR_10[0x20 + VAR_8] = 255;


 switch (VAR_6->sensor) {
 case 128:




  VAR_10[0x19] = VAR_9 ? 0x23 : 0x43;
  break;
 case 130:




  if (VAR_6->bridge == VAR_0) {
   VAR_10[0x01] = 0x44;
   VAR_10[0x12] = 0x02;
  }
 }

 if (VAR_7->cam_mode[VAR_5->curr_mode].priv & VAR_2)
  VAR_10[0x18] &= ~0x80;


 if (VAR_7->cam_mode[VAR_5->curr_mode].priv & VAR_3) {
  VAR_10[0x12] += 16;
  VAR_10[0x13] += 24;
  VAR_10[0x15] = 320 / 16;
  VAR_10[0x16] = 240 / 16;
 }


 FUNC_5(VAR_5, 0x01, &VAR_10[0x01], 1);

 FUNC_5(VAR_5, 0x17, &VAR_10[0x17], 1);

 FUNC_5(VAR_5, 0x01, &VAR_10[0x01],
       (VAR_6->bridge == VAR_0) ? 0x30 : 0x1f);


 FUNC_2(VAR_5, VAR_4[VAR_6->sensor].sensor_init,
   VAR_4[VAR_6->sensor].sensor_init_size);


 switch (VAR_6->sensor) {
 case 129: {
  const __u8 VAR_11[] =
   {0xa0, 0x40, 0x02, 0x03, 0x00, 0x00, 0x00, 0x10};

  if (VAR_9)
   FUNC_1(VAR_5, VAR_11);
  break;
     }
 case 130:


  if (VAR_6->bridge == VAR_0) {
   const __u8 VAR_12[] = { 0xa0, 0x21, 0x13,
          0x80, 0x00, 0x00, 0x00, 0x10 };
   FUNC_1(VAR_5, VAR_12);
  }
  break;
 }

 FUNC_5(VAR_5, 0x15, &VAR_10[0x15], 2);

 FUNC_5(VAR_5, 0x18, &VAR_10[0x18], 1);

 FUNC_5(VAR_5, 0x12, &VAR_10[0x12], 1);

 FUNC_5(VAR_5, 0x13, &VAR_10[0x13], 1);


 FUNC_5(VAR_5, 0x17, &VAR_10[0x17], 1);

 FUNC_5(VAR_5, 0x19, &VAR_10[0x19], 1);

 FUNC_5(VAR_5, 0x1c, &VAR_10[0x1c], 4);

 FUNC_5(VAR_5, 0x01, &VAR_10[0x01], 1);

 FUNC_5(VAR_5, 0x18, &VAR_10[0x18], 2);
 FUNC_4(20);

 VAR_6->reg11 = -1;

 FUNC_9(VAR_5);
 FUNC_6(VAR_5);
 FUNC_7(VAR_5);
 FUNC_8(VAR_5);

 VAR_6->frames_to_drop = 0;
 VAR_6->autogain_ignore_frames = 0;
 VAR_6->exp_too_high_cnt = 0;
 VAR_6->exp_too_low_cnt = 0;
 FUNC_0(&VAR_6->avg_lum, -1);
 return 0;
}
