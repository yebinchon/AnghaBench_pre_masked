
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ active_level; int state; int io_num; } ;
typedef TYPE_1__ button_dev_t ;
struct TYPE_4__ {int arg; int (* cb ) (int ) ;TYPE_1__* pbtn; } ;
typedef TYPE_2__ button_cb_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void* VAR_1)
{

    button_cb_t* VAR_2 = (button_cb_t*) FUNC_1(VAR_1);




    button_dev_t* VAR_3 = VAR_2->pbtn;

    if (VAR_3->active_level == FUNC_0(VAR_3->io_num)) {
        VAR_3->state = VAR_0;
        if (VAR_2->cb) {
            VAR_2->cb(VAR_2->arg);
        }
    }
}
