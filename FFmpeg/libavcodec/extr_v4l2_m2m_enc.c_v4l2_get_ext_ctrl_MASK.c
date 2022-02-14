
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct v4l2_ext_controls {int count; struct v4l2_ext_control* controls; int ctrl_class; TYPE_1__ member_0; } ;
struct v4l2_ext_control {unsigned int id; int value; int member_0; } ;
struct TYPE_5__ {int avctx; int fd; } ;
typedef TYPE_2__ V4L2m2mContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,char const*) ;
 int FUNC_1 (int ,int ,struct v4l2_ext_controls*) ;

__attribute__((used)) static inline int FUNC_2(V4L2m2mContext *VAR_3, unsigned int VAR_4, signed int *VAR_5, const char *VAR_6)
{
    struct v4l2_ext_controls VAR_7 = { 0 };
    struct v4l2_ext_control VAR_8 = { 0 };
    int VAR_9;


    VAR_7.ctrl_class = VAR_1;
    VAR_7.controls = &VAR_8;
    VAR_7.count = 1;


    VAR_8.id = VAR_4 ;

    VAR_9 = FUNC_1(VAR_3->fd, VAR_2, &VAR_7);
    if (VAR_9 < 0) {
        FUNC_0(VAR_3->avctx, VAR_0, "Failed to set %s\n", VAR_6);
        return VAR_9;
    }

    *VAR_5 = VAR_8.value;

    return 0;
}
