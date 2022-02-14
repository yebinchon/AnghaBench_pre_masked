
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_10__ {scalar_t__ pixel_type; } ;
struct TYPE_7__ {int (* bswap16_buf ) (scalar_t__*,scalar_t__*,int) ;} ;
struct TYPE_9__ {int nb_channels; TYPE_1__ bbdsp; TYPE_4__* channels; } ;
struct TYPE_8__ {scalar_t__ bitmap; scalar_t__ lut; int xsize; int ysize; scalar_t__ uncompressed_data; scalar_t__ tmp; } ;
typedef int GetByteContext ;
typedef TYPE_2__ EXRThreadData ;
typedef TYPE_3__ EXRContext ;
typedef TYPE_4__ EXRChannel ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int *,scalar_t__*,int) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_13 (scalar_t__*,int,int,int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(EXRContext *VAR_4, const uint8_t *VAR_5, int VAR_6,
                          int VAR_7, EXRThreadData *VAR_8)
{
    GetByteContext VAR_9;
    uint16_t VAR_10, VAR_11, VAR_12;
    uint16_t *VAR_13;
    uint16_t *VAR_14 = (uint16_t *)VAR_8->tmp;
    uint16_t *VAR_15;
    uint16_t *VAR_16;
    int VAR_17, VAR_18, VAR_19;
    int VAR_20;
    EXRChannel *VAR_21;
    int VAR_22;

    if (!VAR_8->bitmap)
        VAR_8->bitmap = FUNC_4(VAR_1);
    if (!VAR_8->lut)
        VAR_8->lut = FUNC_4(1 << 17);
    if (!VAR_8->bitmap || !VAR_8->lut) {
        FUNC_3(&VAR_8->bitmap);
        FUNC_3(&VAR_8->lut);
        return FUNC_0(VAR_2);
    }

    FUNC_7(&VAR_9, VAR_5, VAR_6);
    VAR_11 = FUNC_6(&VAR_9);
    VAR_12 = FUNC_6(&VAR_9);

    if (VAR_12 >= VAR_1)
        return VAR_0;

    FUNC_10(VAR_8->bitmap, 0, FUNC_1(VAR_11, VAR_1));
    if (VAR_11 <= VAR_12)
        FUNC_5(&VAR_9, VAR_8->bitmap + VAR_11,
                               VAR_12 - VAR_11 + 1);
    FUNC_10(VAR_8->bitmap + VAR_12 + 1, 0, VAR_1 - VAR_12 - 1);

    VAR_10 = FUNC_11(VAR_8->bitmap, VAR_8->lut);

    VAR_17 = FUNC_8(&VAR_9, VAR_14, VAR_7 / sizeof(uint16_t));
    if (VAR_17)
        return VAR_17;

    VAR_13 = VAR_14;
    for (VAR_18 = 0; VAR_18 < VAR_4->nb_channels; VAR_18++) {
        VAR_21 = &VAR_4->channels[VAR_18];

        if (VAR_21->pixel_type == VAR_3)
            VAR_20 = 1;
        else
            VAR_20 = 2;

        for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
            FUNC_13(VAR_13 + VAR_19, VAR_8->xsize, VAR_20, VAR_8->ysize,
                       VAR_8->xsize * VAR_20, VAR_10);
        VAR_13 += VAR_8->xsize * VAR_8->ysize * VAR_20;
    }

    FUNC_2(VAR_8->lut, VAR_14, VAR_7 / sizeof(uint16_t));

    VAR_15 = (uint16_t *)VAR_8->uncompressed_data;
    for (VAR_18 = 0; VAR_18 < VAR_8->ysize; VAR_18++) {
        VAR_22 = 0;
        for (VAR_19 = 0; VAR_19 < VAR_4->nb_channels; VAR_19++) {
            VAR_21 = &VAR_4->channels[VAR_19];
            if (VAR_21->pixel_type == VAR_3)
                VAR_20 = 1;
            else
                VAR_20 = 2;

            VAR_16 = VAR_14 + VAR_22 * VAR_8->xsize * VAR_8->ysize + VAR_18 * VAR_8->xsize * VAR_20;
            VAR_22 += VAR_20;




            FUNC_9(VAR_15, VAR_16, VAR_8->xsize * 2 * VAR_20);

            VAR_15 += VAR_8->xsize * VAR_20;
        }
    }

    return 0;
}
