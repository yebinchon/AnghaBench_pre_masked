
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int fc; } ;
struct TYPE_16__ {int auxiliary_info_sample_count; scalar_t__ auxiliary_info_default_size; scalar_t__ auxiliary_offsets_count; int auxiliary_info_sizes; scalar_t__ nb_encrypted_samples; } ;
struct TYPE_14__ {TYPE_1__* default_encrypted_sample; } ;
struct TYPE_15__ {TYPE_2__ cenc; } ;
struct TYPE_13__ {unsigned int scheme; } ;
typedef TYPE_3__ MOVStreamContext ;
typedef TYPE_4__ MOVEncryptionIndex ;
typedef TYPE_5__ MOVContext ;
typedef int MOVAtom ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__**,TYPE_3__**) ;
 int FUNC_6 (TYPE_5__*,TYPE_3__*,int *,TYPE_4__*) ;
 int FUNC_7 (int *,unsigned int,int *) ;

__attribute__((used)) static int FUNC_8(MOVContext *VAR_3, AVIOContext *VAR_4, MOVAtom VAR_5)
{
    MOVEncryptionIndex *VAR_6;
    MOVStreamContext *VAR_7;
    int VAR_8;
    unsigned int VAR_9, VAR_10, VAR_11;

    VAR_8 = FUNC_5(VAR_3, &VAR_6, &VAR_7);
    if (VAR_8 != 1)
        return VAR_8;

    if (VAR_6->nb_encrypted_samples) {

        FUNC_1(VAR_3->fc, VAR_1, "Ignoring duplicate encryption info in saiz\n");
        return 0;
    }

    if (VAR_6->auxiliary_info_sample_count) {
        FUNC_1(VAR_3->fc, VAR_2, "Duplicate saiz atom\n");
        return VAR_0;
    }

    FUNC_2(VAR_4);
    if (FUNC_3(VAR_4) & 0x01) {
        VAR_10 = FUNC_4(VAR_4);
        VAR_11 = FUNC_4(VAR_4);
        if (VAR_7->cenc.default_encrypted_sample) {
            if (VAR_10 != VAR_7->cenc.default_encrypted_sample->scheme) {
                FUNC_1(VAR_3->fc, VAR_1, "Ignoring saiz box with non-zero aux_info_type\n");
                return 0;
            }
            if (VAR_11 != 0) {
                FUNC_1(VAR_3->fc, VAR_1, "Ignoring saiz box with non-zero aux_info_type_parameter\n");
                return 0;
            }
        } else {

            if ((VAR_10 == FUNC_0('c','e','n','c') ||
                 VAR_10 == FUNC_0('c','e','n','s') ||
                 VAR_10 == FUNC_0('c','b','c','1') ||
                 VAR_10 == FUNC_0('c','b','c','s')) &&
                VAR_11 == 0) {
                FUNC_1(VAR_3->fc, VAR_2, "Saw encrypted saiz without schm/tenc\n");
                return VAR_0;
            } else {
                return 0;
            }
        }
    } else if (!VAR_7->cenc.default_encrypted_sample) {

        return 0;
    }

    VAR_6->auxiliary_info_default_size = FUNC_2(VAR_4);
    VAR_9 = FUNC_4(VAR_4);
    VAR_6->auxiliary_info_sample_count = VAR_9;

    if (VAR_6->auxiliary_info_default_size == 0) {
        VAR_8 = FUNC_7(VAR_4, VAR_9, &VAR_6->auxiliary_info_sizes);
        if (VAR_8 < 0) {
            FUNC_1(VAR_3->fc, VAR_2, "Failed to read the auxiliary info\n");
            return VAR_8;
        }
    }

    if (VAR_6->auxiliary_offsets_count) {
        return FUNC_6(VAR_3, VAR_7, VAR_4, VAR_6);
    }

    return 0;
}
