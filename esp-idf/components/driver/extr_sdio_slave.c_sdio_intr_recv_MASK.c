
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ portBASE_TYPE ;
struct TYPE_8__ {int tx_done; } ;
struct TYPE_7__ {scalar_t__ tx_done; } ;
struct TYPE_11__ {TYPE_2__ slc0_int_clr; TYPE_1__ slc0_int_raw; } ;
struct TYPE_10__ {scalar_t__ owner; } ;
struct TYPE_9__ {int recv_event; TYPE_4__* recv_cur_ret; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_6__ VAR_0 ;
 TYPE_4__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_6(void* VAR_4)
{
    portBASE_TYPE VAR_5 = 0;
    if (VAR_0.slc0_int_raw.tx_done) {
        VAR_0.slc0_int_clr.tx_done = 1;
        while (VAR_2.recv_cur_ret && VAR_2.recv_cur_ret->owner == 0) {



            FUNC_2();
            VAR_2.recv_cur_ret = FUNC_1(VAR_2.recv_cur_ret, VAR_3);
            FUNC_3();
            FUNC_0(VAR_1, "intr_recv: Give");
            FUNC_5(VAR_2.recv_event, &VAR_5);
            VAR_0.slc0_int_clr.tx_done = 1;
        };
    }
    if (VAR_5) FUNC_4();
}
