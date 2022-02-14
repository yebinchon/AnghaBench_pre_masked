
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int work_struct; int work_thread; int cap_mode; } ;
struct TYPE_2__ {int cam_mode; } ;
struct gspca_dev {int width; TYPE_1__ cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct gspca_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;
 int VAR_8;

 VAR_7->cap_mode = VAR_6->cam.cam_mode;

 switch (VAR_6->width) {
 case 640:
  FUNC_0(VAR_1, "Start streaming at high resolution");
  VAR_7->cap_mode++;
  VAR_8 = FUNC_3(VAR_6, VAR_3,
      VAR_4);
  break;
 default:
 FUNC_0(VAR_1, "Start streaming at medium resolution");
  VAR_8 = FUNC_3(VAR_6, VAR_5,
      VAR_4);
 }

 if (VAR_8 < 0) {
  FUNC_0(VAR_0, "Start streaming command failed");
  return VAR_8;
 }

 VAR_7->work_thread = FUNC_1(VAR_2);
 FUNC_2(VAR_7->work_thread, &VAR_7->work_struct);

 return 0;
}
