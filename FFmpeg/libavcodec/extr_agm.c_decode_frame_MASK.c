
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_20__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_34__ {int fflags; int bitstream_size; int key_frame; unsigned int output_size; int flags; int compression; long* size; TYPE_20__* prev_frame; scalar_t__ rgb; scalar_t__ dct; int output; int gbyte; int gb; } ;
struct TYPE_33__ {scalar_t__ codec_tag; int width; int height; scalar_t__ coded_width; scalar_t__ coded_height; TYPE_4__* priv_data; } ;
struct TYPE_32__ {int key_frame; scalar_t__ width; scalar_t__ height; scalar_t__ crop_left; scalar_t__ crop_top; int pict_type; } ;
struct TYPE_31__ {scalar_t__ width; scalar_t__ height; int * data; } ;
struct TYPE_30__ {unsigned int size; int flags; int data; } ;
typedef int GetByteContext ;
typedef int GetBitContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AGMContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (TYPE_2__*,TYPE_20__*) ;
 int FUNC_2 (TYPE_20__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_20__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,unsigned int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_3__*,int,int) ;
 int FUNC_9 (TYPE_3__*,int *,TYPE_2__*,TYPE_20__*) ;
 int FUNC_10 (TYPE_3__*,int *,TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*,int *,TYPE_2__*) ;
 int FUNC_12 (TYPE_3__*,int *,TYPE_2__*) ;
 int FUNC_13 (TYPE_3__*,int *,TYPE_2__*) ;
 int FUNC_14 (TYPE_3__*,int *,TYPE_2__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_17(AVCodecContext *VAR_9, void *VAR_10,
                        int *VAR_11, AVPacket *VAR_12)
{
    AGMContext *VAR_13 = VAR_9->priv_data;
    GetBitContext *VAR_14 = &VAR_13->gb;
    GetByteContext *VAR_15 = &VAR_13->gbyte;
    AVFrame *VAR_16 = VAR_10;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    unsigned VAR_22;
    long VAR_23;
    int VAR_24;

    if (!VAR_12->size)
        return 0;

    FUNC_6(VAR_15, VAR_12->data, VAR_12->size);

    VAR_21 = FUNC_5(VAR_15);
    VAR_13->fflags = FUNC_5(VAR_15);
    VAR_13->bitstream_size = VAR_13->fflags & 0x1FFFFFFF;
    VAR_13->fflags >>= 29;
    FUNC_4(VAR_9, VAR_3, "fflags: %X\n", VAR_13->fflags);
    if (VAR_12->size < VAR_13->bitstream_size + 8)
        return VAR_0;

    VAR_13->key_frame = (VAR_12->flags & VAR_7);
    VAR_16->key_frame = VAR_13->key_frame;
    VAR_16->pict_type = VAR_13->key_frame ? VAR_5 : VAR_6;

    if (!VAR_13->key_frame) {
        if (!VAR_13->prev_frame->data[0]) {
            FUNC_4(VAR_9, VAR_4, "Missing reference frame.\n");
            return VAR_0;
        }
    }

    if (VAR_21) {
        if (VAR_9->codec_tag == FUNC_0('A', 'G', 'M', '0') ||
            VAR_9->codec_tag == FUNC_0('A', 'G', 'M', '1'))
            return VAR_1;
        else
            VAR_24 = FUNC_8(VAR_9, VAR_21, (VAR_12->size - VAR_13->bitstream_size) - 8);
        if (VAR_24 < 0)
            return VAR_24;
        FUNC_6(VAR_15, VAR_13->output, VAR_13->output_size);
    } else if (!VAR_13->dct) {
        FUNC_7(VAR_15, 4);
    }

    if (VAR_13->dct) {
        VAR_13->flags = 0;
        VAR_17 = FUNC_5(VAR_15);
        VAR_18 = FUNC_5(VAR_15);
        if (VAR_17 == VAR_8 || VAR_18 == VAR_8)
            return VAR_0;
        if (VAR_17 < 0) {
            VAR_17 = -VAR_17;
            VAR_13->flags |= 2;
        }
        if (VAR_18 < 0) {
            VAR_18 = -VAR_18;
            VAR_13->flags |= 1;
        }

        VAR_19 = VAR_9->width;
        VAR_20 = VAR_9->height;
        if (VAR_17 < VAR_19 || VAR_18 < VAR_20 || VAR_17 & 7 || VAR_18 & 7)
            return VAR_0;

        VAR_24 = FUNC_16(VAR_9, VAR_17, VAR_18);
        if (VAR_24 < 0)
            return VAR_24;
        VAR_9->width = VAR_19;
        VAR_9->height = VAR_20;

        VAR_13->compression = FUNC_5(VAR_15);
        if (VAR_13->compression < 0 || VAR_13->compression > 100)
            return VAR_0;

        for (int VAR_25 = 0; VAR_25 < 3; VAR_25++)
            VAR_13->size[VAR_25] = FUNC_5(VAR_15);
        if (VAR_21) {
            VAR_22 = VAR_13->output_size;
            VAR_23 = 8LL;
        } else {
            VAR_22 = VAR_12->size;
            VAR_23 = 32LL;
        }
        if (VAR_13->size[0] < 0 || VAR_13->size[1] < 0 || VAR_13->size[2] < 0 ||
            VAR_23 + VAR_13->size[0] + VAR_13->size[1] + VAR_13->size[2] > VAR_22) {
            return VAR_0;
        }
    }

    if ((VAR_24 = FUNC_15(VAR_9, VAR_16, VAR_2)) < 0)
        return VAR_24;

    if (VAR_16->key_frame) {
        if (!VAR_13->dct && !VAR_13->rgb)
            VAR_24 = FUNC_11(VAR_9, VAR_15, VAR_16);
        else if (!VAR_13->dct && VAR_13->rgb)
            VAR_24 = FUNC_12(VAR_9, VAR_15, VAR_16);
        else
            VAR_24 = FUNC_10(VAR_9, VAR_14, VAR_16);
    } else {
        if (VAR_13->prev_frame-> width != VAR_16->width ||
            VAR_13->prev_frame->height != VAR_16->height)
            return VAR_0;

        if (!(VAR_13->flags & 2)) {
            VAR_24 = FUNC_1(VAR_16, VAR_13->prev_frame);
            if (VAR_24 < 0)
                return VAR_24;
        }

        if (VAR_13->dct) {
            VAR_24 = FUNC_9(VAR_9, VAR_14, VAR_16, VAR_13->prev_frame);
        } else if (!VAR_13->dct && !VAR_13->rgb) {
            VAR_24 = FUNC_13(VAR_9, VAR_15, VAR_16);
        } else {
            VAR_24 = FUNC_14(VAR_9, VAR_15, VAR_16);
        }
    }
    if (VAR_24 < 0)
        return VAR_24;

    FUNC_3(VAR_13->prev_frame);
    if ((VAR_24 = FUNC_2(VAR_13->prev_frame, VAR_16)) < 0)
        return VAR_24;

    VAR_16->crop_top = VAR_9->coded_height - VAR_9->height;
    VAR_16->crop_left = VAR_9->coded_width - VAR_9->width;

    *VAR_11 = 1;

    return VAR_12->size;
}
