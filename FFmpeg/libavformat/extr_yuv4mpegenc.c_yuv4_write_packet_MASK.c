
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_14__ {int* priv_data; int * pb; TYPE_2__** streams; } ;
struct TYPE_13__ {char** data; int * linesize; } ;
struct TYPE_12__ {size_t stream_index; scalar_t__ data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int width; int height; int format; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (int const,int*,int*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,char*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    AVStream *VAR_7 = VAR_5->streams[VAR_6->stream_index];
    AVIOContext *VAR_8 = VAR_5->pb;
    AVFrame *VAR_9;
    int* VAR_10 = VAR_5->priv_data;
    int VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15;
    char VAR_16[VAR_4 + 1];
    uint8_t *VAR_17, *VAR_18, *VAR_19;

    VAR_9 = (AVFrame *)VAR_6->data;


    if (*VAR_10) {
        *VAR_10 = 0;
        if (FUNC_8(VAR_5, VAR_16) < 0) {
            FUNC_3(VAR_5, VAR_0,
                   "Error. YUV4MPEG stream header write failed.\n");
            return FUNC_0(VAR_2);
        } else {
            FUNC_6(VAR_8, VAR_16, FUNC_7(VAR_16));
        }
    }



    FUNC_5(VAR_5->pb, "%s\n", VAR_3);

    VAR_11 = VAR_7->codecpar->width;
    VAR_12 = VAR_7->codecpar->height;

    VAR_17 = VAR_9->data[0];

    switch (VAR_7->codecpar->format) {
    case 151:
    case 149:
    case 148:
    case 142:
    case 136:

    case 130:
    case 129:
    case 128:
        break;
    case 150:
    case 154:
    case 153:
    case 152:
    case 143:
    case 137:
    case 131:
    case 147:
    case 141:
    case 135:
    case 146:
    case 140:
    case 134:
    case 145:
    case 139:
    case 133:
    case 144:
    case 138:
    case 132:
        VAR_11 *= 2;
        break;
    default:
        FUNC_3(VAR_5, VAR_0, "The pixel format '%s' is not supported.\n",
               FUNC_2(VAR_7->codecpar->format));
        return FUNC_0(VAR_1);
    }

    for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
        FUNC_6(VAR_8, VAR_17, VAR_11);
        VAR_17 += VAR_9->linesize[0];
    }

    if (VAR_7->codecpar->format != 151 && VAR_7->codecpar->format != 150 &&
        VAR_7->codecpar->format != 154 && VAR_7->codecpar->format != 153 &&
        VAR_7->codecpar->format != 152) {

        FUNC_4(VAR_7->codecpar->format, &VAR_13,
                                         &VAR_14);

        VAR_11 = FUNC_1(VAR_11, VAR_13);
        VAR_12 = FUNC_1(VAR_12, VAR_14);

        VAR_18 = VAR_9->data[1];
        VAR_19 = VAR_9->data[2];
        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
            FUNC_6(VAR_8, VAR_18, VAR_11);
            VAR_18 += VAR_9->linesize[1];
        }
        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
            FUNC_6(VAR_8, VAR_19, VAR_11);
            VAR_19 += VAR_9->linesize[2];
        }
    }

    return 0;
}
