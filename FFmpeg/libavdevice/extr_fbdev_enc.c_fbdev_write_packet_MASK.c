
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_18__ {int yres; int xres; int xoffset; int yoffset; } ;
struct TYPE_17__ {int format; int width; int height; int bits_per_coded_sample; } ;
struct TYPE_16__ {TYPE_1__** streams; TYPE_3__* priv_data; } ;
struct TYPE_15__ {int * data; } ;
struct TYPE_13__ {int line_length; } ;
struct TYPE_14__ {int xoffset; int yoffset; TYPE_2__ fixinfo; TYPE_7__ varinfo; int * data; int fd; } ;
struct TYPE_12__ {TYPE_6__* codecpar; } ;
typedef TYPE_3__ FBDevContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*,int ,char*,int ,...) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_7__*) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    FBDevContext *VAR_7 = VAR_5->priv_data;
    uint8_t *VAR_8, *VAR_9;
    enum AVPixelFormat VAR_10;
    int VAR_11;
    int VAR_12;
    AVCodecParameters *VAR_13 = VAR_5->streams[0]->codecpar;
    enum AVPixelFormat VAR_14 = VAR_13->format;
    int VAR_15 = VAR_13->width;
    int VAR_16 = VAR_13->height;
    int VAR_17 = ((VAR_13->bits_per_coded_sample + 7) >> 3);
    int VAR_18 = VAR_15 * VAR_17;
    int VAR_19;

    if (FUNC_6(VAR_7->fd, VAR_3, &VAR_7->varinfo) < 0)
        FUNC_4(VAR_5, VAR_1,
               "Error refreshing variable info: %s\n", FUNC_2(FUNC_0(VAR_4)));

    VAR_10 = FUNC_5(&VAR_7->varinfo);

    if (VAR_10 != VAR_14) {
        FUNC_4(VAR_5, VAR_0, "Pixel format %s is not supported, use %s\n",
               FUNC_3(VAR_14), FUNC_3(VAR_10));
        return FUNC_0(VAR_2);
    }

    VAR_11 = FUNC_1(VAR_7->varinfo.yres, VAR_16);
    VAR_12 = FUNC_1(VAR_7->varinfo.xres, VAR_15) * VAR_17;

    VAR_8 = VAR_6->data;
    VAR_9 = VAR_7->data +
           VAR_17 * VAR_7->varinfo.xoffset +
           VAR_7->varinfo.yoffset * VAR_7->fixinfo.line_length;

    if (VAR_7->xoffset) {
        if (VAR_7->xoffset < 0) {
            if (-VAR_7->xoffset >= VAR_15)
                return 0;
            VAR_12 += VAR_7->xoffset * VAR_17;
            VAR_8 -= VAR_7->xoffset * VAR_17;
        } else {
            int VAR_20 = (VAR_15 + VAR_7->xoffset) - VAR_7->varinfo.xres;
            if (VAR_20 > 0) {
                if (VAR_20 >= VAR_15)
                    return 0;
                VAR_12 -= VAR_20 * VAR_17;
            }
            VAR_9 += VAR_17 * VAR_7->xoffset;
        }
    }

    if (VAR_7->yoffset) {
        if (VAR_7->yoffset < 0) {
            if (-VAR_7->yoffset >= VAR_16)
                return 0;
            VAR_11 += VAR_7->yoffset;
            VAR_8 -= VAR_7->yoffset * VAR_18;
        } else {
            int VAR_21 = (VAR_16 + VAR_7->yoffset) - VAR_7->varinfo.yres;
            if (VAR_21 > 0) {
                if (VAR_21 >= VAR_16)
                    return 0;
                VAR_11 -= VAR_21;
            }
            VAR_9 += VAR_7->yoffset * VAR_7->fixinfo.line_length;
        }
    }

    for (VAR_19 = 0; VAR_19 < VAR_11; VAR_19++) {
        FUNC_7(VAR_9, VAR_8, VAR_12);
        VAR_9 += VAR_7->fixinfo.line_length;
        VAR_8 += VAR_18;
    }

    return 0;
}
