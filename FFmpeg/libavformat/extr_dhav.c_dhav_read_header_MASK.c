
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int signature ;
struct TYPE_13__ {scalar_t__ seekable; } ;
struct TYPE_12__ {int ctx_flags; TYPE_3__* pb; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int last_good_pos; int video_stream_index; int audio_stream_index; } ;
typedef TYPE_1__ DHAVContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (char,char,char,char) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int *,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 void* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int *,char*,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_3)
{
    DHAVContext *VAR_4 = VAR_3->priv_data;
    uint8_t VAR_5[5];

    FUNC_7(VAR_3->pb, 5);
    FUNC_1(VAR_3->pb, VAR_5, sizeof(VAR_5));
    if (!FUNC_8(VAR_5, "DAHUA", 5)) {
        FUNC_5(VAR_3->pb, 0x400 - 5);
        VAR_4->last_good_pos = FUNC_6(VAR_3->pb);
    } else {
        if (!FUNC_8(VAR_5, "DHAV", 4)) {
            FUNC_3(VAR_3->pb, -5, VAR_1);
            VAR_4->last_good_pos = FUNC_6(VAR_3->pb);
        } else if (VAR_3->pb->seekable) {
            FUNC_3(VAR_3->pb, FUNC_4(VAR_3->pb) - 8, VAR_2);
            while (FUNC_2(VAR_3->pb) == FUNC_0('d','h','a','v')) {
                int VAR_6;

                VAR_6 = FUNC_2(VAR_3->pb) + 8;
                VAR_4->last_good_pos = FUNC_6(VAR_3->pb);
                if (VAR_4->last_good_pos < VAR_6)
                    break;
                FUNC_3(VAR_3->pb, -VAR_6, VAR_1);
            }
        }
    }

    VAR_3->ctx_flags |= VAR_0;
    VAR_4->video_stream_index = -1;
    VAR_4->audio_stream_index = -1;

    return 0;
}
