
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_fmtdesc {int index; int pixelformat; int type; } ;
typedef int fdesc ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {int av_pix_fmt; int type; } ;
typedef TYPE_1__ V4L2Context ;
struct TYPE_7__ {int fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,struct v4l2_fmtdesc*) ;
 int FUNC_4 (struct v4l2_fmtdesc*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(V4L2Context* VAR_4, enum AVPixelFormat *VAR_5)
{
    enum AVPixelFormat VAR_6 = VAR_4->av_pix_fmt;
    struct v4l2_fmtdesc VAR_7;
    int VAR_8;

    FUNC_4(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.type = VAR_4->type;

    if (VAR_6 != VAR_1) {
        VAR_8 = FUNC_5(VAR_4, VAR_6);
        if (!VAR_8)
            return 0;
    }

    for (;;) {
        VAR_8 = FUNC_3(FUNC_1(VAR_4)->fd, VAR_3, &VAR_7);
        if (VAR_8)
            return FUNC_0(VAR_2);

        VAR_6 = FUNC_2(VAR_7.pixelformat, VAR_0);
        VAR_8 = FUNC_5(VAR_4, VAR_6);
        if (VAR_8){
            VAR_7.index++;
            continue;
        }

        *VAR_5 = VAR_6;

        return 0;
    }

    return FUNC_0(VAR_2);
}
