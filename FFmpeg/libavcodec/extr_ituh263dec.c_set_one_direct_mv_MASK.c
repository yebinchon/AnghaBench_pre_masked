
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int* block_index; int pp_time; int pb_time; int*** mv; int** direct_scale_mv; } ;
struct TYPE_5__ {int*** motion_val; } ;
typedef TYPE_1__ Picture ;
typedef TYPE_2__ MpegEncContext ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(MpegEncContext *VAR_2, Picture *VAR_3, int VAR_4)
{
    int VAR_5 = VAR_2->block_index[VAR_4];
    uint16_t VAR_6 = VAR_2->pp_time;
    uint16_t VAR_7 = VAR_2->pb_time;
    int VAR_8, VAR_9;

    VAR_8 = VAR_3->motion_val[0][VAR_5][0];
    if ((unsigned)(VAR_8 + VAR_0) < VAR_1) {
        VAR_2->mv[0][VAR_4][0] = VAR_2->direct_scale_mv[0][VAR_8 + VAR_0];
        VAR_2->mv[1][VAR_4][0] = VAR_2->direct_scale_mv[1][VAR_8 + VAR_0];
    } else {
        VAR_2->mv[0][VAR_4][0] = VAR_8 * VAR_7 / VAR_6;
        VAR_2->mv[1][VAR_4][0] = VAR_8 * (VAR_7 - VAR_6) / VAR_6;
    }
    VAR_9 = VAR_3->motion_val[0][VAR_5][1];
    if ((unsigned)(VAR_9 + VAR_0) < VAR_1) {
        VAR_2->mv[0][VAR_4][1] = VAR_2->direct_scale_mv[0][VAR_9 + VAR_0];
        VAR_2->mv[1][VAR_4][1] = VAR_2->direct_scale_mv[1][VAR_9 + VAR_0];
    } else {
        VAR_2->mv[0][VAR_4][1] = VAR_9 * VAR_7 / VAR_6;
        VAR_2->mv[1][VAR_4][1] = VAR_9 * (VAR_7 - VAR_6) / VAR_6;
    }
}
