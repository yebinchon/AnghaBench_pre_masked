
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ portBASE_TYPE ;
struct TYPE_8__ {int rx_eof; } ;
struct TYPE_7__ {scalar_t__ rx_eof; scalar_t__ rx_done; } ;
struct TYPE_6__ {scalar_t__ rx_done; } ;
struct TYPE_10__ {TYPE_3__ slc0_int_clr; TYPE_2__ slc0_int_st; TYPE_1__ slc0_int_ena; } ;
struct TYPE_9__ {int * in_flight; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_5__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_4__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void* VAR_6)
{
    FUNC_0(VAR_3, "intr_send");
    portBASE_TYPE VAR_7 = VAR_5;


    if (VAR_0.slc0_int_st.rx_done) VAR_0.slc0_int_ena.rx_done = 0;



    if (VAR_0.slc0_int_st.rx_eof) {
        VAR_0.slc0_int_clr.rx_eof = 1;

        FUNC_1(FUNC_3() == VAR_1);
        FUNC_5(&VAR_7);
    }



    if (FUNC_3() == VAR_2) {
        if (VAR_4.in_flight == ((void*)0)) FUNC_4(&VAR_7);

        if (VAR_4.in_flight) FUNC_6();
    }

    if (VAR_7) FUNC_2();
}
