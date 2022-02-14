
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int table; } ;
struct TYPE_5__ {int gb; int mb_y; int mb_x; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int,int ,int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_4(MpegEncContext * VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_5 = FUNC_3(&VAR_2->gb, VAR_1.table, VAR_0, 2);
    FUNC_0(VAR_2, "MV code %d at %d %d pred: %d\n", VAR_5, VAR_2->mb_x,VAR_2->mb_y, VAR_3);
    if (VAR_5 < 0)
        return 0xffff;

    if (VAR_5 == 0)
        return VAR_3;
    VAR_7 = FUNC_2(&VAR_2->gb);
    VAR_8 = VAR_4 - 1;
    VAR_6 = VAR_5;
    if (VAR_8) {
        VAR_6 = (VAR_6 - 1) << VAR_8;
        VAR_6 |= FUNC_1(&VAR_2->gb, VAR_8);
        VAR_6++;
    }
    if (VAR_7)
        VAR_6 = -VAR_6;

    VAR_6 += VAR_3;
    if (VAR_6 <= -64)
        VAR_6 += 64;
    else if (VAR_6 >= 64)
        VAR_6 -= 64;

    return VAR_6;
}
