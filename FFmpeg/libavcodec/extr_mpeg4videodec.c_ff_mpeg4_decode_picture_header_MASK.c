
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_29__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_35__ {int size_in_bits; } ;
struct TYPE_32__ {int studio_profile; scalar_t__ codec_tag; int low_delay; TYPE_29__* avctx; } ;
struct TYPE_34__ {scalar_t__ divx_version; scalar_t__ xvid_build; TYPE_1__ m; } ;
struct TYPE_33__ {int bits_per_raw_sample; int debug; int profile; int level; int flags; int has_b_frames; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;
typedef TYPE_3__ GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_29__*,int ,char*,...) ;
 int FUNC_3 (TYPE_29__*,char*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_3__*,int*,int*) ;
 int FUNC_14 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (TYPE_3__*,int) ;

int FUNC_18(Mpeg4DecContext *VAR_15, GetBitContext *VAR_16, int VAR_17)
{
    MpegEncContext *VAR_18 = &VAR_15->m;
    unsigned VAR_19, VAR_20;
    int VAR_21;
    int VAR_22 = 0;


    FUNC_1(VAR_16);




    if (!VAR_18->studio_profile && VAR_18->avctx->bits_per_raw_sample != 8)
        VAR_18->avctx->bits_per_raw_sample = 0;

    if (VAR_18->codec_tag == FUNC_0("WV1F") && FUNC_16(VAR_16, 24) == 0x575630) {
        FUNC_17(VAR_16, 24);
        if (FUNC_10(VAR_16, 8) == 0xF0)
            goto end;
    }

    VAR_19 = 0xff;
    for (;;) {
        if (FUNC_11(VAR_16) >= VAR_16->size_in_bits) {
            if (VAR_16->size_in_bits == 8 &&
                (VAR_15->divx_version >= 0 || VAR_15->xvid_build >= 0) || VAR_18->codec_tag == FUNC_0("QMP4")) {
                FUNC_2(VAR_18->avctx, VAR_5, "frame skip %d\n", VAR_16->size_in_bits);
                return VAR_9;
            } else if (VAR_17 && FUNC_11(VAR_16) == VAR_16->size_in_bits) {
                return 0;
            } else
                return VAR_0;
        }


        VAR_20 = FUNC_10(VAR_16, 8);
        VAR_19 = ((VAR_19 << 8) | VAR_20) & 0xffffffff;

        if ((VAR_19 & 0xFFFFFF00) != 0x100)
            continue;

        if (VAR_18->avctx->debug & VAR_7) {
            FUNC_2(VAR_18->avctx, VAR_3, "startcode: %3X ", VAR_19);
            if (VAR_19 <= 0x11F)
                FUNC_2(VAR_18->avctx, VAR_3, "Video Object Start");
            else if (VAR_19 <= 0x12F)
                FUNC_2(VAR_18->avctx, VAR_3, "Video Object Layer Start");
            else if (VAR_19 <= 0x13F)
                FUNC_2(VAR_18->avctx, VAR_3, "Reserved");
            else if (VAR_19 <= 0x15F)
                FUNC_2(VAR_18->avctx, VAR_3, "FGS bp start");
            else if (VAR_19 <= 0x1AF)
                FUNC_2(VAR_18->avctx, VAR_3, "Reserved");
            else if (VAR_19 == 0x1B0)
                FUNC_2(VAR_18->avctx, VAR_3, "Visual Object Seq Start");
            else if (VAR_19 == 0x1B1)
                FUNC_2(VAR_18->avctx, VAR_3, "Visual Object Seq End");
            else if (VAR_19 == 0x1B2)
                FUNC_2(VAR_18->avctx, VAR_3, "User Data");
            else if (VAR_19 == 0x1B3)
                FUNC_2(VAR_18->avctx, VAR_3, "Group of VOP start");
            else if (VAR_19 == 0x1B4)
                FUNC_2(VAR_18->avctx, VAR_3, "Video Session Error");
            else if (VAR_19 == 0x1B5)
                FUNC_2(VAR_18->avctx, VAR_3, "Visual Object Start");
            else if (VAR_19 == 0x1B6)
                FUNC_2(VAR_18->avctx, VAR_3, "Video Object Plane start");
            else if (VAR_19 == 0x1B7)
                FUNC_2(VAR_18->avctx, VAR_3, "slice start");
            else if (VAR_19 == 0x1B8)
                FUNC_2(VAR_18->avctx, VAR_3, "extension start");
            else if (VAR_19 == 0x1B9)
                FUNC_2(VAR_18->avctx, VAR_3, "fgs start");
            else if (VAR_19 == 0x1BA)
                FUNC_2(VAR_18->avctx, VAR_3, "FBA Object start");
            else if (VAR_19 == 0x1BB)
                FUNC_2(VAR_18->avctx, VAR_3, "FBA Object Plane start");
            else if (VAR_19 == 0x1BC)
                FUNC_2(VAR_18->avctx, VAR_3, "Mesh Object start");
            else if (VAR_19 == 0x1BD)
                FUNC_2(VAR_18->avctx, VAR_3, "Mesh Object Plane start");
            else if (VAR_19 == 0x1BE)
                FUNC_2(VAR_18->avctx, VAR_3, "Still Texture Object start");
            else if (VAR_19 == 0x1BF)
                FUNC_2(VAR_18->avctx, VAR_3, "Texture Spatial Layer start");
            else if (VAR_19 == 0x1C0)
                FUNC_2(VAR_18->avctx, VAR_3, "Texture SNR Layer start");
            else if (VAR_19 == 0x1C1)
                FUNC_2(VAR_18->avctx, VAR_3, "Texture Tile start");
            else if (VAR_19 == 0x1C2)
                FUNC_2(VAR_18->avctx, VAR_3, "Texture Shape Layer start");
            else if (VAR_19 == 0x1C3)
                FUNC_2(VAR_18->avctx, VAR_3, "stuffing start");
            else if (VAR_19 <= 0x1C5)
                FUNC_2(VAR_18->avctx, VAR_3, "reserved");
            else if (VAR_19 <= 0x1FF)
                FUNC_2(VAR_18->avctx, VAR_3, "System start");
            FUNC_2(VAR_18->avctx, VAR_3, " at %d\n", FUNC_11(VAR_16));
        }

        if (VAR_19 >= 0x120 && VAR_19 <= 0x12F) {
            if (VAR_22) {
                FUNC_2(VAR_18->avctx, VAR_6, "Ignoring multiple VOL headers\n");
                continue;
            }
            VAR_22++;
            if ((VAR_21 = FUNC_7(VAR_15, VAR_16)) < 0)
                return VAR_21;
        } else if (VAR_19 == VAR_11) {
            FUNC_6(VAR_15, VAR_16);
        } else if (VAR_19 == VAR_10) {
            FUNC_12(VAR_18, VAR_16);
        } else if (VAR_19 == VAR_14) {
            int VAR_23, VAR_24;
            FUNC_13(VAR_18, VAR_16, &VAR_23, &VAR_24);
            if (VAR_23 == VAR_8 &&
                (VAR_24 > 0 && VAR_24 < 9)) {
                VAR_18->studio_profile = 1;
                FUNC_15(VAR_16);
                FUNC_9(VAR_18, VAR_16, 0);
            } else if (VAR_18->studio_profile) {
                FUNC_3(VAR_18->avctx, "Mixes studio and non studio profile\n");
                return VAR_1;
            }
            VAR_18->avctx->profile = VAR_23;
            VAR_18->avctx->level = VAR_24;
        } else if (VAR_19 == VAR_12) {
            if (VAR_18->studio_profile) {
                if ((VAR_21 = FUNC_5(VAR_15, VAR_16)) < 0)
                    return VAR_21;
            } else
                FUNC_14(VAR_18, VAR_16);
        } else if (VAR_19 == VAR_13) {
            break;
        }

        FUNC_1(VAR_16);
        VAR_19 = 0xff;
    }

end:
    if (VAR_18->avctx->flags & VAR_2)
        VAR_18->low_delay = 1;
    VAR_18->avctx->has_b_frames = !VAR_18->low_delay;

    if (VAR_18->studio_profile) {
        if (!VAR_18->avctx->bits_per_raw_sample) {
            FUNC_2(VAR_18->avctx, VAR_4, "Missing VOL header\n");
            return VAR_0;
        }
        return FUNC_4(VAR_15, VAR_16);
    } else
        return FUNC_8(VAR_15, VAR_16);
}
