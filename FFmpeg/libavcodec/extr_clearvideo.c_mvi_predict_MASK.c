
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int x; int y; } ;
struct TYPE_7__ {int mb_stride; int mb_w; int mb_size; int mb_h; TYPE_2__* mv; scalar_t__ top; } ;
typedef TYPE_1__ MVInfo ;
typedef TYPE_2__ MV ;


 void* FUNC_0 (int,int,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static MV FUNC_1(MVInfo *VAR_1, int VAR_2, int VAR_3, MV VAR_4)
{
    MV VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10;

    if (VAR_1->top) {
        if (VAR_2 > 0) {
            VAR_6 = VAR_1->mv[VAR_1->mb_stride + VAR_2 - 1];
        } else {
            VAR_6 = VAR_0;
        }
    } else if ((VAR_2 == 0) || (VAR_2 == VAR_1->mb_w - 1)) {
        VAR_6 = VAR_1->mv[VAR_2];
    } else {
        MV VAR_11 = VAR_1->mv[VAR_1->mb_stride + VAR_2 - 1];
        MV VAR_12 = VAR_1->mv[ VAR_2 ];
        MV VAR_13 = VAR_1->mv[ VAR_2 + 1];
        VAR_6.x = FUNC_0(VAR_11.x, VAR_12.x, VAR_13.x);
        VAR_6.y = FUNC_0(VAR_11.y, VAR_12.y, VAR_13.y);
    }

    VAR_5 = VAR_6;

    VAR_7 = -((VAR_2 * VAR_1->mb_size));
    VAR_8 = ((VAR_1->mb_w - VAR_2 - 1) * VAR_1->mb_size);
    if (VAR_5.x < VAR_7) {
        VAR_5.x = VAR_7;
    }
    if (VAR_5.x > VAR_8) {
        VAR_5.x = VAR_8;
    }
    VAR_9 = -((VAR_3 * VAR_1->mb_size));
    VAR_10 = ((VAR_1->mb_h - VAR_3 - 1) * VAR_1->mb_size);
    if (VAR_5.y < VAR_9) {
        VAR_5.y = VAR_9;
    }
    if (VAR_5.y > VAR_10) {
        VAR_5.y = VAR_10;
    }

    VAR_1->mv[VAR_1->mb_stride + VAR_2].x = VAR_5.x + VAR_4.x;
    VAR_1->mv[VAR_1->mb_stride + VAR_2].y = VAR_5.y + VAR_4.y;

    return VAR_5;
}
