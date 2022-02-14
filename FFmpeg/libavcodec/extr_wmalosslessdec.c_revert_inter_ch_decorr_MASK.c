
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_channels; int** channel_residues; scalar_t__* is_channel_coded; } ;
typedef TYPE_1__ WmallDecodeCtx ;



__attribute__((used)) static void FUNC_0(WmallDecodeCtx *VAR_0, int VAR_1)
{
    if (VAR_0->num_channels != 2)
        return;
    else if (VAR_0->is_channel_coded[0] || VAR_0->is_channel_coded[1]) {
        int VAR_2;
        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
            VAR_0->channel_residues[0][VAR_2] -= VAR_0->channel_residues[1][VAR_2] >> 1;
            VAR_0->channel_residues[1][VAR_2] += VAR_0->channel_residues[0][VAR_2];
        }
    }
}
