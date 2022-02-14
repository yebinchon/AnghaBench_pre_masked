
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {scalar_t__ scheme; scalar_t__ crypt_byte_block; scalar_t__ skip_byte_block; int subsample_count; TYPE_2__* subsamples; int iv; } ;
struct TYPE_12__ {int fc; int decryption_key; } ;
struct TYPE_9__ {scalar_t__ aes_ctr; } ;
struct TYPE_11__ {TYPE_1__ cenc; } ;
struct TYPE_10__ {int bytes_of_clear_data; int bytes_of_protected_data; } ;
typedef TYPE_3__ MOVStreamContext ;
typedef TYPE_4__ MOVContext ;
typedef TYPE_5__ AVEncryptionInfo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char,char,char,char) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int *,int *,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_7(MOVContext *VAR_4, MOVStreamContext *VAR_5, AVEncryptionInfo *VAR_6, uint8_t *VAR_7, int VAR_8)
{
    int VAR_9, VAR_10;

    if (VAR_6->scheme != FUNC_1('c','e','n','c') || VAR_6->crypt_byte_block != 0 || VAR_6->skip_byte_block != 0) {
        FUNC_6(VAR_4->fc, VAR_2, "Only the 'cenc' encryption scheme is supported\n");
        return VAR_1;
    }

    if (!VAR_5->cenc.aes_ctr) {

        VAR_5->cenc.aes_ctr = FUNC_2();
        if (!VAR_5->cenc.aes_ctr) {
            return FUNC_0(VAR_3);
        }

        VAR_10 = FUNC_4(VAR_5->cenc.aes_ctr, VAR_4->decryption_key);
        if (VAR_10 < 0) {
            return VAR_10;
        }
    }

    FUNC_5(VAR_5->cenc.aes_ctr, VAR_6->iv);

    if (!VAR_6->subsample_count)
    {

        FUNC_3(VAR_5->cenc.aes_ctr, VAR_7, VAR_7, VAR_8);
        return 0;
    }

    for (VAR_9 = 0; VAR_9 < VAR_6->subsample_count; VAR_9++)
    {
        if (VAR_6->subsamples[VAR_9].bytes_of_clear_data + VAR_6->subsamples[VAR_9].bytes_of_protected_data > VAR_8) {
            FUNC_6(VAR_4->fc, VAR_2, "subsample size exceeds the packet size left\n");
            return VAR_0;
        }


        VAR_7 += VAR_6->subsamples[VAR_9].bytes_of_clear_data;
        VAR_8 -= VAR_6->subsamples[VAR_9].bytes_of_clear_data;


        FUNC_3(VAR_5->cenc.aes_ctr, VAR_7, VAR_7, VAR_6->subsamples[VAR_9].bytes_of_protected_data);
        VAR_7 += VAR_6->subsamples[VAR_9].bytes_of_protected_data;
        VAR_8 -= VAR_6->subsamples[VAR_9].bytes_of_protected_data;
    }

    if (VAR_8 > 0) {
        FUNC_6(VAR_4->fc, VAR_2, "leftover packet bytes after subsample processing\n");
        return VAR_0;
    }

    return 0;
}
