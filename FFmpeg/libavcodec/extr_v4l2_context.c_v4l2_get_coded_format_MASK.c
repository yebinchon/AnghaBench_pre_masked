
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct v4l2_fmtdesc {scalar_t__ pixelformat; int index; int type; } ;
typedef int fdesc ;
struct TYPE_5__ {int type; int av_codec_id; } ;
typedef TYPE_1__ V4L2Context ;
struct TYPE_6__ {int fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct v4l2_fmtdesc*) ;
 int FUNC_4 (struct v4l2_fmtdesc*,int ,int) ;

__attribute__((used)) static int FUNC_5(V4L2Context* VAR_2, uint32_t *VAR_3)
{
    struct v4l2_fmtdesc VAR_4;
    uint32_t VAR_5;
    int VAR_6;


    VAR_5 = FUNC_2(VAR_2->av_codec_id);
    if (!VAR_5)
        return FUNC_0(VAR_0);


    FUNC_4(&VAR_4, 0, sizeof(VAR_4));
    VAR_4.type = VAR_2->type;

    for (;;) {
        VAR_6 = FUNC_3(FUNC_1(VAR_2)->fd, VAR_1, &VAR_4);
        if (VAR_6)
            return FUNC_0(VAR_0);

        if (VAR_4.pixelformat == VAR_5)
            break;

        VAR_4.index++;
    }

    *VAR_3 = VAR_5;

    return 0;
}
