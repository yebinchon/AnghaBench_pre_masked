
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int* priv_data; int nb_streams; TYPE_2__** streams; int strict_std_compliance; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {scalar_t__ codec_id; int format; } ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_7)
{
    int *VAR_8 = VAR_7->priv_data;

    if (VAR_7->nb_streams != 1)
        return FUNC_0(VAR_5);

    if (VAR_7->streams[0]->codecpar->codec_id != VAR_1) {
        FUNC_2(VAR_7, VAR_2, "ERROR: Codec not supported.\n");
        return VAR_0;
    }

    switch (VAR_7->streams[0]->codecpar->format) {
    case 149:
        FUNC_2(VAR_7, VAR_3, "Warning: generating rarely used 4:1:1 YUV "
               "stream, some mjpegtools might not work.\n");
        break;
    case 151:
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
        if (VAR_7->strict_std_compliance >= VAR_6) {
            FUNC_2(VAR_7, VAR_2, "'%s' is not an official yuv4mpegpipe pixel format. "
                   "Use '-strict -1' to encode to this pixel format.\n",
                   FUNC_1(VAR_7->streams[0]->codecpar->format));
            return FUNC_0(VAR_4);
        }
        FUNC_2(VAR_7, VAR_3, "Warning: generating non standard YUV stream. "
               "Mjpegtools will not work.\n");
        break;
    default:
        FUNC_2(VAR_7, VAR_2, "ERROR: yuv4mpeg can only handle "
               "yuv444p, yuv422p, yuv420p, yuv411p and gray8 pixel formats. "
               "And using 'strict -1' also yuv444p9, yuv422p9, yuv420p9, "
               "yuv444p10, yuv422p10, yuv420p10, "
               "yuv444p12, yuv422p12, yuv420p12, "
               "yuv444p14, yuv422p14, yuv420p14, "
               "yuv444p16, yuv422p16, yuv420p16, "
               "gray9, gray10, gray12 "
               "and gray16 pixel formats. "
               "Use -pix_fmt to select one.\n");
        return FUNC_0(VAR_5);
    }

    *VAR_8 = 1;
    return 0;
}
