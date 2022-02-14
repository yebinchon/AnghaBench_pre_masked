
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ autogain_ignore_frames; int avg_lum; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gspca_dev*,int,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_4;
 int VAR_6 = FUNC_0(&VAR_5->avg_lum);

 if (VAR_6 == -1)
  return;

 if (VAR_5->autogain_ignore_frames > 0)
  VAR_5->autogain_ignore_frames--;
 else if (FUNC_1(VAR_4, VAR_6,
   100, VAR_0,
   VAR_2, VAR_1))
  VAR_5->autogain_ignore_frames = VAR_3;
}
