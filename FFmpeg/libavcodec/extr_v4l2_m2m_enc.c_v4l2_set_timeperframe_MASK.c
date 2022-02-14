
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {unsigned int denominator; unsigned int numerator; } ;
struct TYPE_9__ {TYPE_4__ timeperframe; } ;
struct TYPE_8__ {TYPE_3__ output; } ;
struct v4l2_streamparm {TYPE_2__ parm; int type; int member_0; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_11__ {int avctx; int fd; TYPE_1__ output; } ;
typedef TYPE_5__ V4L2m2mContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,struct v4l2_streamparm*) ;

__attribute__((used)) static inline void FUNC_3(V4L2m2mContext *VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
    struct v4l2_streamparm VAR_7 = { 0 };

    VAR_7.type = FUNC_0(VAR_4->output.type) ? VAR_2 : VAR_1;
    VAR_7.parm.output.timeperframe.denominator = VAR_6;
    VAR_7.parm.output.timeperframe.numerator = VAR_5;

    if (FUNC_2(VAR_4->fd, VAR_3, &VAR_7) < 0)
        FUNC_1(VAR_4->avctx, VAR_0, "Failed to set timeperframe");
}
