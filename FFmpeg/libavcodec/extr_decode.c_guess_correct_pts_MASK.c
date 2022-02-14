
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ pts_correction_num_faulty_dts; scalar_t__ pts_correction_last_dts; scalar_t__ pts_correction_num_faulty_pts; scalar_t__ pts_correction_last_pts; } ;
typedef TYPE_1__ AVCodecContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int64_t FUNC_0(AVCodecContext *VAR_1,
                                 int64_t VAR_2, int64_t VAR_3)
{
    int64_t VAR_4 = VAR_0;

    if (VAR_3 != VAR_0) {
        VAR_1->pts_correction_num_faulty_dts += VAR_3 <= VAR_1->pts_correction_last_dts;
        VAR_1->pts_correction_last_dts = VAR_3;
    } else if (VAR_2 != VAR_0)
        VAR_1->pts_correction_last_dts = VAR_2;

    if (VAR_2 != VAR_0) {
        VAR_1->pts_correction_num_faulty_pts += VAR_2 <= VAR_1->pts_correction_last_pts;
        VAR_1->pts_correction_last_pts = VAR_2;
    } else if(VAR_3 != VAR_0)
        VAR_1->pts_correction_last_pts = VAR_3;

    if ((VAR_1->pts_correction_num_faulty_pts<=VAR_1->pts_correction_num_faulty_dts || VAR_3 == VAR_0)
       && VAR_2 != VAR_0)
        VAR_4 = VAR_2;
    else
        VAR_4 = VAR_3;

    return VAR_4;
}
