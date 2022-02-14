
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {scalar_t__ codec_id; scalar_t__ format; int width; int height; } ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVCodecParameters ;
typedef TYPE_2__ AVCodecDescriptor ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ,char*,...) ;
 TYPE_2__* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_10, const AVCodecParameters *VAR_11)
{
    if (VAR_11->codec_id == VAR_0) {
        if (VAR_11->format == VAR_5 && VAR_6 != VAR_4) {
            FUNC_1(VAR_10, VAR_2, "Wrong endianness for bmp pixel format\n");
            return FUNC_0(VAR_9);
        } else if (VAR_11->format != VAR_5 &&
                   VAR_11->format != VAR_7 &&
                   VAR_11->format != VAR_3 &&
                   VAR_11->format != VAR_4) {
            FUNC_1(VAR_10, VAR_2, "BMP must be 1bit, 4bit, 8bit, 16bit, 24bit, or 32bit\n");
            return FUNC_0(VAR_9);
        }
    } else if (VAR_11->codec_id == VAR_1) {
        if (VAR_11->format != VAR_8) {
            FUNC_1(VAR_10, VAR_2, "PNG in ico requires pixel format to be rgba\n");
            return FUNC_0(VAR_9);
        }
    } else {
        const AVCodecDescriptor *VAR_12 = FUNC_2(VAR_11->codec_id);
        FUNC_1(VAR_10, VAR_2, "Unsupported codec %s\n", VAR_12 ? VAR_12->name : "");
        return FUNC_0(VAR_9);
    }

    if (VAR_11->width > 256 ||
        VAR_11->height > 256) {
        FUNC_1(VAR_10, VAR_2, "Unsupported dimensions %dx%d (dimensions cannot exceed 256x256)\n", VAR_11->width, VAR_11->height);
        return FUNC_0(VAR_9);
    }

    return 0;
}
