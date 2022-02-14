
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int num; int den; } ;
struct TYPE_6__ {int profile_idc; int constraint_set_flags; int id; int chroma_format_idc; int bit_depth_luma; int frame_mbs_only_flag; TYPE_3__ sar; void* level_idc; } ;
typedef TYPE_1__ H264SequenceParameterSet ;
typedef int GetBitContext ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_3__* VAR_0 ;
 int * FUNC_3 (int const*,int,int*,int ) ;
 void* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

H264SequenceParameterSet *FUNC_11(const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9;
    int VAR_10, VAR_11 = 8, VAR_12 = 8;
    int VAR_13;
    H264SequenceParameterSet *VAR_14 = ((void*)0);
    GetBitContext VAR_15;
    uint8_t *VAR_16;

    VAR_16 = FUNC_3(VAR_1, VAR_2, &VAR_6, 0);
    if (!VAR_16)
        return ((void*)0);

    VAR_5 = FUNC_8(&VAR_15, VAR_16, VAR_6);
    if (VAR_5 < 0)
        goto end;

    VAR_14 = FUNC_2(sizeof(*VAR_14));
    if (!VAR_14)
        goto end;

    VAR_14->profile_idc = FUNC_4(&VAR_15, 8);
    VAR_14->constraint_set_flags |= FUNC_5(&VAR_15) << 0;
    VAR_14->constraint_set_flags |= FUNC_5(&VAR_15) << 1;
    VAR_14->constraint_set_flags |= FUNC_5(&VAR_15) << 2;
    VAR_14->constraint_set_flags |= FUNC_5(&VAR_15) << 3;
    VAR_14->constraint_set_flags |= FUNC_5(&VAR_15) << 4;
    VAR_14->constraint_set_flags |= FUNC_5(&VAR_15) << 5;
    FUNC_9(&VAR_15, 2);
    VAR_14->level_idc = FUNC_4(&VAR_15, 8);
    VAR_14->id = FUNC_7(&VAR_15);

    if (VAR_14->profile_idc == 100 || VAR_14->profile_idc == 110 ||
        VAR_14->profile_idc == 122 || VAR_14->profile_idc == 244 || VAR_14->profile_idc == 44 ||
        VAR_14->profile_idc == 83 || VAR_14->profile_idc == 86 || VAR_14->profile_idc == 118 ||
        VAR_14->profile_idc == 128 || VAR_14->profile_idc == 138 || VAR_14->profile_idc == 139 ||
        VAR_14->profile_idc == 134) {
        VAR_14->chroma_format_idc = FUNC_7(&VAR_15);
        if (VAR_14->chroma_format_idc == 3) {
            FUNC_10(&VAR_15);
        }
        VAR_14->bit_depth_luma = FUNC_7(&VAR_15) + 8;
        FUNC_7(&VAR_15);
        FUNC_10(&VAR_15);
        if (FUNC_5(&VAR_15)) {
            for (VAR_3 = 0; VAR_3 < ((VAR_14->chroma_format_idc != 3) ? 8 : 12); VAR_3++) {
                if (!FUNC_5(&VAR_15))
                    continue;
                VAR_11 = 8;
                VAR_12 = 8;
                VAR_13 = VAR_3 < 6 ? 16 : 64;
                for (VAR_4 = 0; VAR_4 < VAR_13; VAR_4++) {
                    if (VAR_12 != 0) {
                        VAR_10 = FUNC_6(&VAR_15);
                        VAR_12 = (VAR_11 + VAR_10) & 0xff;
                    }
                    VAR_11 = VAR_12 == 0 ? VAR_11 : VAR_12;
                }
            }
        }
    } else {
        VAR_14->chroma_format_idc = 1;
        VAR_14->bit_depth_luma = 8;
    }

    FUNC_7(&VAR_15);
    VAR_8 = FUNC_7(&VAR_15);

    if (VAR_8 == 0) {
        FUNC_7(&VAR_15);
    } else if (VAR_8 == 1) {
        FUNC_10(&VAR_15);
        FUNC_6(&VAR_15);
        FUNC_6(&VAR_15);
        VAR_9 = FUNC_7(&VAR_15);
        for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3++)
            FUNC_6(&VAR_15);
    }

    FUNC_7(&VAR_15);
    FUNC_10(&VAR_15);
    FUNC_7(&VAR_15);
    FUNC_7(&VAR_15);

    VAR_14->frame_mbs_only_flag = FUNC_5(&VAR_15);
    if (!VAR_14->frame_mbs_only_flag)
        FUNC_10(&VAR_15);

    FUNC_10(&VAR_15);

    if (FUNC_5(&VAR_15)) {
        FUNC_7(&VAR_15);
        FUNC_7(&VAR_15);
        FUNC_7(&VAR_15);
        FUNC_7(&VAR_15);
    }

    if (FUNC_5(&VAR_15)) {
        if (FUNC_5(&VAR_15)) {
            VAR_7 = FUNC_4(&VAR_15, 8);
            if (VAR_7 == 0xff) {
                VAR_14->sar.num = FUNC_4(&VAR_15, 16);
                VAR_14->sar.den = FUNC_4(&VAR_15, 16);
            } else if (VAR_7 < FUNC_0(VAR_0)) {
                VAR_14->sar = VAR_0[VAR_7];
            }
        }
    }

    if (!VAR_14->sar.den) {
        VAR_14->sar.num = 1;
        VAR_14->sar.den = 1;
    }

 end:
    FUNC_1(VAR_16);
    return VAR_14;
}
