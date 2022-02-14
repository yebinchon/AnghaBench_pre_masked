
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int index; int pixelformat; int description; int flags; int type; } ;
struct camera_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_fmtdesc*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_5,struct camera_data *VAR_6)
{
 struct v4l2_fmtdesc *VAR_7 = VAR_5;
 int VAR_8 = VAR_7->index;

 if (VAR_8 < 0 || VAR_8 > 1)
        return -VAR_0;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->index = VAR_8;
 VAR_7->type = VAR_1;
 VAR_7->flags = VAR_2;
 switch(VAR_8) {
 case 0:
  FUNC_1(VAR_7->description, "MJPEG");
  VAR_7->pixelformat = VAR_4;
  break;
 case 1:
  FUNC_1(VAR_7->description, "JPEG");
  VAR_7->pixelformat = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
