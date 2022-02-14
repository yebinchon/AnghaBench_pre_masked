
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int brightness; scalar_t__ autogain_ignore_frames; int avg_lum; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gspca_dev*,int,int,int const,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5 = FUNC_0(&VAR_4->avg_lum);
 int VAR_6;
 const int VAR_7 = 30;

 if (VAR_5 == -1)
  return;

 VAR_6 = 270 + VAR_4->brightness;

 if (VAR_4->autogain_ignore_frames > 0)
  VAR_4->autogain_ignore_frames--;
 else if (FUNC_1(VAR_3, VAR_5, VAR_6,
   VAR_7, VAR_1, VAR_0))
  VAR_4->autogain_ignore_frames = VAR_2;
}
