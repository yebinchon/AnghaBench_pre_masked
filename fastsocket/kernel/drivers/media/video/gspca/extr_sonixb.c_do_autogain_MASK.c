
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ autogain_ignore_frames; size_t sensor; int brightness; scalar_t__ exposure; scalar_t__ gain; int autogain; int avg_lum; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gspca_dev*,int,int,int,int ,int ) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct sd *VAR_11 = (struct sd *) VAR_7;
 int VAR_12 = FUNC_1(&VAR_11->avg_lum);

 if (VAR_12 == -1 || !VAR_11->autogain)
  return;

 if (VAR_11->autogain_ignore_frames > 0) {
  VAR_11->autogain_ignore_frames--;
  return;
 }



 if (VAR_6[VAR_11->sensor].flags & VAR_4) {
  VAR_8 = 500;

  VAR_9 = 5000;
 } else {
  VAR_8 = 1500;
  VAR_9 = 13000;
 }

 if (VAR_6[VAR_11->sensor].flags & VAR_3)
  VAR_10 = FUNC_3(VAR_7, VAR_12,
    VAR_11->brightness * VAR_9 / 127,
    VAR_8);
 else
  VAR_10 = FUNC_2(VAR_7, VAR_12,
    VAR_11->brightness * VAR_9 / 127,
    VAR_8, VAR_5, VAR_2);

 if (VAR_10) {
  FUNC_0(VAR_1, "autogain: gain changed: gain: %d expo: %d",
   (int)VAR_11->gain, (int)VAR_11->exposure);
  VAR_11->autogain_ignore_frames = VAR_0;
 }
}
