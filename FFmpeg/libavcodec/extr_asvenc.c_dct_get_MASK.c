
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int (* fdct ) (int ) ;} ;
struct TYPE_9__ {int (* get_pixels ) (int ,int *,int) ;} ;
struct TYPE_12__ {TYPE_3__ fdsp; TYPE_2__ pdsp; TYPE_1__* avctx; int block; } ;
struct TYPE_11__ {int* linesize; int ** data; } ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ ASV1Context ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static inline void FUNC_9(ASV1Context *VAR_2, const AVFrame *VAR_3,
                           int VAR_4, int VAR_5)
{
    FUNC_0 (*VAR_1)[64] = VAR_2->block;
    int VAR_6 = VAR_3->linesize[0];
    int VAR_7;

    uint8_t *VAR_8 = VAR_3->data[0] + (VAR_5 * 16 * VAR_6) + VAR_4 * 16;
    uint8_t *VAR_9 = VAR_3->data[1] + (VAR_5 * 8 * VAR_3->linesize[1]) + VAR_4 * 8;
    uint8_t *VAR_10 = VAR_3->data[2] + (VAR_5 * 8 * VAR_3->linesize[2]) + VAR_4 * 8;

    VAR_2->pdsp.get_pixels(VAR_1[0], VAR_8, VAR_6);
    VAR_2->pdsp.get_pixels(VAR_1[1], VAR_8 + 8, VAR_6);
    VAR_2->pdsp.get_pixels(VAR_1[2], VAR_8 + 8 * VAR_6, VAR_6);
    VAR_2->pdsp.get_pixels(VAR_1[3], VAR_8 + 8 * VAR_6 + 8, VAR_6);
    for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
        VAR_2->fdsp.fdct(VAR_1[VAR_7]);

    if (!(VAR_2->avctx->flags & VAR_0)) {
        VAR_2->pdsp.get_pixels(VAR_1[4], VAR_9, VAR_3->linesize[1]);
        VAR_2->pdsp.get_pixels(VAR_1[5], VAR_10, VAR_3->linesize[2]);
        for (VAR_7 = 4; VAR_7 < 6; VAR_7++)
            VAR_2->fdsp.fdct(VAR_1[VAR_7]);
    }
}
