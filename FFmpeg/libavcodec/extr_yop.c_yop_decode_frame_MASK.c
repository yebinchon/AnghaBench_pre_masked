
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int num_pal_colors; int dstbuf; int dstptr; int* srcptr; int* src_end; int* first_color; TYPE_3__* frame; int * low_nibble; } ;
typedef TYPE_1__ YopDecContext ;
struct TYPE_17__ {int height; int width; int frame_number; TYPE_1__* priv_data; } ;
struct TYPE_16__ {int* data; int palette_has_changed; int* linesize; } ;
struct TYPE_15__ {int size; int* data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_3, void *VAR_4, int *VAR_5,
                            AVPacket *VAR_6)
{
    YopDecContext *VAR_7 = VAR_3->priv_data;
    AVFrame *VAR_8 = VAR_7->frame;
    int VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    uint32_t *VAR_16;

    if (VAR_6->size < 4 + 3 * VAR_7->num_pal_colors) {
        FUNC_1(VAR_3, VAR_2, "Packet too small.\n");
        return VAR_0;
    }

    if ((VAR_12 = FUNC_2(VAR_3, VAR_8, 0)) < 0)
        return VAR_12;

    if (!VAR_3->frame_number)
        FUNC_3(VAR_8->data[1], 0, VAR_1);

    VAR_7->dstbuf = VAR_8->data[0];
    VAR_7->dstptr = VAR_8->data[0];
    VAR_7->srcptr = VAR_6->data + 4;
    VAR_7->src_end = VAR_6->data + VAR_6->size;
    VAR_7->low_nibble = ((void*)0);

    VAR_11 = VAR_6->data[0];
    if(VAR_11>1){
        FUNC_1(VAR_3, VAR_2, "frame is too odd %d\n", VAR_11);
        return VAR_0;
    }
    VAR_10 = VAR_7->first_color[VAR_11];
    VAR_16 = (uint32_t *)VAR_8->data[1];

    for (VAR_13 = 0; VAR_13 < VAR_7->num_pal_colors; VAR_13++, VAR_7->srcptr += 3) {
        VAR_16[VAR_13 + VAR_10] = (VAR_7->srcptr[0] << 18) |
                                  (VAR_7->srcptr[1] << 10) |
                                  (VAR_7->srcptr[2] << 2);
        VAR_16[VAR_13 + VAR_10] |= 0xFFU << 24 |
                                   (VAR_16[VAR_13 + VAR_10] >> 6) & 0x30303;
    }

    VAR_8->palette_has_changed = 1;

    for (VAR_15 = 0; VAR_15 < VAR_3->height; VAR_15 += 2) {
        for (VAR_14 = 0; VAR_14 < VAR_3->width; VAR_14 += 2) {
            if (VAR_7->srcptr - VAR_6->data >= VAR_6->size) {
                FUNC_1(VAR_3, VAR_2, "Packet too small.\n");
                return VAR_0;
            }

            VAR_9 = FUNC_5(VAR_7);

            if (VAR_9 != 0xf) {
                VAR_12 = FUNC_6(VAR_7, VAR_8->linesize[0], VAR_9);
                if (VAR_12 < 0)
                    return VAR_12;
            } else {
                VAR_9 = FUNC_5(VAR_7);
                VAR_12 = FUNC_4(VAR_7, VAR_8->linesize[0], VAR_9);
                if (VAR_12 < 0)
                    return VAR_12;
            }
            VAR_7->dstptr += 2;
        }
        VAR_7->dstptr += 2*VAR_8->linesize[0] - VAR_14;
    }

    if ((VAR_12 = FUNC_0(VAR_4, VAR_7->frame)) < 0)
        return VAR_12;

    *VAR_5 = 1;
    return VAR_6->size;
}
