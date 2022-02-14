
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int data; int size; int stream_index; int pts; } ;
struct TYPE_9__ {int audio_pts; int video_pts; } ;
typedef TYPE_1__ MmDemuxContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_2__*,unsigned int) ;
 int FUNC_3 (TYPE_3__*,int ,char*,unsigned int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 unsigned int FUNC_5 (int *,...) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4,
                           AVPacket *VAR_5)
{
    MmDemuxContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    unsigned char VAR_8[VAR_3];
    unsigned int VAR_9, VAR_10;

    while(1) {

        if (FUNC_5(VAR_7, VAR_8, VAR_3) != VAR_3) {
            return FUNC_0(VAR_1);
        }

        VAR_9 = FUNC_1(&VAR_8[0]);
        VAR_10 = FUNC_1(&VAR_8[2]);

        switch(VAR_9) {
        case 128 :
        case 134 :
        case 131 :
        case 130 :
        case 133 :
        case 129 :
        case 132 :

            if (FUNC_4(VAR_5, VAR_10 + VAR_3))
                return FUNC_0(VAR_2);
            FUNC_7(VAR_5->data, VAR_8, VAR_3);
            if (FUNC_5(VAR_7, VAR_5->data + VAR_3, VAR_10) != VAR_10)
                return FUNC_0(VAR_1);
            VAR_5->size = VAR_10 + VAR_3;
            VAR_5->stream_index = 0;
            VAR_5->pts = VAR_6->video_pts;
            if (VAR_9!=128)
                VAR_6->video_pts++;
            return 0;

        case 135 :
            if (FUNC_2(VAR_4->pb, VAR_5, VAR_10)<0)
                return FUNC_0(VAR_2);
            VAR_5->stream_index = 1;
            VAR_5->pts = VAR_6->audio_pts++;
            return 0;

        default :
            FUNC_3(VAR_4, VAR_0, "unknown chunk type 0x%x\n", VAR_9);
            FUNC_6(VAR_7, VAR_10);
        }
    }
}
