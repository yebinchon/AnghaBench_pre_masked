
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double nb_frames; double motion_sum; int temp_data; int * blur_data; } ;
typedef TYPE_1__ VMAFMotionData ;


 int FUNC_0 (int ) ;

double FUNC_1(VMAFMotionData *VAR_0)
{
    FUNC_0(VAR_0->blur_data[0]);
    FUNC_0(VAR_0->blur_data[1]);
    FUNC_0(VAR_0->temp_data);

    return VAR_0->nb_frames > 0 ? VAR_0->motion_sum / VAR_0->nb_frames : 0.0;
}
