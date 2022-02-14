
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mb_info; int prev_mb_info; int last_mb_info; scalar_t__ mb_info_size; int pb; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(MpegEncContext *VAR_0, int VAR_1)
{
    if (!VAR_0->mb_info)
        return;
    if (FUNC_0(&VAR_0->pb) - VAR_0->prev_mb_info*8 >= VAR_0->mb_info*8) {
        VAR_0->mb_info_size += 12;
        VAR_0->prev_mb_info = VAR_0->last_mb_info;
    }
    if (VAR_1) {
        VAR_0->prev_mb_info = FUNC_0(&VAR_0->pb)/8;




        return;
    }

    VAR_0->last_mb_info = FUNC_0(&VAR_0->pb)/8;
    if (!VAR_0->mb_info_size)
        VAR_0->mb_info_size += 12;
    FUNC_1(VAR_0);
}
