
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_5__ {int mb_width; int b8_stride; int quarter_sample; TYPE_1__* avctx; } ;
struct TYPE_4__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ ERContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(ERContext *VAR_1, ptrdiff_t *VAR_2, ptrdiff_t *VAR_3)
{
    if (VAR_1->avctx->codec_id == VAR_0) {
        FUNC_0(VAR_1->quarter_sample);
        *VAR_2 = 4;
        *VAR_3 = VAR_1->mb_width * 4;
    } else {
        *VAR_2 = 2;
        *VAR_3 = VAR_1->b8_stride;
    }
}
