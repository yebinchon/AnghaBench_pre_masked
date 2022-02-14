
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int gb; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(MpegEncContext *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_5 = FUNC_2(&VAR_2->gb, VAR_1.table, VAR_0, 2);
    if (VAR_5 == 0)
        return VAR_4;
    if (VAR_5 < 0)
        return 0xffff;

    VAR_6 = FUNC_1(&VAR_2->gb);
    VAR_8 = VAR_3 - 1;
    VAR_7 = VAR_5;
    if (VAR_8) {
        VAR_7 = (VAR_7 - 1) << VAR_8;
        VAR_7 |= FUNC_0(&VAR_2->gb, VAR_8);
        VAR_7++;
    }
    if (VAR_6)
        VAR_7 = -VAR_7;
    VAR_7 += VAR_4;


    return FUNC_3(VAR_7, 5 + VAR_8);
}
