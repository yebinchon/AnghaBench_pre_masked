
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nreslevels; int log2_cblk_width; int log2_cblk_height; scalar_t__ transform; } ;
struct TYPE_6__ {int buf_end; int buf; TYPE_1__* avctx; TYPE_3__ codsty; } ;
struct TYPE_5__ {scalar_t__ pix_fmt; } ;
typedef TYPE_2__ Jpeg2000EncoderContext ;
typedef TYPE_3__ Jpeg2000CodingStyle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static int FUNC_2(Jpeg2000EncoderContext *VAR_3)
{
    Jpeg2000CodingStyle *VAR_4 = &VAR_3->codsty;

    if (VAR_3->buf_end - VAR_3->buf < 14)
        return -1;

    FUNC_0(&VAR_3->buf, VAR_2);
    FUNC_0(&VAR_3->buf, 12);
    FUNC_1(&VAR_3->buf, 0);

    FUNC_1(&VAR_3->buf, 0);
    FUNC_0(&VAR_3->buf, 1);
    if(VAR_3->avctx->pix_fmt == VAR_0){
        FUNC_1(&VAR_3->buf, 0);
    }else{
        FUNC_1(&VAR_3->buf, 0);
    }

    FUNC_1(&VAR_3->buf, VAR_4->nreslevels - 1);
    FUNC_1(&VAR_3->buf, VAR_4->log2_cblk_width-2);
    FUNC_1(&VAR_3->buf, VAR_4->log2_cblk_height-2);
    FUNC_1(&VAR_3->buf, 0);
    FUNC_1(&VAR_3->buf, VAR_4->transform == VAR_1);
    return 0;
}
