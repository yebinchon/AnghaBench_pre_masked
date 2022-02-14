
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * flip_line; } ;
typedef TYPE_1__ FlipContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_1(FlipContext *VAR_8, int VAR_9[4], int VAR_10)
{
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        switch (VAR_9[VAR_11]) {
        case 1: VAR_8->flip_line[VAR_11] = VAR_4; break;
        case 2: VAR_8->flip_line[VAR_11] = VAR_7; break;
        case 3: VAR_8->flip_line[VAR_11] = VAR_2; break;
        case 4: VAR_8->flip_line[VAR_11] = VAR_5; break;
        case 6: VAR_8->flip_line[VAR_11] = VAR_3; break;
        case 8: VAR_8->flip_line[VAR_11] = VAR_6; break;
        default:
            return VAR_1;
        }
    }
    if (VAR_0)
        FUNC_0(VAR_8, VAR_9, VAR_10);

    return 0;
}
