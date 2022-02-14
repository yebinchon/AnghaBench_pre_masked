
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {unsigned int crypt_byte_block; unsigned int skip_byte_block; int iv; int key_id; } ;
struct TYPE_15__ {int nb_streams; TYPE_5__** streams; } ;
struct TYPE_14__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {int size; } ;
struct TYPE_12__ {TYPE_8__* fc; } ;
struct TYPE_10__ {int per_sample_iv_size; TYPE_9__* default_encrypted_sample; scalar_t__ encryption_index; } ;
struct TYPE_11__ {scalar_t__ pseudo_stream_id; TYPE_1__ cenc; } ;
typedef TYPE_2__ MOVStreamContext ;
typedef int MOVEncryptionIndex ;
typedef TYPE_3__ MOVContext ;
typedef TYPE_4__ MOVAtom ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__* FUNC_1 (int ,int,int) ;
 int FUNC_2 (TYPE_8__*,int ,char*) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(MOVContext *VAR_4, AVIOContext *VAR_5, MOVAtom VAR_6)
{
    AVStream *VAR_7;
    MOVStreamContext *VAR_8;
    unsigned int VAR_9, VAR_10, VAR_11, VAR_12;

    if (VAR_4->fc->nb_streams < 1)
        return 0;
    VAR_7 = VAR_4->fc->streams[VAR_4->fc->nb_streams-1];
    VAR_8 = VAR_7->priv_data;

    if (VAR_8->pseudo_stream_id != 0) {
        FUNC_2(VAR_4->fc, VAR_2, "tenc atom are only supported in first sample descriptor\n");
        return VAR_1;
    }

    if (!VAR_8->cenc.default_encrypted_sample) {
        VAR_8->cenc.default_encrypted_sample = FUNC_1(0, 16, 16);
        if (!VAR_8->cenc.default_encrypted_sample) {
            return FUNC_0(VAR_3);
        }
    }

    if (VAR_6.size < 20)
        return VAR_0;

    VAR_9 = FUNC_4(VAR_5);
    FUNC_5(VAR_5);

    FUNC_4(VAR_5);
    VAR_10 = FUNC_4(VAR_5);

    if (VAR_9 > 0) {
        VAR_8->cenc.default_encrypted_sample->crypt_byte_block = VAR_10 >> 4;
        VAR_8->cenc.default_encrypted_sample->skip_byte_block = VAR_10 & 0xf;
    }

    VAR_11 = FUNC_4(VAR_5);
    if (VAR_11 && !VAR_8->cenc.encryption_index) {

        VAR_8->cenc.encryption_index = FUNC_3(sizeof(MOVEncryptionIndex));
        if (!VAR_8->cenc.encryption_index)
            return FUNC_0(VAR_3);
    }
    VAR_8->cenc.per_sample_iv_size = FUNC_4(VAR_5);
    if (VAR_8->cenc.per_sample_iv_size != 0 && VAR_8->cenc.per_sample_iv_size != 8 &&
        VAR_8->cenc.per_sample_iv_size != 16) {
        FUNC_2(VAR_4->fc, VAR_2, "invalid per-sample IV size value\n");
        return VAR_0;
    }
    if (FUNC_6(VAR_5, VAR_8->cenc.default_encrypted_sample->key_id, 16) != 16) {
        FUNC_2(VAR_4->fc, VAR_2, "failed to read the default key ID\n");
        return VAR_0;
    }

    if (VAR_11 && !VAR_8->cenc.per_sample_iv_size) {
        VAR_12 = FUNC_4(VAR_5);
        if (VAR_12 != 8 && VAR_12 != 16) {
            FUNC_2(VAR_4->fc, VAR_2, "invalid default_constant_IV_size in tenc atom\n");
            return VAR_0;
        }

        if (FUNC_6(VAR_5, VAR_8->cenc.default_encrypted_sample->iv, VAR_12) != VAR_12) {
            FUNC_2(VAR_4->fc, VAR_2, "failed to read the default IV\n");
            return VAR_0;
        }
    }

    return 0;
}
