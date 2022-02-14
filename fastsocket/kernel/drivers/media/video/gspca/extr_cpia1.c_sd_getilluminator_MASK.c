
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int toplight; int bottomlight; int qx3_detected; } ;
struct TYPE_4__ {TYPE_1__ qx3; } ;
struct sd {TYPE_2__ params; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_1, __s32 *VAR_2, int VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_1;

 if (!VAR_4->params.qx3.qx3_detected)
  return -VAR_0;

 switch (VAR_3) {
 case 1:
  *VAR_2 = VAR_4->params.qx3.bottomlight;
  break;
 case 2:
  *VAR_2 = VAR_4->params.qx3.toplight;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
