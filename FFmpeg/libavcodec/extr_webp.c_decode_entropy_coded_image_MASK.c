
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int uint8_t ;
typedef enum ImageRole { ____Placeholder_ImageRole } ImageRole ;
struct TYPE_16__ {int nb_huffman_groups; int reduced_width; int avctx; int gb; TYPE_3__* image; } ;
typedef TYPE_1__ WebPContext ;
struct TYPE_17__ {TYPE_12__* f; } ;
typedef TYPE_2__ ThreadFrame ;
struct TYPE_18__ {int role; int color_cache_bits; int nb_huffman_groups; int * color_cache; TYPE_12__* frame; int * huffman_groups; int is_alpha_primary; } ;
struct TYPE_15__ {int width; int height; int format; } ;
typedef TYPE_3__ ImageContext ;
typedef int HuffReader ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int,int) ;
 int* FUNC_5 (TYPE_12__*,int,int) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* VAR_14 ;
 TYPE_12__* FUNC_6 () ;
 int FUNC_7 (TYPE_12__*,int) ;
 int FUNC_8 (int ,int ,char*,...) ;
 void* FUNC_9 (int,int) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,TYPE_2__*,int ) ;
 int FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (TYPE_1__*,TYPE_3__*,int,int) ;
 void* FUNC_16 (int *,int *) ;
 int** VAR_15 ;
 int FUNC_17 (TYPE_1__*,int *,int) ;
 int FUNC_18 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_19(WebPContext *VAR_16, enum ImageRole VAR_17,
                                      int VAR_18, int VAR_19)
{
    ImageContext *VAR_20;
    HuffReader *VAR_21;
    int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;

    VAR_20 = &VAR_16->image[VAR_17];
    VAR_20->role = VAR_17;

    if (!VAR_20->frame) {
        VAR_20->frame = FUNC_6();
        if (!VAR_20->frame)
            return FUNC_0(VAR_3);
    }

    VAR_20->frame->format = VAR_2;
    VAR_20->frame->width = VAR_18;
    VAR_20->frame->height = VAR_19;

    if (VAR_17 == VAR_10 && !VAR_20->is_alpha_primary) {
        ThreadFrame VAR_28 = { .f = VAR_20->frame };
        VAR_24 = FUNC_12(VAR_16->avctx, &VAR_28, 0);
    } else
        VAR_24 = FUNC_7(VAR_20->frame, 1);
    if (VAR_24 < 0)
        return VAR_24;

    if (FUNC_14(&VAR_16->gb)) {
        VAR_20->color_cache_bits = FUNC_13(&VAR_16->gb, 4);
        if (VAR_20->color_cache_bits < 1 || VAR_20->color_cache_bits > 11) {
            FUNC_8(VAR_16->avctx, VAR_1, "invalid color cache bits: %d\n",
                   VAR_20->color_cache_bits);
            return VAR_0;
        }
        VAR_20->color_cache = FUNC_9(1 << VAR_20->color_cache_bits,
                                            sizeof(*VAR_20->color_cache));
        if (!VAR_20->color_cache)
            return FUNC_0(VAR_3);
    } else {
        VAR_20->color_cache_bits = 0;
    }

    VAR_20->nb_huffman_groups = 1;
    if (VAR_17 == VAR_10 && FUNC_14(&VAR_16->gb)) {
        VAR_24 = FUNC_11(VAR_16);
        if (VAR_24 < 0)
            return VAR_24;
        VAR_20->nb_huffman_groups = VAR_16->nb_huffman_groups;
    }
    VAR_20->huffman_groups = FUNC_9(VAR_20->nb_huffman_groups *
                                           VAR_4,
                                           sizeof(*VAR_20->huffman_groups));
    if (!VAR_20->huffman_groups)
        return FUNC_0(VAR_3);

    for (VAR_22 = 0; VAR_22 < VAR_20->nb_huffman_groups; VAR_22++) {
        VAR_21 = &VAR_20->huffman_groups[VAR_22 * VAR_4];
        for (VAR_23 = 0; VAR_23 < VAR_4; VAR_23++) {
            int VAR_29 = VAR_14[VAR_23];
            if (!VAR_23 && VAR_20->color_cache_bits > 0)
                VAR_29 += 1 << VAR_20->color_cache_bits;

            if (FUNC_14(&VAR_16->gb)) {
                FUNC_18(VAR_16, &VAR_21[VAR_23]);
            } else {
                VAR_24 = FUNC_17(VAR_16, &VAR_21[VAR_23], VAR_29);
                if (VAR_24 < 0)
                    return VAR_24;
            }
        }
    }

    VAR_27 = VAR_20->frame->width;
    if (VAR_17 == VAR_10 && VAR_16->reduced_width > 0)
        VAR_27 = VAR_16->reduced_width;

    VAR_25 = 0; VAR_26 = 0;
    while (VAR_26 < VAR_20->frame->height) {
        int VAR_30;

        VAR_21 = FUNC_15(VAR_16, VAR_20, VAR_25, VAR_26);
        VAR_30 = FUNC_16(&VAR_21[VAR_8], &VAR_16->gb);
        if (VAR_30 < VAR_12) {

            uint8_t *VAR_31 = FUNC_5(VAR_20->frame, VAR_25, VAR_26);
            VAR_31[2] = VAR_30;
            VAR_31[1] = FUNC_16(&VAR_21[VAR_9], &VAR_16->gb);
            VAR_31[3] = FUNC_16(&VAR_21[VAR_6], &VAR_16->gb);
            VAR_31[0] = FUNC_16(&VAR_21[VAR_5], &VAR_16->gb);
            if (VAR_20->color_cache_bits)
                FUNC_10(VAR_20, FUNC_2(VAR_31));
            VAR_25++;
            if (VAR_25 == VAR_27) {
                VAR_25 = 0;
                VAR_26++;
            }
        } else if (VAR_30 < VAR_12 + VAR_11) {

            int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;


            VAR_32 = VAR_30 - VAR_12;
            if (VAR_32 < 4) {
                VAR_33 = VAR_32 + 1;
            } else {
                int VAR_37 = (VAR_32 - 2) >> 1;
                int VAR_38 = (2 + (VAR_32 & 1)) << VAR_37;
                VAR_33 = VAR_38 + FUNC_13(&VAR_16->gb, VAR_37) + 1;
            }
            VAR_32 = FUNC_16(&VAR_21[VAR_7], &VAR_16->gb);
            if (VAR_32 > 39U) {
                FUNC_8(VAR_16->avctx, VAR_1,
                       "distance prefix code too large: %d\n", VAR_32);
                return VAR_0;
            }
            if (VAR_32 < 4) {
                VAR_34 = VAR_32 + 1;
            } else {
                int VAR_39 = (VAR_32 - 2) >> 1;
                int VAR_40 = (2 + (VAR_32 & 1)) << VAR_39;
                VAR_34 = VAR_40 + FUNC_13(&VAR_16->gb, VAR_39) + 1;
            }


            if (VAR_34 <= VAR_13) {
                int VAR_41 = VAR_15[VAR_34 - 1][0];
                int VAR_42 = VAR_15[VAR_34 - 1][1];
                VAR_34 = FUNC_4(1, VAR_41 + VAR_42 * VAR_27);
            } else {
                VAR_34 -= VAR_13;
            }
            VAR_35 = VAR_25;
            VAR_36 = VAR_26;
            if (VAR_34 <= VAR_25) {
                VAR_35 -= VAR_34;
                VAR_34 = 0;
            } else {
                VAR_35 = 0;
                VAR_34 -= VAR_25;
            }
            while (VAR_34 >= VAR_27) {
                VAR_36--;
                VAR_34 -= VAR_27;
            }
            if (VAR_34 > 0) {
                VAR_35 = VAR_27 - VAR_34;
                VAR_36--;
            }
            VAR_35 = FUNC_4(0, VAR_35);
            VAR_36 = FUNC_4(0, VAR_36);




            for (VAR_22 = 0; VAR_22 < VAR_33; VAR_22++) {
                uint8_t *VAR_43 = FUNC_5(VAR_20->frame, VAR_35, VAR_36);
                uint8_t *VAR_44 = FUNC_5(VAR_20->frame, VAR_25, VAR_26);

                FUNC_1(VAR_44, VAR_43);
                if (VAR_20->color_cache_bits)
                    FUNC_10(VAR_20, FUNC_2(VAR_44));
                VAR_25++;
                VAR_35++;
                if (VAR_25 == VAR_27) {
                    VAR_25 = 0;
                    VAR_26++;
                }
                if (VAR_35 == VAR_27) {
                    VAR_35 = 0;
                    VAR_36++;
                }
                if (VAR_26 == VAR_20->frame->height || VAR_36 == VAR_20->frame->height)
                    break;
            }
        } else {

            uint8_t *VAR_45 = FUNC_5(VAR_20->frame, VAR_25, VAR_26);
            int VAR_46 = VAR_30 - (VAR_12 + VAR_11);

            if (!VAR_20->color_cache_bits) {
                FUNC_8(VAR_16->avctx, VAR_1, "color cache not found\n");
                return VAR_0;
            }
            if (VAR_46 >= 1 << VAR_20->color_cache_bits) {
                FUNC_8(VAR_16->avctx, VAR_1,
                       "color cache index out-of-bounds\n");
                return VAR_0;
            }
            FUNC_3(VAR_45, VAR_20->color_cache[VAR_46]);
            VAR_25++;
            if (VAR_25 == VAR_27) {
                VAR_25 = 0;
                VAR_26++;
            }
        }
    }

    return 0;
}
