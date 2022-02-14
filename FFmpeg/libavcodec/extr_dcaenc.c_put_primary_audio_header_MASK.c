
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fullband_channels; int* bit_allocation_sel; int** quant_index_sel; int pb; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(DCAEncContext *VAR_5)
{
    int VAR_6, VAR_7;

    FUNC_0(&VAR_5->pb, 4, VAR_2 - 1);


    FUNC_0(&VAR_5->pb, 3, VAR_5->fullband_channels - 1);


    for (VAR_6 = 0; VAR_6 < VAR_5->fullband_channels; VAR_6++)
        FUNC_0(&VAR_5->pb, 5, VAR_0 - 2);


    for (VAR_6 = 0; VAR_6 < VAR_5->fullband_channels; VAR_6++)
        FUNC_0(&VAR_5->pb, 5, VAR_0 - 1);


    for (VAR_6 = 0; VAR_6 < VAR_5->fullband_channels; VAR_6++)
        FUNC_0(&VAR_5->pb, 3, 0);


    for (VAR_6 = 0; VAR_6 < VAR_5->fullband_channels; VAR_6++)
        FUNC_0(&VAR_5->pb, 2, 0);


    for (VAR_6 = 0; VAR_6 < VAR_5->fullband_channels; VAR_6++)
        FUNC_0(&VAR_5->pb, 3, 6);


    for (VAR_6 = 0; VAR_6 < VAR_5->fullband_channels; VAR_6++)
        FUNC_0(&VAR_5->pb, 3, VAR_5->bit_allocation_sel[VAR_6]);


    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
        for (VAR_6 = 0; VAR_6 < VAR_5->fullband_channels; VAR_6++)
            FUNC_0(&VAR_5->pb, VAR_4[VAR_7], VAR_5->quant_index_sel[VAR_6][VAR_7]);


    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
        for (VAR_6 = 0; VAR_6 < VAR_5->fullband_channels; VAR_6++)
            if (VAR_5->quant_index_sel[VAR_6][VAR_7] < VAR_3[VAR_7])
                FUNC_0(&VAR_5->pb, 2, 0);


}
