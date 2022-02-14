
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xxch_mask_nbits; int xxch_core_mask; int ch_mask; int avctx; int gb; int nchannels; int xxch_crc_present; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,int *,int,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_9(DCACoreDecoder *VAR_10)
{
    int VAR_11, VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16 = FUNC_6(&VAR_10->gb);


    if (FUNC_7(&VAR_10->gb, 32) != VAR_8) {
        FUNC_0(VAR_10->avctx, VAR_2, "Invalid XXCH sync word\n");
        return VAR_0;
    }


    VAR_15 = FUNC_4(&VAR_10->gb, 6) + 1;


    if (FUNC_2(VAR_10->avctx, &VAR_10->gb, VAR_16 + 32, VAR_16 + VAR_15 * 8)) {
        FUNC_0(VAR_10->avctx, VAR_2, "Invalid XXCH frame header checksum\n");
        return VAR_0;
    }


    VAR_10->xxch_crc_present = FUNC_5(&VAR_10->gb);


    VAR_10->xxch_mask_nbits = FUNC_4(&VAR_10->gb, 5) + 1;
    if (VAR_10->xxch_mask_nbits <= VAR_3) {
        FUNC_0(VAR_10->avctx, VAR_2, "Invalid number of bits for XXCH speaker mask (%d)\n", VAR_10->xxch_mask_nbits);
        return VAR_0;
    }


    VAR_11 = FUNC_4(&VAR_10->gb, 2) + 1;
    if (VAR_11 > 1) {
        FUNC_1(VAR_10->avctx, "%d XXCH channel sets", VAR_11);
        return VAR_1;
    }


    VAR_12 = FUNC_4(&VAR_10->gb, 14) + 1;


    VAR_10->xxch_core_mask = FUNC_7(&VAR_10->gb, VAR_10->xxch_mask_nbits);


    VAR_14 = VAR_10->ch_mask;

    if ((VAR_14 & VAR_4) && (VAR_10->xxch_core_mask & VAR_5))
        VAR_14 = (VAR_14 & ~VAR_4) | VAR_5;

    if ((VAR_14 & VAR_6) && (VAR_10->xxch_core_mask & VAR_7))
        VAR_14 = (VAR_14 & ~VAR_6) | VAR_7;

    if (VAR_14 != VAR_10->xxch_core_mask) {
        FUNC_0(VAR_10->avctx, VAR_2, "XXCH core speaker activity mask (%#x) disagrees with core (%#x)\n", VAR_10->xxch_core_mask, VAR_14);
        return VAR_0;
    }




    if (FUNC_3(&VAR_10->gb, VAR_16 + VAR_15 * 8)) {
        FUNC_0(VAR_10->avctx, VAR_2, "Read past end of XXCH frame header\n");
        return VAR_0;
    }


    if ((VAR_13 = FUNC_8(VAR_10, VAR_9, VAR_10->nchannels)) < 0)
        return VAR_13;

    if (FUNC_3(&VAR_10->gb, VAR_16 + VAR_15 * 8 + VAR_12 * 8)) {
        FUNC_0(VAR_10->avctx, VAR_2, "Read past end of XXCH channel set\n");
        return VAR_0;
    }

    return 0;
}
