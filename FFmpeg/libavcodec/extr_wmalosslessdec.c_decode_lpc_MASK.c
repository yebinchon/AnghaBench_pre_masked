
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lpc_order; int lpc_scaling; int lpc_intbits; int num_channels; int gb; int ** lpc_coefs; } ;
typedef TYPE_1__ WmallDecodeCtx ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(WmallDecodeCtx *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    VAR_0->lpc_order = FUNC_0(&VAR_0->gb, 5) + 1;
    VAR_0->lpc_scaling = FUNC_0(&VAR_0->gb, 4);
    VAR_0->lpc_intbits = FUNC_0(&VAR_0->gb, 3) + 1;
    VAR_3 = VAR_0->lpc_scaling + VAR_0->lpc_intbits;
    for (VAR_1 = 0; VAR_1 < VAR_0->num_channels; VAR_1++)
        for (VAR_2 = 0; VAR_2 < VAR_0->lpc_order; VAR_2++)
            VAR_0->lpc_coefs[VAR_1][VAR_2] = FUNC_1(&VAR_0->gb, VAR_3);
}
