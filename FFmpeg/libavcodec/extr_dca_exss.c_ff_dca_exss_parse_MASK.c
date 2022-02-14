
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int asset_offset; int asset_size; } ;
struct TYPE_6__ {int exss_index; int exss_size_nbits; int exss_size; int static_fields_present; int npresents; int nassets; int mix_metadata_enabled; int nmixoutconfigs; scalar_t__ avctx; int gb; TYPE_2__* assets; int * nmixoutchs; } ;
typedef TYPE_1__ DCAExssParser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;

int FUNC_13(DCAExssParser *VAR_3, const uint8_t *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    if ((VAR_7 = FUNC_8(&VAR_3->gb, VAR_4, VAR_5)) < 0)
        return VAR_7;


    FUNC_12(&VAR_3->gb, 32);


    FUNC_11(&VAR_3->gb, 8);


    VAR_3->exss_index = FUNC_6(&VAR_3->gb, 2);


    VAR_9 = FUNC_7(&VAR_3->gb);


    VAR_10 = FUNC_6(&VAR_3->gb, 8 + 4 * VAR_9) + 1;


    if (VAR_3->avctx && FUNC_3(VAR_3->avctx, &VAR_3->gb, 32 + 8, VAR_10 * 8)) {
        FUNC_0(VAR_3->avctx, VAR_2, "Invalid EXSS header checksum\n");
        return VAR_0;
    }

    VAR_3->exss_size_nbits = 16 + 4 * VAR_9;


    VAR_3->exss_size = FUNC_6(&VAR_3->gb, VAR_3->exss_size_nbits) + 1;
    if (VAR_3->exss_size > VAR_5) {
        if (VAR_3->avctx)
            FUNC_0(VAR_3->avctx, VAR_2, "Packet too short for EXSS frame\n");
        return VAR_0;
    }


    if ((VAR_3->static_fields_present = FUNC_7(&VAR_3->gb))) {
        int VAR_11[8];


        FUNC_11(&VAR_3->gb, 2);


        FUNC_11(&VAR_3->gb, 3);


        if (FUNC_7(&VAR_3->gb))

            FUNC_12(&VAR_3->gb, 36);


        VAR_3->npresents = FUNC_6(&VAR_3->gb, 3) + 1;
        if (VAR_3->npresents > 1) {
            if (VAR_3->avctx)
                FUNC_2(VAR_3->avctx, "%d audio presentations", VAR_3->npresents);
            return VAR_1;
        }


        VAR_3->nassets = FUNC_6(&VAR_3->gb, 3) + 1;
        if (VAR_3->nassets > 1) {
            if (VAR_3->avctx)
                FUNC_2(VAR_3->avctx, "%d audio assets", VAR_3->nassets);
            return VAR_1;
        }


        for (VAR_6 = 0; VAR_6 < VAR_3->npresents; VAR_6++)
            VAR_11[VAR_6] = FUNC_6(&VAR_3->gb, VAR_3->exss_index + 1);


        for (VAR_6 = 0; VAR_6 < VAR_3->npresents; VAR_6++)
            FUNC_12(&VAR_3->gb, FUNC_1(VAR_11[VAR_6]) * 8);


        if ((VAR_3->mix_metadata_enabled = FUNC_7(&VAR_3->gb))) {
            int VAR_12;


            FUNC_11(&VAR_3->gb, 2);


            VAR_12 = (FUNC_6(&VAR_3->gb, 2) + 1) << 2;


            VAR_3->nmixoutconfigs = FUNC_6(&VAR_3->gb, 2) + 1;


            for (VAR_6 = 0; VAR_6 < VAR_3->nmixoutconfigs; VAR_6++)
                VAR_3->nmixoutchs[VAR_6] = FUNC_4(FUNC_6(&VAR_3->gb, VAR_12));
        }
    } else {
        VAR_3->npresents = 1;
        VAR_3->nassets = 1;
    }


    VAR_8 = VAR_10;
    for (VAR_6 = 0; VAR_6 < VAR_3->nassets; VAR_6++) {
        VAR_3->assets[VAR_6].asset_offset = VAR_8;
        VAR_3->assets[VAR_6].asset_size = FUNC_6(&VAR_3->gb, VAR_3->exss_size_nbits) + 1;
        VAR_8 += VAR_3->assets[VAR_6].asset_size;
        if (VAR_8 > VAR_3->exss_size) {
            if (VAR_3->avctx)
                FUNC_0(VAR_3->avctx, VAR_2, "EXSS asset out of bounds\n");
            return VAR_0;
        }
    }


    for (VAR_6 = 0; VAR_6 < VAR_3->nassets; VAR_6++) {
        if ((VAR_7 = FUNC_9(VAR_3, &VAR_3->assets[VAR_6])) < 0)
            return VAR_7;
        if ((VAR_7 = FUNC_10(&VAR_3->assets[VAR_6])) < 0) {
            if (VAR_3->avctx)
                FUNC_0(VAR_3->avctx, VAR_2, "Invalid extension size in EXSS asset descriptor\n");
            return VAR_7;
        }
    }







    if (FUNC_5(&VAR_3->gb, VAR_10 * 8)) {
        if (VAR_3->avctx)
            FUNC_0(VAR_3->avctx, VAR_2, "Read past end of EXSS header\n");
        return VAR_0;
    }

    return 0;
}
