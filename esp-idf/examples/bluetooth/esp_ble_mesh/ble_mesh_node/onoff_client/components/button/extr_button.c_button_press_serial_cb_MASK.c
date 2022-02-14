
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interval; int tmr; int arg; int (* cb ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ press_serial_cb; } ;
typedef TYPE_2__ button_dev_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(void* VAR_2)
{

    button_dev_t* VAR_3 = (button_dev_t*) FUNC_2(VAR_2);




    if (VAR_3->press_serial_cb.cb) {
        VAR_3->press_serial_cb.cb(VAR_3->press_serial_cb.arg);
    }

    FUNC_4(VAR_3->press_serial_cb.tmr, VAR_3->press_serial_cb.interval, VAR_0);
    FUNC_5(VAR_3->press_serial_cb.tmr, VAR_0);




}
