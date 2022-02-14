
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_requestbuffers {int count; int type; int memory; } ;
struct V4L2Plane_info {scalar_t__ length; scalar_t__ mm_addr; } ;
struct TYPE_7__ {int num_buffers; int name; TYPE_2__* buffers; int type; } ;
typedef TYPE_1__ V4L2Context ;
struct TYPE_8__ {int num_planes; struct V4L2Plane_info* plane_info; } ;
typedef TYPE_2__ V4L2Buffer ;
struct TYPE_9__ {int fd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int ,int ) ;
 TYPE_5__* FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,struct v4l2_requestbuffers*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(V4L2Context* VAR_4)
{
    struct v4l2_requestbuffers VAR_5 = {
        .memory = VAR_1,
        .type = VAR_4->type,
        .count = 0,
    };
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_4->num_buffers; VAR_6++) {
        V4L2Buffer *VAR_8 = &VAR_4->buffers[VAR_6];

        for (VAR_7 = 0; VAR_7 < VAR_8->num_planes; VAR_7++) {
            struct V4L2Plane_info *VAR_9 = &VAR_8->plane_info[VAR_7];
            if (VAR_9->mm_addr && VAR_9->length)
                if (FUNC_6(VAR_9->mm_addr, VAR_9->length) < 0)
                    FUNC_2(FUNC_5(VAR_4), VAR_0, "%s unmap plane (%s))\n", VAR_4->name, FUNC_1(FUNC_0(VAR_3)));
        }
    }

    return FUNC_4(FUNC_3(VAR_4)->fd, VAR_2, &VAR_5);
}
