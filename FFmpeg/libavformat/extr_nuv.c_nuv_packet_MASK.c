
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint64_t ;
typedef int nuv_frametype ;
struct TYPE_13__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int stream_index; void* pts; void* pos; int flags; int data; } ;
struct TYPE_11__ {int a_id; int v_id; scalar_t__ rtjpg_video; } ;
typedef TYPE_1__ NUVContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int*) ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_2 (void*) ;
 int FUNC_3 (int *,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int*,int) ;
 int FUNC_10 (int *,int) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int ,int*,int) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    NUVContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    uint8_t VAR_8[VAR_3];
    nuv_frametype VAR_9;
    int VAR_10, VAR_11;

    while (!FUNC_8(VAR_7)) {
        int VAR_12 = VAR_6->rtjpg_video ? VAR_3 : 0;
        uint64_t VAR_13 = FUNC_11(VAR_7);

        VAR_10 = FUNC_9(VAR_7, VAR_8, VAR_3);
        if (VAR_10 < VAR_3)
            return VAR_10 < 0 ? VAR_10 : FUNC_0(VAR_2);

        VAR_9 = VAR_8[0];
        VAR_11 = FUNC_2(FUNC_1(&VAR_8[8]));

        switch (VAR_9) {
        case 130:
            if (!VAR_6->rtjpg_video) {
                FUNC_10(VAR_7, VAR_11);
                break;
            }
        case 128:
            if (VAR_6->v_id < 0) {
                FUNC_4(VAR_4, VAR_0, "Video packet in file without video stream!\n");
                FUNC_10(VAR_7, VAR_11);
                break;
            }
            VAR_10 = FUNC_5(VAR_5, VAR_12 + VAR_11);
            if (VAR_10 < 0)
                return VAR_10;

            VAR_5->pos = VAR_13;
            VAR_5->flags |= VAR_8[2] == 0 ? VAR_1 : 0;
            VAR_5->pts = FUNC_1(&VAR_8[4]);
            VAR_5->stream_index = VAR_6->v_id;
            FUNC_12(VAR_5->data, VAR_8, VAR_12);
            VAR_10 = FUNC_9(VAR_7, VAR_5->data + VAR_12, VAR_11);
            if (VAR_10 < 0) {
                FUNC_6(VAR_5);
                return VAR_10;
            }
            if (VAR_10 < VAR_11)
                FUNC_7(VAR_5, VAR_12 + VAR_10);
            return 0;
        case 131:
            if (VAR_6->a_id < 0) {
                FUNC_4(VAR_4, VAR_0, "Audio packet in file without audio stream!\n");
                FUNC_10(VAR_7, VAR_11);
                break;
            }
            VAR_10 = FUNC_3(VAR_7, VAR_5, VAR_11);
            VAR_5->flags |= VAR_1;
            VAR_5->pos = VAR_13;
            VAR_5->pts = FUNC_1(&VAR_8[4]);
            VAR_5->stream_index = VAR_6->a_id;
            if (VAR_10 < 0)
                return VAR_10;
            return 0;
        case 129:

            break;
        default:
            FUNC_10(VAR_7, VAR_11);
            break;
        }
    }

    return FUNC_0(VAR_2);
}
