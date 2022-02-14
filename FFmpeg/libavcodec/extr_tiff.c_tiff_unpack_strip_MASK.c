
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_16__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int8_t ;
struct TYPE_23__ {int width; int bpp; int bppcount; int* subsampling; int* yuv_line; int yuv_line_size; int compr; int* deinvert_buf; scalar_t__ tiff_type; int strips; scalar_t__ fill_order; TYPE_16__* avctx; scalar_t__ is_bayer; int gb; int lzw; scalar_t__ planar; } ;
typedef TYPE_1__ TiffContext ;
struct TYPE_25__ {scalar_t__ format; } ;
struct TYPE_24__ {int flags; int nb_components; } ;
struct TYPE_22__ {scalar_t__ pix_fmt; } ;
typedef int PutByteContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int**,int*,int) ;
 int FUNC_3 (TYPE_16__*,int ,char*,...) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int *,int*,int) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (TYPE_1__*,int const*,int) ;
 int FUNC_11 (TYPE_1__*,int*,int ,int*,int ,int,int,int ,int) ;
 int FUNC_12 (TYPE_16__*,TYPE_3__*) ;
 int FUNC_13 (int ,int*,int) ;
 int FUNC_14 (int ,int,int const*,int,int ) ;
 int* VAR_21 ;
 int FUNC_15 (TYPE_1__*,int,int*,int,int const*,int,int,int) ;
 int FUNC_16 (TYPE_1__*,int*,int,int const*,int,int,int) ;
 int FUNC_17 (TYPE_1__*,TYPE_3__*,int*,int,int const*,int,int,int,int,int) ;
 int FUNC_18 (TYPE_1__*,TYPE_3__*,int*,int,int const*,int,int,int,int,int) ;
 int FUNC_19 (TYPE_1__*,TYPE_3__*,int*,int,int,int) ;
 int FUNC_20 (TYPE_1__*,TYPE_3__*,int*,int) ;

