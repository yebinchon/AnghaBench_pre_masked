
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {size_t sensor; int autogain_ignore_frames; int gain; int exposure; scalar_t__ autogain; scalar_t__ exp_too_low_cnt; scalar_t__ exp_too_high_cnt; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef scalar_t__ __s32 ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_5, __s32 VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;

 VAR_7->autogain = VAR_6;
 VAR_7->exp_too_high_cnt = 0;
 VAR_7->exp_too_low_cnt = 0;





 if (VAR_7->autogain && !(VAR_4[VAR_7->sensor].flags & VAR_2)) {
  VAR_7->exposure = VAR_1;
  VAR_7->gain = VAR_3;
  if (VAR_5->streaming) {
   VAR_7->autogain_ignore_frames = VAR_0;
   FUNC_0(VAR_5);
   FUNC_1(VAR_5);
  }
 }

 return 0;
}
