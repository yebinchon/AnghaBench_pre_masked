
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int h263_long_vectors; int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int,int) ;

int FUNC_4(MpegEncContext * VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;
    VAR_5 = FUNC_2(&VAR_2->gb, VAR_1.table, VAR_0, 2);

    if (VAR_5 == 0)
        return VAR_3;
    if (VAR_5 < 0)
        return 0xffff;

    VAR_7 = FUNC_1(&VAR_2->gb);
    VAR_8 = VAR_4 - 1;
    VAR_6 = VAR_5;
    if (VAR_8) {
        VAR_6 = (VAR_6 - 1) << VAR_8;
        VAR_6 |= FUNC_0(&VAR_2->gb, VAR_8);
        VAR_6++;
    }
    if (VAR_7)
        VAR_6 = -VAR_6;
    VAR_6 += VAR_3;


    if (!VAR_2->h263_long_vectors) {
        VAR_6 = FUNC_3(VAR_6, 5 + VAR_4);
    } else {

        if (VAR_3 < -31 && VAR_6 < -63)
            VAR_6 += 64;
        if (VAR_3 > 32 && VAR_6 > 63)
            VAR_6 -= 64;

    }
    return VAR_6;
}
