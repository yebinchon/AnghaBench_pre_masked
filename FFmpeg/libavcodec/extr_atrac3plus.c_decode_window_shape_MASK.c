
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_subbands; TYPE_1__* channels; } ;
struct TYPE_4__ {int wnd_shape; } ;
typedef int GetBitContext ;
typedef TYPE_2__ Atrac3pChanUnitCtx ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(GetBitContext *VAR_0, Atrac3pChanUnitCtx *VAR_1,
                                int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        FUNC_0(VAR_0, VAR_1->channels[VAR_3].wnd_shape,
                          VAR_1->num_subbands);
}
