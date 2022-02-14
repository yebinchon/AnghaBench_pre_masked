
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_19__ {int seekable; scalar_t__ eof_reached; } ;
struct TYPE_18__ {int fc; } ;
struct TYPE_17__ {size_t nb_encrypted_samples; size_t auxiliary_info_sample_count; int auxiliary_offsets_count; scalar_t__* auxiliary_offsets; size_t auxiliary_info_default_size; size_t* auxiliary_info_sizes; int ** encrypted_samples; } ;
struct TYPE_15__ {size_t per_sample_iv_size; } ;
struct TYPE_16__ {TYPE_1__ cenc; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVEncryptionIndex ;
typedef TYPE_4__ MOVContext ;
typedef TYPE_5__ AVIOContext ;
typedef int AVEncryptionInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (size_t,int) ;
 unsigned int FUNC_2 (int ,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int ** FUNC_4 (int **,unsigned int*,unsigned int) ;
 int FUNC_5 (int ***) ;
 int FUNC_6 (int ,int ,char*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*,TYPE_2__*,int **,int) ;

__attribute__((used)) static int FUNC_10(MOVContext *VAR_8, MOVStreamContext *VAR_9, AVIOContext *VAR_10, MOVEncryptionIndex *VAR_11)
{
    AVEncryptionInfo **VAR_12, **VAR_13;
    int64_t VAR_14;
    size_t VAR_15, VAR_16, VAR_17;
    int VAR_18 = 0;
    unsigned int VAR_19 = 0;

    if (VAR_11->nb_encrypted_samples)
        return 0;
    VAR_15 = VAR_11->auxiliary_info_sample_count;
    if (VAR_11->auxiliary_offsets_count != 1) {
        FUNC_6(VAR_8->fc, VAR_3, "Multiple auxiliary info chunks are not supported\n");
        return VAR_1;
    }
    if (VAR_15 >= VAR_6 / sizeof(*VAR_13))
        return FUNC_0(VAR_5);

    VAR_14 = FUNC_8(VAR_10);
    if (!(VAR_10->seekable & VAR_2) ||
        FUNC_7(VAR_10, VAR_11->auxiliary_offsets[0], VAR_7) != VAR_11->auxiliary_offsets[0]) {
        FUNC_6(VAR_8->fc, VAR_4, "Failed to seek for auxiliary info, will only parse senc atoms for encryption info\n");
        goto finish;
    }

    for (VAR_17 = 0; VAR_17 < VAR_15 && !VAR_10->eof_reached; VAR_17++) {
        unsigned int VAR_20 = FUNC_2(FUNC_1(VAR_17 + 1, 1024 * 1024), VAR_15);
        VAR_13 = FUNC_4(VAR_11->encrypted_samples, &VAR_19,
                                            VAR_20 * sizeof(*VAR_13));
        if (!VAR_13) {
            VAR_18 = FUNC_0(VAR_5);
            goto finish;
        }
        VAR_11->encrypted_samples = VAR_13;

        VAR_12 = &VAR_11->encrypted_samples[VAR_17];
        VAR_16 = VAR_11->auxiliary_info_default_size
                               ? VAR_11->auxiliary_info_default_size
                               : VAR_11->auxiliary_info_sizes[VAR_17];

        VAR_18 = FUNC_9(VAR_8, VAR_10, VAR_9, VAR_12, VAR_16 > VAR_9->cenc.per_sample_iv_size);
        if (VAR_18 < 0)
            goto finish;
    }
    if (VAR_10->eof_reached) {
        FUNC_6(VAR_8->fc, VAR_3, "Hit EOF while reading auxiliary info\n");
        VAR_18 = VAR_0;
    } else {
        VAR_11->nb_encrypted_samples = VAR_15;
    }

finish:
    FUNC_7(VAR_10, VAR_14, VAR_7);
    if (VAR_18 < 0) {
        for (; VAR_17 > 0; VAR_17--) {
            FUNC_3(VAR_11->encrypted_samples[VAR_17 - 1]);
        }
        FUNC_5(&VAR_11->encrypted_samples);
    }
    return VAR_18;
}
