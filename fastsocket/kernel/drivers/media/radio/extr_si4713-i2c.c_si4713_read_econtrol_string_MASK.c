
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ext_control {int id; int string; int size; } ;
struct TYPE_2__ {int radio_text; int ps_name; } ;
struct si4713_device {TYPE_1__ rds_info; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct si4713_device *VAR_4,
    struct v4l2_ext_control *VAR_5)
{
 s32 VAR_6 = 0;

 switch (VAR_5->id) {
 case 129:
  if (FUNC_1(VAR_4->rds_info.ps_name) + 1 > VAR_5->size) {
   VAR_5->size = VAR_2 + 1;
   VAR_6 = -VAR_1;
   goto exit;
  }
  VAR_6 = FUNC_0(VAR_5->string, VAR_4->rds_info.ps_name,
     FUNC_1(VAR_4->rds_info.ps_name) + 1);
  break;

 case 128:
  if (FUNC_1(VAR_4->rds_info.radio_text) + 1 > VAR_5->size) {
   VAR_5->size = VAR_3 + 1;
   VAR_6 = -VAR_1;
   goto exit;
  }
  VAR_6 = FUNC_0(VAR_5->string, VAR_4->rds_info.radio_text,
     FUNC_1(VAR_4->rds_info.radio_text) + 1);
  break;

 default:
  VAR_6 = -VAR_0;
  break;
 };

exit:
 return VAR_6;
}
