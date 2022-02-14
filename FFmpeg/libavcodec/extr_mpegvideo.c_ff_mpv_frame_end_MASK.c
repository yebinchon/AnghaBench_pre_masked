
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ reference; } ;
struct TYPE_7__ {TYPE_2__* current_picture_ptr; TYPE_1__ current_picture; } ;
struct TYPE_6__ {int tf; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(MpegEncContext *VAR_1)
{
    FUNC_0();

    if (VAR_1->current_picture.reference)
        FUNC_1(&VAR_1->current_picture_ptr->tf, VAR_0, 0);
}
