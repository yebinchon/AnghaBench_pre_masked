
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_format_update {int update_avfmt; int update_v4l2; int v4l2_fmt; int av_fmt; int member_0; } ;
struct TYPE_8__ {scalar_t__ av_codec_id; int format; } ;
typedef TYPE_1__ V4L2Context ;
struct TYPE_9__ {int fd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,struct v4l2_format_update*) ;

int FUNC_5(V4L2Context* VAR_2, int VAR_3)
{
    struct v4l2_format_update VAR_4 = { 0 };
    int VAR_5;

    if (VAR_2->av_codec_id == VAR_0) {
        VAR_5 = FUNC_3(VAR_2, &VAR_4.av_fmt);
        if (VAR_5)
            return VAR_5;

        VAR_4.update_avfmt = !VAR_3;
        FUNC_4(VAR_2, &VAR_4);


        return VAR_5;
    }

    VAR_5 = FUNC_2(VAR_2, &VAR_4.v4l2_fmt);
    if (VAR_5)
        return VAR_5;

    VAR_4.update_v4l2 = 1;
    FUNC_4(VAR_2, &VAR_4);

    return FUNC_1(FUNC_0(VAR_2)->fd, VAR_1, &VAR_2->format);
}
