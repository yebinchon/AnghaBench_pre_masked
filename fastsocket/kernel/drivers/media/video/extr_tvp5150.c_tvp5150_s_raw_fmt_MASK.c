
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_vbi_format {scalar_t__ sample_format; int* count; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4, struct v4l2_vbi_format *VAR_5)
{





 if (VAR_5->sample_format == VAR_3)
  FUNC_0(VAR_4, VAR_0, 0x70);
 if (VAR_5->count[0] == 18 && VAR_5->count[1] == 18) {
  FUNC_0(VAR_4, VAR_1, 0x00);
  FUNC_0(VAR_4, VAR_2, 0x01);
 }
 return 0;
}
