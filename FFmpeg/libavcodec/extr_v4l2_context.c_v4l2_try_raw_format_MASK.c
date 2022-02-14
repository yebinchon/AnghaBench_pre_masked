
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_8__ {void* pixelformat; } ;
struct TYPE_10__ {void* pixelformat; } ;
struct TYPE_9__ {TYPE_1__ pix; TYPE_3__ pix_mp; } ;
struct v4l2_format {int type; TYPE_2__ fmt; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_11__ {int type; struct v4l2_format format; } ;
typedef TYPE_4__ V4L2Context ;
struct TYPE_12__ {int fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_6__* FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,struct v4l2_format*) ;

__attribute__((used)) static inline int FUNC_5(V4L2Context* VAR_2, enum AVPixelFormat VAR_3)
{
    struct v4l2_format *VAR_4 = &VAR_2->format;
    uint32_t VAR_5;
    int VAR_6;

    VAR_5 = FUNC_3(VAR_3);
    if (!VAR_5)
        return FUNC_0(VAR_0);

    if (FUNC_1(VAR_2->type))
        VAR_4->fmt.pix_mp.pixelformat = VAR_5;
    else
        VAR_4->fmt.pix.pixelformat = VAR_5;

    VAR_4->type = VAR_2->type;

    VAR_6 = FUNC_4(FUNC_2(VAR_2)->fd, VAR_1, VAR_4);
    if (VAR_6)
        return FUNC_0(VAR_0);

    return 0;
}
