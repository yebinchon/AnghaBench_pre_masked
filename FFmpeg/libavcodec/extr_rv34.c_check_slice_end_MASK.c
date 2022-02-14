
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ mb_y; scalar_t__ mb_height; int gb; int mb_num_left; } ;
struct TYPE_6__ {int mb_skip_run; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
typedef TYPE_2__ RV34DecContext ;
typedef TYPE_3__ MpegEncContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(RV34DecContext *VAR_0, MpegEncContext *VAR_1)
{
    int VAR_2;
    if(VAR_1->mb_y >= VAR_1->mb_height)
        return 1;
    if(!VAR_1->mb_num_left)
        return 1;
    if(VAR_0->s.mb_skip_run > 1)
        return 0;
    VAR_2 = FUNC_0(&VAR_1->gb);
    if(VAR_2 <= 0 || (VAR_2 < 8 && !FUNC_1(&VAR_1->gb, VAR_2)))
        return 1;
    return 0;
}
