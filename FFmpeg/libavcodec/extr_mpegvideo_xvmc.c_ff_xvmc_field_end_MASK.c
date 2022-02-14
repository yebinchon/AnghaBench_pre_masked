
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xvmc_pix_fmt {scalar_t__ filled_mv_blocks_num; } ;
struct TYPE_6__ {TYPE_1__* f; } ;
struct MpegEncContext {TYPE_2__ current_picture; } ;
struct TYPE_7__ {struct MpegEncContext* priv_data; } ;
struct TYPE_5__ {scalar_t__* data; } ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (struct xvmc_pix_fmt*) ;
 int FUNC_1 (struct MpegEncContext*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    struct MpegEncContext *VAR_1 = VAR_0->priv_data;
    struct xvmc_pix_fmt *VAR_2 = (struct xvmc_pix_fmt*)VAR_1->current_picture.f->data[2];
    FUNC_0(VAR_2);

    if (VAR_2->filled_mv_blocks_num > 0)
        FUNC_1(VAR_1, 0, 0);
    return 0;
}
