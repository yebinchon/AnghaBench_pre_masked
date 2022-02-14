
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;
struct TYPE_8__ {int blocksize; } ;
struct TYPE_7__ {int (* bswap16_buf ) (int *,int const*,int) ;} ;
struct TYPE_9__ {int channels; int md5ctx; int * md5_buffer; TYPE_3__ frame; TYPE_2__ bdsp; TYPE_1__* avctx; int md5_buffer_size; } ;
struct TYPE_6__ {int bits_per_raw_sample; } ;
typedef TYPE_4__ FlacEncodeContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int **,int *,int) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_5(FlacEncodeContext *VAR_2, const void *VAR_3)
{
    const uint8_t *VAR_4;
    int VAR_5 = VAR_2->frame.blocksize * VAR_2->channels *
                   ((VAR_2->avctx->bits_per_raw_sample + 7) / 8);

    if (VAR_2->avctx->bits_per_raw_sample > 16 || VAR_1) {
        FUNC_2(&VAR_2->md5_buffer, &VAR_2->md5_buffer_size, VAR_5);
        if (!VAR_2->md5_buffer)
            return FUNC_0(VAR_0);
    }

    if (VAR_2->avctx->bits_per_raw_sample <= 16) {
        VAR_4 = (const uint8_t *)VAR_3;





    } else {
        int VAR_6;
        const int32_t *VAR_7 = VAR_3;
        uint8_t *VAR_8 = VAR_2->md5_buffer;

        for (VAR_6 = 0; VAR_6 < VAR_2->frame.blocksize * VAR_2->channels; VAR_6++) {
            int32_t VAR_9 = VAR_7[VAR_6] >> 8;
            FUNC_1(VAR_8 + 3*VAR_6, VAR_9);
        }
        VAR_4 = VAR_2->md5_buffer;
    }
    FUNC_3(VAR_2->md5ctx, VAR_4, VAR_5);

    return 0;
}
