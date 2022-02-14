
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_27__ {int width; int height; int coded_width; int coded_height; scalar_t__ pix_fmt; int (* execute2 ) (TYPE_5__*,int ,TYPE_4__*,int *,int ) ;int thread_count; TYPE_2__* priv_data; } ;
struct TYPE_26__ {int** data; int palette_has_changed; int height; int width; int key_frame; int pict_type; int * linesize; } ;
struct TYPE_25__ {int size; int data; } ;
struct TYPE_23__ {int buffer; } ;
struct TYPE_24__ {int tex_ratio; int bpp; scalar_t__ postproc; scalar_t__ paletted; int slice_count; int tex_data; scalar_t__ compressed; int texdsp; TYPE_1__ gbc; } ;
typedef TYPE_1__ GetByteContext ;
typedef TYPE_2__ DDSContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (char,char,char,char) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int*,int ,int ,int,int,int) ;
 int FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (TYPE_5__*,int ,char*,...) ;
 int FUNC_7 (TYPE_1__*,int*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int VAR_8 ;
 int FUNC_13 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_5__*,int,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_18 (TYPE_5__*,int ,TYPE_4__*,int *,int ) ;

__attribute__((used)) static int FUNC_19(AVCodecContext *VAR_9, void *VAR_10,
                      int *VAR_11, AVPacket *VAR_12)
{
    DDSContext *VAR_13 = VAR_9->priv_data;
    GetByteContext *VAR_14 = &VAR_13->gbc;
    AVFrame *VAR_15 = VAR_10;
    int VAR_16;
    int VAR_17;
    int VAR_18, VAR_19;

    FUNC_15(&VAR_13->texdsp);
    FUNC_11(VAR_14, VAR_12->data, VAR_12->size);

    if (FUNC_9(VAR_14) < 128) {
        FUNC_6(VAR_9, VAR_1, "Frame is too small (%d).\n",
               FUNC_9(VAR_14));
        return VAR_0;
    }

    if (FUNC_10(VAR_14) != FUNC_2('D', 'D', 'S', ' ') ||
        FUNC_10(VAR_14) != 124) {
        FUNC_6(VAR_9, VAR_1, "Invalid DDS header.\n");
        return VAR_0;
    }

    FUNC_12(VAR_14, 4);

    VAR_19 = FUNC_10(VAR_14);
    VAR_18 = FUNC_10(VAR_14);
    VAR_17 = FUNC_14(VAR_9, VAR_18, VAR_19);
    if (VAR_17 < 0) {
        FUNC_6(VAR_9, VAR_1, "Invalid image size %dx%d.\n",
               VAR_9->width, VAR_9->height);
        return VAR_17;
    }


    VAR_9->coded_width = FUNC_1(VAR_9->width, VAR_7);
    VAR_9->coded_height = FUNC_1(VAR_9->height, VAR_6);

    FUNC_12(VAR_14, 4);
    FUNC_12(VAR_14, 4);
    VAR_16 = FUNC_10(VAR_14);
    if (VAR_16 != 0)
        FUNC_6(VAR_9, VAR_2, "Found %d mipmaps (ignored).\n", VAR_16);



    VAR_17 = FUNC_16(VAR_9);
    if (VAR_17 < 0)
        return VAR_17;

    VAR_17 = FUNC_13(VAR_9, VAR_15, 0);
    if (VAR_17 < 0)
        return VAR_17;

    if (VAR_13->compressed) {
        int VAR_20 = (VAR_9->coded_height / VAR_6) *
                   (VAR_9->coded_width / VAR_7) * VAR_13->tex_ratio;
        VAR_13->slice_count = FUNC_3(VAR_9->thread_count, 1,
                                   VAR_9->coded_height / VAR_6);

        if (FUNC_9(VAR_14) < VAR_20) {
            FUNC_6(VAR_9, VAR_1,
                   "Compressed Buffer is too small (%d < %d).\n",
                   FUNC_9(VAR_14), VAR_20);
            return VAR_0;
        }


        VAR_13->tex_data = VAR_14->buffer;
        VAR_9->execute2(VAR_9, VAR_8, VAR_15, ((void*)0), VAR_13->slice_count);
    } else if (!VAR_13->paletted && VAR_13->bpp == 4 && VAR_9->pix_fmt == VAR_4) {
        uint8_t *VAR_21 = VAR_15->data[0];
        int VAR_22, VAR_23, VAR_24;


        FUNC_7(VAR_14, VAR_15->data[1], 16 * 4);
        for (VAR_24 = 0; VAR_24 < 16; VAR_24++) {
            FUNC_0(VAR_15->data[1] + VAR_24*4,
                    (VAR_15->data[1][2+VAR_24*4]<<0)+
                    (VAR_15->data[1][1+VAR_24*4]<<8)+
                    (VAR_15->data[1][0+VAR_24*4]<<16)+
                    ((unsigned)VAR_15->data[1][3+VAR_24*4]<<24)
            );
        }
        VAR_15->palette_has_changed = 1;

        if (FUNC_9(VAR_14) < VAR_15->height * VAR_15->width / 2) {
            FUNC_6(VAR_9, VAR_1, "Buffer is too small (%d < %d).\n",
                   FUNC_9(VAR_14), VAR_15->height * VAR_15->width / 2);
            return VAR_0;
        }

        for (VAR_23 = 0; VAR_23 < VAR_15->height; VAR_23++) {
            for (VAR_22 = 0; VAR_22 < VAR_15->width; VAR_22 += 2) {
                uint8_t VAR_25 = FUNC_8(VAR_14);
                VAR_21[VAR_22 ] = VAR_25 & 0xF;
                VAR_21[VAR_22 + 1] = VAR_25 >> 4;
            }
            VAR_21 += VAR_15->linesize[0];
        }
    } else {
        int VAR_26 = FUNC_5(VAR_9->pix_fmt, VAR_15->width, 0);

        if (VAR_13->paletted) {
            int VAR_27;

            FUNC_7(VAR_14, VAR_15->data[1], 256 * 4);
            for (VAR_27 = 0; VAR_27 < 256; VAR_27++)
                FUNC_0(VAR_15->data[1] + VAR_27*4,
                        (VAR_15->data[1][2+VAR_27*4]<<0)+
                        (VAR_15->data[1][1+VAR_27*4]<<8)+
                        (VAR_15->data[1][0+VAR_27*4]<<16)+
                        ((unsigned)VAR_15->data[1][3+VAR_27*4]<<24)
                );

            VAR_15->palette_has_changed = 1;
        }

        if (FUNC_9(VAR_14) < VAR_15->height * VAR_26) {
            FUNC_6(VAR_9, VAR_1, "Buffer is too small (%d < %d).\n",
                   FUNC_9(VAR_14), VAR_15->height * VAR_26);
            return VAR_0;
        }

        FUNC_4(VAR_15->data[0], VAR_15->linesize[0],
                            VAR_14->buffer, VAR_26,
                            VAR_26, VAR_15->height);
    }


    if (VAR_13->postproc != VAR_5)
        FUNC_17(VAR_9, VAR_15);


    VAR_15->pict_type = VAR_3;
    VAR_15->key_frame = 1;
    *VAR_11 = 1;

    return VAR_12->size;
}
