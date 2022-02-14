
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sd {int exposure; int exposure_step; int older_step; int old_step; } ;
struct gspca_dev {int dummy; } ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2, u16 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 s16 VAR_5;






 if (VAR_3 < VAR_1) {
  if (VAR_4->exposure > 0x1770)
   return;

  VAR_5 = VAR_4->exposure + VAR_4->exposure_step;
  if (VAR_5 > 0x1770)
   VAR_5 = 0x1770;
  if (VAR_5 < 0x10)
   VAR_5 = 0x10;
  VAR_4->exposure = VAR_5;
  FUNC_0(VAR_2);

  VAR_4->older_step = VAR_4->old_step;
  VAR_4->old_step = 1;

  if (VAR_4->old_step ^ VAR_4->older_step)
   VAR_4->exposure_step /= 2;
  else
   VAR_4->exposure_step += 2;
 }
 if (VAR_3 > VAR_0) {
  if (VAR_4->exposure < 0x10)
   return;
  VAR_5 = VAR_4->exposure - VAR_4->exposure_step;
  if (VAR_5 > 0x1700)
   VAR_5 = 0x1770;
  if (VAR_5 < 0x10)
   VAR_5 = 0x10;
  VAR_4->exposure = VAR_5;
  FUNC_0(VAR_2);
  VAR_4->older_step = VAR_4->old_step;
  VAR_4->old_step = 0;

  if (VAR_4->old_step ^ VAR_4->older_step)
   VAR_4->exposure_step /= 2;
  else
   VAR_4->exposure_step += 2;
 }
}
