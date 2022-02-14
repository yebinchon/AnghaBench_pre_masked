
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fullband_channels; scalar_t__** prediction_mode; } ;
typedef TYPE_1__ DCAEncContext ;


 int FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_1(DCAEncContext *VAR_0)
{
    int VAR_1, VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->fullband_channels; VAR_2++)
        for (VAR_1 = 0; VAR_1 < 32; VAR_1++)
            if (VAR_0->prediction_mode[VAR_2][VAR_1] >= 0)
                FUNC_0(VAR_0, VAR_2, VAR_1);
}
