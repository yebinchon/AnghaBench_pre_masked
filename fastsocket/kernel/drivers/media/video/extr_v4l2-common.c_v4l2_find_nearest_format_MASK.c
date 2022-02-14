
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_frmsize_discrete {scalar_t__ height; scalar_t__ width; } ;
struct v4l2_discrete_probe {int num_sizes; struct v4l2_frmsize_discrete* sizes; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

const struct v4l2_frmsize_discrete *FUNC_1(
  const struct v4l2_discrete_probe *VAR_1,
  s32 VAR_2, s32 VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6 = VAR_0;
 const struct v4l2_frmsize_discrete *VAR_7, *VAR_8 = ((void*)0);

 if (!VAR_1)
  return VAR_8;

 for (VAR_4 = 0, VAR_7 = VAR_1->sizes; VAR_4 < VAR_1->num_sizes; VAR_4++, VAR_7++) {
  VAR_5 = FUNC_0(VAR_7->width - VAR_2) + FUNC_0(VAR_7->height - VAR_3);
  if (VAR_5 < VAR_6) {
   VAR_6 = VAR_5;
   VAR_8 = VAR_7;
  }
  if (!VAR_5)
   break;
 }

 return VAR_8;
}
