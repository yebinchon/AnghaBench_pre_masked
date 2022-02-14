
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv_data; int * pb; } ;
struct TYPE_7__ {scalar_t__ pts; int size; int data; } ;
struct TYPE_6__ {scalar_t__ last_pts; scalar_t__ frame_cnt; int sum_delta_pts; } ;
typedef TYPE_1__ IVFEncContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    AVIOContext *VAR_2 = VAR_0->pb;
    IVFEncContext *VAR_3 = VAR_0->priv_data;

    FUNC_0(VAR_2, VAR_1->size);
    FUNC_1(VAR_2, VAR_1->pts);
    FUNC_2(VAR_2, VAR_1->data, VAR_1->size);
    if (VAR_3->frame_cnt)
        VAR_3->sum_delta_pts += VAR_1->pts - VAR_3->last_pts;
    VAR_3->frame_cnt++;
    VAR_3->last_pts = VAR_1->pts;

    return 0;
}
