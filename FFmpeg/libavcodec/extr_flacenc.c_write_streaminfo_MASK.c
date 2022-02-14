
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int max_blocksize; int min_framesize; int max_framesize; int samplerate; int channels; int sample_count; int md5sum; TYPE_1__* avctx; } ;
struct TYPE_4__ {int bits_per_raw_sample; } ;
typedef int PutBitContext ;
typedef TYPE_2__ FlacEncodeContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static void FUNC_5(FlacEncodeContext *VAR_1, uint8_t *VAR_2)
{
    PutBitContext VAR_3;

    FUNC_3(VAR_2, 0, VAR_0);
    FUNC_1(&VAR_3, VAR_2, VAR_0);


    FUNC_4(&VAR_3, 16, VAR_1->max_blocksize);
    FUNC_4(&VAR_3, 16, VAR_1->max_blocksize);
    FUNC_4(&VAR_3, 24, VAR_1->min_framesize);
    FUNC_4(&VAR_3, 24, VAR_1->max_framesize);
    FUNC_4(&VAR_3, 20, VAR_1->samplerate);
    FUNC_4(&VAR_3, 3, VAR_1->channels-1);
    FUNC_4(&VAR_3, 5, VAR_1->avctx->bits_per_raw_sample - 1);

    FUNC_4(&VAR_3, 24, (VAR_1->sample_count & 0xFFFFFF000LL) >> 12);
    FUNC_4(&VAR_3, 12, VAR_1->sample_count & 0x000000FFFLL);
    FUNC_0(&VAR_3);
    FUNC_2(&VAR_2[18], VAR_1->md5sum, 16);
}
