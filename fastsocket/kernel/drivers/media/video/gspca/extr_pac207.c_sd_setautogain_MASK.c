
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int autogain_ignore_frames; int gain; int exposure; scalar_t__ autogain; } ;
struct gspca_dev {scalar_t__ streaming; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_3, __s32 VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;

 VAR_5->autogain = VAR_4;




 if (VAR_5->autogain) {
  VAR_5->exposure = VAR_0;
  VAR_5->gain = VAR_1;
  if (VAR_3->streaming) {
   VAR_5->autogain_ignore_frames =
    VAR_2;
   FUNC_0(VAR_3);
   FUNC_1(VAR_3);
  }
 }

 return 0;
}
