
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int error_occurred; } ;
struct TYPE_7__ {scalar_t__ pict_type; int mb_y; TYPE_2__* current_picture_ptr; TYPE_1__ er; int partitioned_frame; } ;
struct TYPE_6__ {int tf; } ;
typedef TYPE_3__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(MpegEncContext *VAR_1)
{
    if (VAR_1->pict_type != VAR_0 && !VAR_1->partitioned_frame && !VAR_1->er.error_occurred)
        FUNC_0(&VAR_1->current_picture_ptr->tf, VAR_1->mb_y, 0);
}
