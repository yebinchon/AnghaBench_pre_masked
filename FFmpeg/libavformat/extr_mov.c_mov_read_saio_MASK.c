
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_29__ {scalar_t__ eof_reached; } ;
struct TYPE_25__ {scalar_t__ base_data_offset; } ;
struct TYPE_24__ {scalar_t__ current; } ;
struct TYPE_28__ {int fc; TYPE_4__ fragment; TYPE_3__ frag_index; } ;
struct TYPE_27__ {int auxiliary_offsets_count; scalar_t__ auxiliary_info_sample_count; void** auxiliary_offsets; scalar_t__ nb_encrypted_samples; } ;
struct TYPE_23__ {TYPE_1__* default_encrypted_sample; } ;
struct TYPE_26__ {TYPE_2__ cenc; } ;
struct TYPE_22__ {unsigned int scheme; } ;
typedef TYPE_5__ MOVStreamContext ;
typedef TYPE_6__ MOVEncryptionIndex ;
typedef TYPE_7__ MOVContext ;
typedef int MOVAtom ;
typedef TYPE_8__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int VAR_4 ;
 unsigned int FUNC_3 (char,char,char,char) ;
 void** FUNC_4 (void**,unsigned int*,unsigned int) ;
 int FUNC_5 (void***) ;
 int FUNC_6 (int ,int ,char*) ;
 unsigned int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*) ;
 void* FUNC_9 (TYPE_8__*) ;
 void* FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_7__*,TYPE_6__**,TYPE_5__**) ;
 int FUNC_12 (TYPE_7__*,TYPE_5__*,TYPE_8__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_13(MOVContext *VAR_5, AVIOContext *VAR_6, MOVAtom VAR_7)
{
    uint64_t *VAR_8;
    MOVEncryptionIndex *VAR_9;
    MOVStreamContext *VAR_10;
    int VAR_11, VAR_12;
    unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
    unsigned int VAR_17 = 0;

    VAR_12 = FUNC_11(VAR_5, &VAR_9, &VAR_10);
    if (VAR_12 != 1)
        return VAR_12;

    if (VAR_9->nb_encrypted_samples) {

        FUNC_6(VAR_5->fc, VAR_1, "Ignoring duplicate encryption info in saio\n");
        return 0;
    }

    if (VAR_9->auxiliary_offsets_count) {
        FUNC_6(VAR_5->fc, VAR_2, "Duplicate saio atom\n");
        return VAR_0;
    }

    VAR_13 = FUNC_7(VAR_6);
    if (FUNC_8(VAR_6) & 0x01) {
        VAR_15 = FUNC_9(VAR_6);
        VAR_16 = FUNC_9(VAR_6);
        if (VAR_10->cenc.default_encrypted_sample) {
            if (VAR_15 != VAR_10->cenc.default_encrypted_sample->scheme) {
                FUNC_6(VAR_5->fc, VAR_1, "Ignoring saio box with non-zero aux_info_type\n");
                return 0;
            }
            if (VAR_16 != 0) {
                FUNC_6(VAR_5->fc, VAR_1, "Ignoring saio box with non-zero aux_info_type_parameter\n");
                return 0;
            }
        } else {

            if ((VAR_15 == FUNC_3('c','e','n','c') ||
                 VAR_15 == FUNC_3('c','e','n','s') ||
                 VAR_15 == FUNC_3('c','b','c','1') ||
                 VAR_15 == FUNC_3('c','b','c','s')) &&
                VAR_16 == 0) {
                FUNC_6(VAR_5->fc, VAR_2, "Saw encrypted saio without schm/tenc\n");
                return VAR_0;
            } else {
                return 0;
            }
        }
    } else if (!VAR_10->cenc.default_encrypted_sample) {

        return 0;
    }

    VAR_14 = FUNC_9(VAR_6);
    if (VAR_14 >= VAR_4 / sizeof(*VAR_8))
        return FUNC_0(VAR_3);

    for (VAR_11 = 0; VAR_11 < VAR_14 && !VAR_6->eof_reached; VAR_11++) {
        unsigned int VAR_18 = FUNC_2(FUNC_1(VAR_11 + 1, 1024), VAR_14);
        VAR_8 = FUNC_4(
            VAR_9->auxiliary_offsets, &VAR_17,
            VAR_18 * sizeof(*VAR_8));
        if (!VAR_8) {
            FUNC_5(&VAR_9->auxiliary_offsets);
            return FUNC_0(VAR_3);
        }
        VAR_9->auxiliary_offsets = VAR_8;

        if (VAR_13 == 0) {
            VAR_9->auxiliary_offsets[VAR_11] = FUNC_9(VAR_6);
        } else {
            VAR_9->auxiliary_offsets[VAR_11] = FUNC_10(VAR_6);
        }
        if (VAR_5->frag_index.current >= 0) {
            VAR_9->auxiliary_offsets[VAR_11] += VAR_5->fragment.base_data_offset;
        }
    }

    if (VAR_6->eof_reached) {
        FUNC_6(VAR_5->fc, VAR_2, "Hit EOF while reading saio\n");
        FUNC_5(&VAR_9->auxiliary_offsets);
        return VAR_0;
    }

    VAR_9->auxiliary_offsets_count = VAR_14;

    if (VAR_9->auxiliary_info_sample_count) {
        return FUNC_12(VAR_5, VAR_10, VAR_6, VAR_9);
    }

    return 0;
}
