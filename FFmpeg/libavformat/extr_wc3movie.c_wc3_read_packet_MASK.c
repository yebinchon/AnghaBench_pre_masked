
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int text ;
struct TYPE_10__ {int pts; int stream_index; int size; int * data; } ;
struct TYPE_9__ {int pts; int audio_stream_index; int video_stream_index; TYPE_2__ vpkt; } ;
typedef TYPE_1__ Wc3DemuxContext ;
struct TYPE_11__ {int * pb; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;



 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (int *,TYPE_2__*,int) ;
 unsigned char* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,TYPE_2__*,unsigned int) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 unsigned int FUNC_5 (unsigned char*,unsigned int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned char*,unsigned int) ;
 unsigned int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_5,
                           AVPacket *VAR_6)
{
    Wc3DemuxContext *VAR_7 = VAR_5->priv_data;
    AVIOContext *VAR_8 = VAR_5->pb;
    unsigned int VAR_9;
    unsigned int VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;
    unsigned char VAR_13[1024];

    while (!VAR_11) {

        VAR_9 = FUNC_9(VAR_8);

        VAR_10 = (FUNC_7(VAR_8) + 1) & (~1);
        if (FUNC_6(VAR_8))
            return FUNC_0(VAR_3);

        switch (VAR_9) {

        case 131:

            break;

        case 130:

            FUNC_10(VAR_8, -8, VAR_4);
            FUNC_1(VAR_8, &VAR_7->vpkt, 8 + 4);
            break;

        case 128:

            FUNC_10(VAR_8, -8, VAR_4);
            VAR_12= FUNC_1(VAR_8, &VAR_7->vpkt, 8 + VAR_10);

            if (VAR_7->vpkt.size > 0)
                VAR_12 = 0;
            *VAR_6 = VAR_7->vpkt;
            VAR_7->vpkt.data = ((void*)0); VAR_7->vpkt.size = 0;
            VAR_6->stream_index = VAR_7->video_stream_index;
            VAR_6->pts = VAR_7->pts;
            VAR_11 = 1;
            break;

        case 129:

            if ((unsigned)VAR_10 > sizeof(VAR_13) || (VAR_12 = FUNC_8(VAR_8, VAR_13, VAR_10)) != VAR_10)
                VAR_12 = FUNC_0(VAR_3);
            else {
                int VAR_14 = 0;
                FUNC_4 (VAR_5, VAR_1, "Subtitle time!\n");
                if (VAR_14 >= VAR_10 || FUNC_5(&VAR_13[VAR_14 + 1], VAR_10 - VAR_14 - 1) >= VAR_10 - VAR_14 - 1)
                    return VAR_0;
                FUNC_4 (VAR_5, VAR_1, "  inglish: %s\n", &VAR_13[VAR_14 + 1]);
                VAR_14 += VAR_13[VAR_14] + 1;
                if (VAR_14 >= VAR_10 || FUNC_5(&VAR_13[VAR_14 + 1], VAR_10 - VAR_14 - 1) >= VAR_10 - VAR_14 - 1)
                    return VAR_0;
                FUNC_4 (VAR_5, VAR_1, "  doytsch: %s\n", &VAR_13[VAR_14 + 1]);
                VAR_14 += VAR_13[VAR_14] + 1;
                if (VAR_14 >= VAR_10 || FUNC_5(&VAR_13[VAR_14 + 1], VAR_10 - VAR_14 - 1) >= VAR_10 - VAR_14 - 1)
                    return VAR_0;
                FUNC_4 (VAR_5, VAR_1, "  fronsay: %s\n", &VAR_13[VAR_14 + 1]);
            }
            break;

        case 132:

            VAR_12= FUNC_3(VAR_8, VAR_6, VAR_10);
            VAR_6->stream_index = VAR_7->audio_stream_index;
            VAR_6->pts = VAR_7->pts;


            VAR_7->pts++;

            VAR_11 = 1;
            break;

        default:
            FUNC_4(VAR_5, VAR_2, "unrecognized WC3 chunk: %s\n",
                   FUNC_2(VAR_9));
            VAR_12 = VAR_0;
            VAR_11 = 1;
            break;
        }
    }

    return VAR_12;
}