__attribute__((used)) static int FUNC_21(TiffContext *VAR_22, AVFrame *VAR_23, uint8_t *VAR_24, int VAR_25,
                             const uint8_t *VAR_26, int VAR_27, int VAR_28, int VAR_29)
{
    PutByteContext VAR_30;
    int VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
    const uint8_t *VAR_36 = VAR_26;
    int VAR_37 = ((VAR_22->width * VAR_22->bpp) + 7) >> 3;
    const AVPixFmtDescriptor *VAR_38 = FUNC_4(VAR_23->format);
    int VAR_39 = !(VAR_38->flags & VAR_4) &&
                 (VAR_38->flags & VAR_3) &&
                 VAR_38->nb_components >= 3;
    int VAR_40;

    if (VAR_22->planar)
        VAR_37 /= VAR_22->bppcount;

    if (VAR_27 <= 0)
        return VAR_0;

    if (VAR_39) {
        int VAR_41 = (((VAR_22->width - 1) / VAR_22->subsampling[0] + 1) * VAR_22->bpp *
                            VAR_22->subsampling[0] * VAR_22->subsampling[1] + 7) >> 3;
        FUNC_2(&VAR_22->yuv_line, &VAR_22->yuv_line_size, VAR_41);
        if (VAR_22->yuv_line == ((void*)0)) {
            FUNC_3(VAR_22->avctx, VAR_2, "Not enough memory\n");
            return FUNC_0(VAR_7);
        }
        VAR_24 = VAR_22->yuv_line;
        VAR_25 = 0;

        VAR_37 = (VAR_22->width - 1) / VAR_22->subsampling[0] + 1;
        VAR_37 = VAR_37 * VAR_22->subsampling[0] * VAR_22->subsampling[1] + 2*VAR_37;
        FUNC_1(VAR_37 <= VAR_41);
        FUNC_1(VAR_22->bpp == 24);
    }
    if (VAR_22->is_bayer) {
        VAR_37 = (VAR_22->bpp * VAR_22->width + 7) >> 3;
    }
    if (VAR_23->format == VAR_5) {
        FUNC_2(&VAR_22->yuv_line, &VAR_22->yuv_line_size, VAR_37);
        if (VAR_22->yuv_line == ((void*)0)) {
            FUNC_3(VAR_22->avctx, VAR_2, "Not enough memory\n");
            return FUNC_0(VAR_7);
        }
        VAR_24 = VAR_22->yuv_line;
        VAR_25 = 0;
    }

    if (VAR_22->compr == VAR_13 || VAR_22->compr == VAR_11) {




        FUNC_3(VAR_22->avctx, VAR_2,
               "zlib support not enabled, "
               "deflate compression not supported\n");
        return FUNC_0(VAR_8);

    }
    if (VAR_22->compr == VAR_16) {




        FUNC_3(VAR_22->avctx, VAR_2,
               "LZMA support not enabled\n");
        return FUNC_0(VAR_8);

    }
    if (VAR_22->compr == VAR_17) {
        if (VAR_22->fill_order) {
            if ((VAR_35 = FUNC_10(VAR_22, VAR_26, VAR_27)) < 0)
                return VAR_35;
            VAR_36 = VAR_26 = VAR_22->deinvert_buf;
        }
        if (VAR_27 > 1 && !VAR_26[0] && (VAR_26[1]&1)) {
            FUNC_3(VAR_22->avctx, VAR_2, "Old style LZW is unsupported\n");
        }
        if ((VAR_35 = FUNC_14(VAR_22->lzw, 8, VAR_26, VAR_27, VAR_9)) < 0) {
            FUNC_3(VAR_22->avctx, VAR_2, "Error initializing LZW decoder\n");
            return VAR_35;
        }
        for (VAR_32 = 0; VAR_32 < VAR_29; VAR_32++) {
            VAR_33 = FUNC_13(VAR_22->lzw, VAR_24, VAR_37);
            if (VAR_33 < VAR_37) {
                FUNC_3(VAR_22->avctx, VAR_2, "Decoded only %i bytes of %i\n",
                       VAR_33, VAR_37);
                return VAR_0;
            }
            if (VAR_22->bpp < 8 && VAR_22->avctx->pix_fmt == VAR_6)
                FUNC_15(VAR_22, VAR_22->bpp, VAR_24, 1, VAR_24, 0, VAR_37, 0);
            if (VAR_39) {
                FUNC_20(VAR_22, VAR_23, VAR_24, VAR_28 + VAR_32);
                VAR_32 += VAR_22->subsampling[1] - 1;
            } else if (VAR_23->format == VAR_5) {
                FUNC_19(VAR_22, VAR_23, VAR_24, VAR_28 + VAR_32, VAR_37, VAR_22->bpp);
            }
            VAR_24 += VAR_25;
        }
        return 0;
    }
    if (VAR_22->compr == VAR_12 ||
        VAR_22->compr == VAR_14 ||
        VAR_22->compr == VAR_15) {
        if (VAR_39 || VAR_23->format == VAR_5)
            return VAR_0;

        return FUNC_16(VAR_22, VAR_24, VAR_25, VAR_26, VAR_27, VAR_37, VAR_29);
    }

    FUNC_7(&VAR_22->gb, VAR_26, VAR_27);
    FUNC_8(&VAR_30, VAR_24, VAR_39 ? VAR_22->yuv_line_size : (VAR_25 * VAR_29));

    VAR_40 = (VAR_22->tiff_type == VAR_20 || VAR_22->tiff_type == VAR_19);


    if (VAR_22->compr == VAR_18 && VAR_40) {
        if (VAR_22->strips > 1) {
            FUNC_3(VAR_22->avctx, VAR_2, "More than one DNG JPEG strips unsupported\n");
            return VAR_1;
        }
        if ((VAR_35 = FUNC_12(VAR_22->avctx, VAR_23)) < 0)
            return VAR_35;
        return 0;
    }

    for (VAR_32 = 0; VAR_32 < VAR_29; VAR_32++) {
        if (VAR_26 - VAR_36 > VAR_27) {
            FUNC_3(VAR_22->avctx, VAR_2, "Source data overread\n");
            return VAR_0;
        }

        if (FUNC_5(&VAR_22->gb) == 0 || FUNC_6(&VAR_30))
            break;
        FUNC_9(&VAR_30, VAR_25 * VAR_32, VAR_10);
        switch (VAR_22->compr) {
        case 128:
            if (VAR_36 + VAR_27 - VAR_26 < VAR_37)
                return VAR_0;

            if (!VAR_22->fill_order) {
                FUNC_15(VAR_22, VAR_22->bpp * (VAR_22->avctx->pix_fmt == VAR_6 || VAR_22->is_bayer),
                                VAR_24, 1, VAR_26, 0, VAR_37, 0);
            } else {
                int VAR_42;
                for (VAR_42 = 0; VAR_42 < VAR_37; VAR_42++)
                    VAR_24[VAR_42] = VAR_21[VAR_26[VAR_42]];
            }


            if (VAR_40) {
                int VAR_43, VAR_44, VAR_45;

                VAR_43 = (VAR_22->bpp > 8);
                VAR_45 = (VAR_43 ? 16 : 8);
                VAR_44 = (VAR_43 ? sizeof(uint16_t) : sizeof(uint8_t));

                FUNC_11(VAR_22,
                         VAR_24,
                         0,
                         VAR_24,
                         0,
                         VAR_37 / VAR_44 * VAR_45 / VAR_22->bpp * VAR_22->bppcount,
                         1,
                         0,
                         VAR_43);
            }

            VAR_26 += VAR_37;
            break;
        case 129:
            for (VAR_33 = 0; VAR_33 < VAR_37;) {
                if (VAR_36 + VAR_27 - VAR_26 < 2) {
                    FUNC_3(VAR_22->avctx, VAR_2, "Read went out of bounds\n");
                    return VAR_0;
                }
                VAR_34 = VAR_22->fill_order ? (int8_t) VAR_21[*VAR_26++]: (int8_t) *VAR_26++;
                if (VAR_34 >= 0) {
                    VAR_34++;
                    if (VAR_33 + VAR_34 > VAR_37 ||
                        VAR_36 + VAR_27 - VAR_26 < VAR_34) {
                        FUNC_3(VAR_22->avctx, VAR_2,
                               "Copy went out of bounds\n");
                        return VAR_0;
                    }
                    FUNC_15(VAR_22, VAR_22->bpp * (VAR_22->avctx->pix_fmt == VAR_6),
                                    VAR_24, 1, VAR_26, 0, VAR_34, VAR_33);
                    VAR_26 += VAR_34;
                    VAR_33 += VAR_34;
                } else if (VAR_34 != -128) {
                    VAR_34 = (-VAR_34) + 1;
                    if (VAR_33 + VAR_34 > VAR_37) {
                        FUNC_3(VAR_22->avctx, VAR_2,
                               "Run went out of bounds\n");
                        return VAR_0;
                    }
                    VAR_31 = *VAR_26++;
                    FUNC_15(VAR_22, VAR_22->bpp * (VAR_22->avctx->pix_fmt == VAR_6),
                                    VAR_24, 0, ((void*)0), VAR_31, VAR_34, VAR_33);
                    VAR_33 += VAR_34;
                }
            }
            if (VAR_22->fill_order) {
                int VAR_46;
                for (VAR_46 = 0; VAR_46 < VAR_37; VAR_46++)
                    VAR_24[VAR_46] = VAR_21[VAR_24[VAR_46]];
            }
            break;
        }
        if (VAR_39) {
            FUNC_20(VAR_22, VAR_23, VAR_24, VAR_28 + VAR_32);
            VAR_32 += VAR_22->subsampling[1] - 1;
        } else if (VAR_23->format == VAR_5) {
            FUNC_19(VAR_22, VAR_23, VAR_24, VAR_28 + VAR_32, VAR_37, VAR_22->bpp);
        }
        VAR_24 += VAR_25;
    }
    return 0;
}
