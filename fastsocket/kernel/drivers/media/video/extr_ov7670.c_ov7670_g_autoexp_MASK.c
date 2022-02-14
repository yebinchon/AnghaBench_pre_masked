
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
typedef enum v4l2_exposure_auto_type { ____Placeholder_v4l2_exposure_auto_type } v4l2_exposure_auto_type ;
typedef int __s32 ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4, __s32 *VAR_5)
{
 int VAR_6;
 unsigned char VAR_7;
 enum v4l2_exposure_auto_type *VAR_8 = (enum v4l2_exposure_auto_type *) VAR_5;

 VAR_6 = FUNC_0(VAR_4, VAR_1, &VAR_7);
 if (VAR_7 & VAR_0)
  *VAR_8 = VAR_2;
 else
  *VAR_8 = VAR_3;
 return VAR_6;
}
