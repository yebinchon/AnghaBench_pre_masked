
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int key_frame; int metadata; } ;
struct TYPE_10__ {int frame_packing; } ;
struct TYPE_12__ {TYPE_1__ sei; } ;
struct TYPE_11__ {scalar_t__ sei_recovery_frame_cnt; TYPE_4__* f; } ;
typedef TYPE_2__ H264Picture ;
typedef TYPE_3__ H264Context ;
typedef TYPE_4__ AVFrame ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(H264Context *VAR_0, AVFrame *VAR_1, H264Picture *VAR_2)
{
    AVFrame *VAR_3 = VAR_2->f;
    int VAR_4;

    VAR_4 = FUNC_1(VAR_1, VAR_3);
    if (VAR_4 < 0)
        return VAR_4;

    FUNC_0(&VAR_1->metadata, "stereo_mode", FUNC_2(&VAR_0->sei.frame_packing), 0);

    if (VAR_2->sei_recovery_frame_cnt == 0)
        VAR_1->key_frame = 1;

    return 0;
}
