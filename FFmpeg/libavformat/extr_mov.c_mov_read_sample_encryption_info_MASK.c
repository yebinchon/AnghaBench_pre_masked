
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


struct TYPE_22__ {unsigned int subsample_count; TYPE_13__* subsamples; int iv; } ;
struct TYPE_21__ {scalar_t__ eof_reached; } ;
struct TYPE_20__ {int fc; } ;
struct TYPE_18__ {scalar_t__ per_sample_iv_size; int default_encrypted_sample; } ;
struct TYPE_19__ {TYPE_1__ cenc; } ;
struct TYPE_17__ {int bytes_of_protected_data; void* bytes_of_clear_data; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ MOVContext ;
typedef int AVSubsampleEncryptionInfo ;
typedef TYPE_4__ AVIOContext ;
typedef TYPE_5__ AVEncryptionInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_13__*) ;
 int FUNC_4 (int ,int ,char*) ;
 TYPE_13__* FUNC_5 (unsigned int,int) ;
 void* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(MOVContext *VAR_3, AVIOContext *VAR_4, MOVStreamContext *VAR_5, AVEncryptionInfo **VAR_6, int VAR_7)
{
    int VAR_8;
    unsigned int VAR_9;
    AVSubsampleEncryptionInfo *VAR_10;

    if (!VAR_5->cenc.default_encrypted_sample) {
        FUNC_4(VAR_3->fc, VAR_1, "Missing schm or tenc\n");
        return VAR_0;
    }

    *VAR_6 = FUNC_1(VAR_5->cenc.default_encrypted_sample);
    if (!*VAR_6)
        return FUNC_0(VAR_2);

    if (VAR_5->cenc.per_sample_iv_size != 0) {
        if (FUNC_8(VAR_4, (*VAR_6)->iv, VAR_5->cenc.per_sample_iv_size) != VAR_5->cenc.per_sample_iv_size) {
            FUNC_4(VAR_3->fc, VAR_1, "failed to read the initialization vector\n");
            FUNC_2(*VAR_6);
            *VAR_6 = ((void*)0);
            return VAR_0;
        }
    }

    if (VAR_7) {
        VAR_9 = FUNC_6(VAR_4);
        FUNC_3((*VAR_6)->subsamples);
        (*VAR_6)->subsamples = FUNC_5(VAR_9, sizeof(*VAR_10));
        if (!(*VAR_6)->subsamples) {
            FUNC_2(*VAR_6);
            *VAR_6 = ((void*)0);
            return FUNC_0(VAR_2);
        }

        for (VAR_8 = 0; VAR_8 < VAR_9 && !VAR_4->eof_reached; VAR_8++) {
            (*VAR_6)->subsamples[VAR_8].bytes_of_clear_data = FUNC_6(VAR_4);
            (*VAR_6)->subsamples[VAR_8].bytes_of_protected_data = FUNC_7(VAR_4);
        }

        if (VAR_4->eof_reached) {
            FUNC_4(VAR_3->fc, VAR_1, "hit EOF while reading sub-sample encryption info\n");
            FUNC_2(*VAR_6);
            *VAR_6 = ((void*)0);
            return VAR_0;
        }
        (*VAR_6)->subsample_count = VAR_9;
    }

    return 0;
}
