
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct aggBarControl {int tid_info; scalar_t__ compressed_bitmap; scalar_t__ multi_tid; scalar_t__ bar_ack_policy; } ;
struct TYPE_4__ {int tid; } ;
typedef TYPE_1__* TID_TX ;


 int FUNC_0 (int *,TYPE_1__*,struct aggBarControl*) ;

void FUNC_1(zdev_t* VAR_0, TID_TX VAR_1)
{
    struct aggBarControl VAR_2;





    VAR_2.bar_ack_policy = 0;
    VAR_2.multi_tid = 0;
    VAR_2.compressed_bitmap = 0;
    VAR_2.tid_info = VAR_1->tid;
    FUNC_0(VAR_0, VAR_1, &VAR_2);

    return;

}
