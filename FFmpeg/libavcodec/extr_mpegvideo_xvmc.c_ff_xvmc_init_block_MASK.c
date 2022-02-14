
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xvmc_pix_fmt {scalar_t__ xvmc_id; int next_free_data_block_num; scalar_t__ data_blocks; } ;
typedef int int16_t ;
struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_7__ {int ** block; TYPE_2__ current_picture; } ;
struct TYPE_5__ {scalar_t__* data; } ;
typedef TYPE_3__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(MpegEncContext *VAR_1)
{
    struct xvmc_pix_fmt *VAR_2 = (struct xvmc_pix_fmt*)VAR_1->current_picture.f->data[2];
    FUNC_0(VAR_2 && VAR_2->xvmc_id == VAR_0);

    VAR_1->block = (int16_t (*)[64])(VAR_2->data_blocks + VAR_2->next_free_data_block_num * 64);
}
