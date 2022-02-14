
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_26__ {int size; int data; } ;
struct TYPE_25__ {int id; } ;
struct TYPE_19__ {int stsd_id; } ;
struct TYPE_18__ {int current; } ;
struct TYPE_24__ {scalar_t__ decryption_key; int fc; TYPE_1__ fragment; TYPE_10__ frag_index; } ;
struct TYPE_23__ {int nb_encrypted_samples; int ** encrypted_samples; scalar_t__ auxiliary_offsets_count; scalar_t__ auxiliary_info_sample_count; } ;
struct TYPE_22__ {int index_entry; TYPE_5__* encryption_index; } ;
struct TYPE_20__ {int * default_encrypted_sample; TYPE_5__* encryption_index; } ;
struct TYPE_21__ {TYPE_2__ cenc; } ;
typedef TYPE_3__ MOVStreamContext ;
typedef TYPE_4__ MOVFragmentStreamInfo ;
typedef TYPE_5__ MOVEncryptionIndex ;
typedef TYPE_6__ MOVContext ;
typedef TYPE_7__ AVStream ;
typedef TYPE_8__ AVPacket ;
typedef int AVEncryptionInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (TYPE_8__*,int ,int *,size_t) ;
 int FUNC_5 (TYPE_6__*,TYPE_3__*,int *,int ,int ) ;
 TYPE_4__* FUNC_6 (TYPE_10__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(MOVContext *VAR_4, AVStream* VAR_5, MOVStreamContext *VAR_6, AVPacket *VAR_7, int VAR_8)
{
    MOVFragmentStreamInfo *VAR_9;
    MOVEncryptionIndex *VAR_10;
    AVEncryptionInfo *VAR_11;
    int VAR_12, VAR_13;

    VAR_9 = FUNC_6(&VAR_4->frag_index, VAR_4->frag_index.current, VAR_5->id);
    VAR_12 = VAR_8;
    VAR_10 = ((void*)0);
    if (VAR_9) {

        if (VAR_4->fragment.stsd_id == 1) {
            if (VAR_9->encryption_index) {
                VAR_12 = VAR_8 - VAR_9->index_entry;
                VAR_10 = VAR_9->encryption_index;
            } else {
                VAR_10 = VAR_6->cenc.encryption_index;
            }
        }
    } else {
        VAR_10 = VAR_6->cenc.encryption_index;
    }

    if (VAR_10) {
        if (VAR_10->auxiliary_info_sample_count &&
            !VAR_10->nb_encrypted_samples) {
            FUNC_3(VAR_4->fc, VAR_1, "saiz atom found without saio\n");
            return VAR_0;
        }
        if (VAR_10->auxiliary_offsets_count &&
            !VAR_10->nb_encrypted_samples) {
            FUNC_3(VAR_4->fc, VAR_1, "saio atom found without saiz\n");
            return VAR_0;
        }

        if (!VAR_10->nb_encrypted_samples) {

            VAR_11 = VAR_6->cenc.default_encrypted_sample;
        } else if (VAR_12 >= 0 && VAR_12 < VAR_10->nb_encrypted_samples) {

            VAR_11 = VAR_10->encrypted_samples[VAR_12];
        } else {
            FUNC_3(VAR_4->fc, VAR_1, "Incorrect number of samples in encryption info\n");
            return VAR_0;
        }

        if (VAR_4->decryption_key) {
            return FUNC_5(VAR_4, VAR_6, VAR_11, VAR_7->data, VAR_7->size);
        } else {
            size_t VAR_14;
            uint8_t *VAR_15 = FUNC_1(VAR_11, &VAR_14);
            if (!VAR_15)
                return FUNC_0(VAR_3);
            VAR_13 = FUNC_4(VAR_7, VAR_2, VAR_15, VAR_14);
            if (VAR_13 < 0)
                FUNC_2(VAR_15);
            return VAR_13;
        }
    }

    return 0;
}
