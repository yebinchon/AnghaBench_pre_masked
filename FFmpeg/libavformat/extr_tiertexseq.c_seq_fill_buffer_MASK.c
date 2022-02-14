
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fill_size; scalar_t__ data_size; scalar_t__ data; } ;
typedef TYPE_1__ TiertexSeqFrameBuffer ;
struct TYPE_5__ {scalar_t__ current_frame_offs; TYPE_1__* frame_buffers; } ;
typedef TYPE_2__ SeqDemuxContext ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(SeqDemuxContext *VAR_4, AVIOContext *VAR_5, int VAR_6, unsigned int VAR_7, int VAR_8)
{
    TiertexSeqFrameBuffer *VAR_9;

    if (VAR_6 >= VAR_3)
        return VAR_0;

    VAR_9 = &VAR_4->frame_buffers[VAR_6];
    if (VAR_9->fill_size + VAR_8 > VAR_9->data_size || VAR_8 <= 0)
        return VAR_0;

    FUNC_2(VAR_5, VAR_4->current_frame_offs + VAR_7, VAR_2);
    if (FUNC_1(VAR_5, VAR_9->data + VAR_9->fill_size, VAR_8) != VAR_8)
        return FUNC_0(VAR_1);

    VAR_9->fill_size += VAR_8;
    return 0;
}
