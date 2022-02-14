
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct v4l2_ext_controls {int count; struct v4l2_ext_control* controls; int ctrl_class; TYPE_1__ member_0; } ;
struct v4l2_ext_control {int value; unsigned int id; int member_0; } ;
struct TYPE_5__ {int avctx; int fd; } ;
typedef TYPE_2__ V4L2m2mContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,char const*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,struct v4l2_ext_controls*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(V4L2m2mContext *VAR_5, unsigned int VAR_6, signed int VAR_7, const char *VAR_8)
{
    struct v4l2_ext_controls VAR_9 = { 0 };
    struct v4l2_ext_control VAR_10 = { 0 };


    VAR_9.ctrl_class = VAR_2;
    VAR_9.controls = &VAR_10;
    VAR_9.count = 1;


    VAR_10.value = VAR_7;
    VAR_10.id = VAR_6;

    if (FUNC_1(VAR_5->fd, VAR_3, &VAR_9) < 0)
        FUNC_0(VAR_5->avctx, VAR_1, "Failed to set %s: %s\n", VAR_8, FUNC_2(VAR_4));
    else
        FUNC_0(VAR_5->avctx, VAR_0, "Encoder: %s = %d\n", VAR_8, VAR_7);
}
