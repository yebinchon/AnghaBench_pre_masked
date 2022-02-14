
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {TYPE_1__* avctx; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_2__ MadContext ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,int *) ;

__attribute__((used)) static inline void FUNC_1(MadContext *VAR_1, AVFrame *VAR_2, int16_t *VAR_3,
                            int VAR_4, int VAR_5, int VAR_6)
{
    if (VAR_6 < 4) {
        FUNC_0(
            VAR_2->data[0] + (VAR_5*16 + ((VAR_6&2)<<2))*VAR_2->linesize[0] + VAR_4*16 + ((VAR_6&1)<<3),
            VAR_2->linesize[0], VAR_3);
    } else if (!(VAR_1->avctx->flags & VAR_0)) {
        int VAR_7 = VAR_6 - 3;
        FUNC_0(
            VAR_2->data[VAR_7] + (VAR_5*8)*VAR_2->linesize[VAR_7] + VAR_4*8,
            VAR_2->linesize[VAR_7], VAR_3);
    }
}
