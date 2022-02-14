
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {TYPE_3__* pb; TYPE_1__* priv_data; } ;
struct TYPE_15__ {int error; } ;
struct TYPE_14__ {int stream_index; int flags; } ;
struct TYPE_13__ {int audio_size; int is_audio; scalar_t__ is_first_video; int pal; } ;
typedef TYPE_1__ GDVContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int) ;
 int * FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    GDVContext *VAR_8 = VAR_6->priv_data;
    AVIOContext *VAR_9 = VAR_6->pb;
    int VAR_10;

    if (FUNC_4(VAR_9))
        return VAR_9->error ? VAR_9->error : VAR_0;

    if (VAR_8->audio_size && VAR_8->is_audio) {
        VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_8->audio_size);
        if (VAR_10 < 0)
            return VAR_10;
        VAR_7->stream_index = 1;
        VAR_8->is_audio = 0;
    } else {
        uint8_t *VAR_11;

        if (FUNC_5(VAR_9) != 0x1305)
            return VAR_1;
        VAR_10 = FUNC_1(VAR_9, VAR_7, 4 + FUNC_5(VAR_9));
        if (VAR_10 < 0)
            return VAR_10;
        VAR_7->stream_index = 0;
        VAR_8->is_audio = 1;

        if (VAR_8->is_first_video) {
            VAR_11 = FUNC_2(VAR_7, VAR_3,
                                          VAR_2);
            if (!VAR_11) {
                FUNC_3(VAR_7);
                return FUNC_0(VAR_5);
            }
            FUNC_6(VAR_11, VAR_8->pal, VAR_2);
            VAR_7->flags |= VAR_4;
            VAR_8->is_first_video = 0;
        }
    }

    return 0;
}
