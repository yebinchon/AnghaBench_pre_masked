
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_size; int data; scalar_t__ fill_size; } ;
typedef TYPE_1__ TiertexSeqFrameBuffer ;
struct TYPE_5__ {int frame_buffers_count; TYPE_1__* frame_buffers; } ;
typedef TYPE_2__ SeqDemuxContext ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static int FUNC_4(SeqDemuxContext *VAR_3, AVIOContext *VAR_4)
{
    int VAR_5, VAR_6;
    TiertexSeqFrameBuffer *VAR_7;

    FUNC_3(VAR_4, 256, VAR_1);

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        VAR_6 = FUNC_2(VAR_4);
        if (VAR_6 == 0)
            break;
        else {
            VAR_7 = &VAR_3->frame_buffers[VAR_5];
            VAR_7->fill_size = 0;
            VAR_7->data_size = VAR_6;
            VAR_7->data = FUNC_1(VAR_6);
            if (!VAR_7->data)
                return FUNC_0(VAR_0);
        }
    }
    VAR_3->frame_buffers_count = VAR_5;
    return 0;
}
