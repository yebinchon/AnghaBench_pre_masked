
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int interval; scalar_t__ tmr; } ;
struct TYPE_7__ {int arg; int (* cb ) (int ) ;} ;
struct TYPE_6__ {scalar_t__ tmr; } ;
struct TYPE_9__ {int active_level; int serial_thres_sec; TYPE_3__ tap_rls_cb; TYPE_2__ tap_psh_cb; TYPE_1__ press_serial_cb; int state; int io_num; } ;
typedef TYPE_4__ button_dev_t ;
struct TYPE_10__ {TYPE_4__* pbtn; } ;
typedef TYPE_5__ button_cb_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8(void* VAR_3)
{

    button_cb_t* VAR_4 = (button_cb_t*) FUNC_4(VAR_3);




    button_dev_t* VAR_5 = VAR_4->pbtn;
    FUNC_0(VAR_5->tap_rls_cb.tmr);

    int VAR_6 = FUNC_3(VAR_5->io_num);

    if (VAR_5->active_level == VAR_6) {

        VAR_5->state = VAR_0;
        if (VAR_5->press_serial_cb.tmr) {

            FUNC_6(VAR_5->press_serial_cb.tmr, VAR_5->serial_thres_sec*1000 / VAR_2, VAR_1);
            FUNC_7(VAR_5->press_serial_cb.tmr, VAR_1);





        }
        if (VAR_5->tap_psh_cb.cb) {
            VAR_5->tap_psh_cb.cb(VAR_5->tap_psh_cb.arg);
        }
    } else {

        if (VAR_5->tap_rls_cb.tmr) {
            FUNC_0(VAR_5->tap_rls_cb.tmr);

            FUNC_7(VAR_5->tap_rls_cb.tmr, VAR_1);



        }
    }
}
