
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** direct_scale_mv; int pb_time; int pp_time; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(MpegEncContext *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2->direct_scale_mv[0][VAR_3] = (VAR_3 - VAR_0) * VAR_2->pb_time / VAR_2->pp_time;
        VAR_2->direct_scale_mv[1][VAR_3] = (VAR_3 - VAR_0) * (VAR_2->pb_time - VAR_2->pp_time) /
                                   VAR_2->pp_time;
    }
}
