
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fill_size; int data; } ;
typedef TYPE_1__ TiertexSeqFrameBuffer ;
struct TYPE_6__ {int current_audio_data_size; int current_pal_data_size; int current_video_data_ptr; scalar_t__ current_video_data_size; TYPE_1__* frame_buffers; void* current_pal_data_offs; void* current_audio_data_offs; int current_frame_offs; } ;
typedef TYPE_2__ SeqDemuxContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(SeqDemuxContext *VAR_5, AVIOContext *VAR_6)
{
    unsigned int VAR_7[4], VAR_8[4];
    TiertexSeqFrameBuffer *VAR_9;
    int VAR_10, VAR_11, VAR_12;

    VAR_5->current_frame_offs += VAR_3;
    FUNC_2(VAR_6, VAR_5->current_frame_offs, VAR_1);


    VAR_5->current_audio_data_offs = FUNC_1(VAR_6);
    if (VAR_5->current_audio_data_offs) {
        VAR_5->current_audio_data_size = VAR_2 * 2;
    } else {
        VAR_5->current_audio_data_size = 0;
    }


    VAR_5->current_pal_data_offs = FUNC_1(VAR_6);
    if (VAR_5->current_pal_data_offs) {
        VAR_5->current_pal_data_size = 768;
    } else {
        VAR_5->current_pal_data_size = 0;
    }


    for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
        VAR_8[VAR_10] = FUNC_0(VAR_6);

    for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
        VAR_7[VAR_10] = FUNC_1(VAR_6);

    for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
        if (VAR_7[VAR_10]) {
            for (VAR_11 = VAR_10 + 1; VAR_11 < 3 && VAR_7[VAR_11] == 0; VAR_11++);
            VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_8[1 + VAR_10],
              VAR_7[VAR_10],
              VAR_7[VAR_11] - VAR_7[VAR_10]);
            if (VAR_12)
                return VAR_12;
        }
    }

    if (VAR_8[0] != 255) {
        if (VAR_8[0] >= VAR_4)
            return VAR_0;

        VAR_9 = &VAR_5->frame_buffers[VAR_8[0]];
        VAR_5->current_video_data_size = VAR_9->fill_size;
        VAR_5->current_video_data_ptr = VAR_9->data;
        VAR_9->fill_size = 0;
    } else {
        VAR_5->current_video_data_size = 0;
        VAR_5->current_video_data_ptr = 0;
    }

    return 0;
}
