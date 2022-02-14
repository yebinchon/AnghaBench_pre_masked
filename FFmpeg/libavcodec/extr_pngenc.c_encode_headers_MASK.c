
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct TYPE_12__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_17__ {TYPE_1__ sample_aspect_ratio; scalar_t__ height; scalar_t__ width; TYPE_2__* priv_data; } ;
struct TYPE_16__ {scalar_t__ color_primaries; scalar_t__ color_trc; scalar_t__* data; } ;
struct TYPE_15__ {scalar_t__ data; } ;
struct TYPE_14__ {int type; int flags; } ;
struct TYPE_13__ {int* buf; int bit_depth; int color_type; int is_progressive; int bytestream; scalar_t__ dpm; } ;
typedef TYPE_2__ PNGEncContext ;
typedef TYPE_3__ AVStereo3D ;
typedef TYPE_4__ AVFrameSideData ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_0 (int*,scalar_t__) ;
 int FUNC_1 (char,char,char,char) ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_2 (TYPE_5__ const*,int ) ;
 int FUNC_3 (TYPE_6__*,int ,char*) ;
 int FUNC_4 (int**,unsigned int) ;
 scalar_t__ FUNC_5 (scalar_t__,int*) ;
 scalar_t__ FUNC_6 (scalar_t__,int*) ;
 int FUNC_7 (int *,int ,int*,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_6, const AVFrame *VAR_7)
{
    AVFrameSideData *VAR_8;
    PNGEncContext *VAR_9 = VAR_6->priv_data;


    FUNC_0(VAR_9->buf, VAR_6->width);
    FUNC_0(VAR_9->buf + 4, VAR_6->height);
    VAR_9->buf[8] = VAR_9->bit_depth;
    VAR_9->buf[9] = VAR_9->color_type;
    VAR_9->buf[10] = 0;
    VAR_9->buf[11] = 0;
    VAR_9->buf[12] = VAR_9->is_progressive;
    FUNC_7(&VAR_9->bytestream, FUNC_1('I', 'H', 'D', 'R'), VAR_9->buf, 13);


    if (VAR_9->dpm) {
      FUNC_0(VAR_9->buf, VAR_9->dpm);
      FUNC_0(VAR_9->buf + 4, VAR_9->dpm);
      VAR_9->buf[8] = 1;
    } else {
      FUNC_0(VAR_9->buf, VAR_6->sample_aspect_ratio.num);
      FUNC_0(VAR_9->buf + 4, VAR_6->sample_aspect_ratio.den);
      VAR_9->buf[8] = 0;
    }
    FUNC_7(&VAR_9->bytestream, FUNC_1('p', 'H', 'Y', 's'), VAR_9->buf, 9);


    VAR_8 = FUNC_2(VAR_7, VAR_2);
    if (VAR_8) {
        AVStereo3D *VAR_10 = (AVStereo3D *)VAR_8->data;
        switch (VAR_10->type) {
            case 128:
                VAR_9->buf[0] = ((VAR_10->flags & VAR_4) == 0) ? 1 : 0;
                FUNC_7(&VAR_9->bytestream, FUNC_1('s', 'T', 'E', 'R'), VAR_9->buf, 1);
                break;
            case 129:
                break;
            default:
                FUNC_3(VAR_6, VAR_3, "Only side-by-side stereo3d flag can be defined within sTER chunk\n");
                break;
        }
    }


    if (VAR_7->color_primaries == VAR_0 &&
        VAR_7->color_trc == VAR_1) {
        VAR_9->buf[0] = 1;
        FUNC_7(&VAR_9->bytestream, FUNC_1('s', 'R', 'G', 'B'), VAR_9->buf, 1);
    }

    if (FUNC_5(VAR_7->color_primaries, VAR_9->buf))
        FUNC_7(&VAR_9->bytestream, FUNC_1('c', 'H', 'R', 'M'), VAR_9->buf, 32);
    if (FUNC_6(VAR_7->color_trc, VAR_9->buf))
        FUNC_7(&VAR_9->bytestream, FUNC_1('g', 'A', 'M', 'A'), VAR_9->buf, 4);


    if (VAR_9->color_type == VAR_5) {
        int VAR_11, VAR_12, VAR_13;
        unsigned int VAR_14;
        uint32_t *VAR_15;
        uint8_t *VAR_16, *VAR_17;

        VAR_15 = (uint32_t *)VAR_7->data[1];
        VAR_16 = VAR_9->buf;
        VAR_17 = VAR_9->buf + 256 * 3;
        VAR_11 = 0;
        for (VAR_13 = 0; VAR_13 < 256; VAR_13++) {
            VAR_14 = VAR_15[VAR_13];
            VAR_12 = VAR_14 >> 24;
            if (VAR_12 != 0xff)
                VAR_11 = 1;
            *VAR_17++ = VAR_12;
            FUNC_4(&VAR_16, VAR_14);
        }
        FUNC_7(&VAR_9->bytestream,
                        FUNC_1('P', 'L', 'T', 'E'), VAR_9->buf, 256 * 3);
        if (VAR_11) {
            FUNC_7(&VAR_9->bytestream,
                            FUNC_1('t', 'R', 'N', 'S'), VAR_9->buf + 256 * 3, 256);
        }
    }

    return 0;
}
