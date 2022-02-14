
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ block_length; int* const_block; scalar_t__* raw_samples; void* js_blocks; } ;
struct TYPE_8__ {scalar_t__ floating; } ;
struct TYPE_9__ {int gb; TYPE_1__* avctx; TYPE_2__ sconf; } ;
struct TYPE_7__ {int bits_per_raw_sample; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ ALSSpecificConfig ;
typedef TYPE_3__ ALSDecContext ;
typedef TYPE_4__ ALSBlockData ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(ALSDecContext *VAR_1, ALSBlockData *VAR_2)
{
    ALSSpecificConfig *VAR_3 = &VAR_1->sconf;
    AVCodecContext *VAR_4 = VAR_1->avctx;
    GetBitContext *VAR_5 = &VAR_1->gb;

    if (VAR_2->block_length <= 0)
        return VAR_0;

    *VAR_2->raw_samples = 0;
    *VAR_2->const_block = FUNC_0(VAR_5);
    VAR_2->js_blocks = FUNC_0(VAR_5);


    FUNC_2(VAR_5, 5);

    if (*VAR_2->const_block) {
        unsigned int VAR_6 = VAR_3->floating ? 24 : VAR_4->bits_per_raw_sample;
        *VAR_2->raw_samples = FUNC_1(VAR_5, VAR_6);
    }


    *VAR_2->const_block = 1;

    return 0;
}
