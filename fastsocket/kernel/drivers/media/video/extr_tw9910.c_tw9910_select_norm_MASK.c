
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef scalar_t__ u32 ;
struct tw9910_scale_ctrl {scalar_t__ height; scalar_t__ width; } ;
struct soc_camera_device {TYPE_1__* vdev; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int current_norm; } ;


 int FUNC_0 (struct tw9910_scale_ctrl*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct tw9910_scale_ctrl* VAR_2 ;
 struct tw9910_scale_ctrl* VAR_3 ;

__attribute__((used)) static const struct tw9910_scale_ctrl*
FUNC_2(struct soc_camera_device *VAR_4, u32 VAR_5, u32 VAR_6)
{
 const struct tw9910_scale_ctrl *VAR_7;
 const struct tw9910_scale_ctrl *VAR_8 = ((void*)0);
 v4l2_std_id VAR_9 = VAR_4->vdev->current_norm;
 __u32 VAR_10 = 0xffffffff, VAR_11;
 int VAR_12, VAR_13;

 if (VAR_9 & VAR_0) {
  VAR_7 = VAR_2;
  VAR_12 = FUNC_0(VAR_2);
 } else if (VAR_9 & VAR_1) {
  VAR_7 = VAR_3;
  VAR_12 = FUNC_0(VAR_3);
 } else {
  return ((void*)0);
 }

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_11 = FUNC_1(VAR_5 - VAR_7[VAR_13].width) +
   FUNC_1(VAR_6 - VAR_7[VAR_13].height);
  if (VAR_11 < VAR_10) {
   VAR_10 = VAR_11;
   VAR_8 = VAR_7 + VAR_13;
  }
 }

 return VAR_8;
}
