
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* internal; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int stream_index; int pos; } ;
struct TYPE_9__ {int img_segment_size; int full_segment_size; } ;
struct TYPE_8__ {int data_offset; } ;
typedef TYPE_2__ MTVDemuxContext ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    MTVDemuxContext *VAR_4 = VAR_2->priv_data;
    AVIOContext *VAR_5 = VAR_2->pb;
    int VAR_6;

    if((FUNC_2(VAR_5) - VAR_2->internal->data_offset + VAR_4->img_segment_size) % VAR_4->full_segment_size)
    {
        FUNC_1(VAR_5, VAR_1);

        VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_0);
        if(VAR_6 < 0)
            return VAR_6;

        VAR_3->pos -= VAR_1;
        VAR_3->stream_index = 1;

    }else
    {
        VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4->img_segment_size);
        if(VAR_6 < 0)
            return VAR_6;

        VAR_3->stream_index = 0;
    }

    return VAR_6;
}
