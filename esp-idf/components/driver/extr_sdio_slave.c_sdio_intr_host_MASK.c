
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ portBASE_TYPE ;
struct TYPE_7__ {int val; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_10__ {TYPE_2__ slc0_int_clr; TYPE_1__ slc0_int_st; } ;
struct TYPE_8__ {int (* event_cb ) (int) ;} ;
struct TYPE_9__ {int * events; TYPE_3__ config; } ;


 int FUNC_0 (int) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(void* VAR_3)
{
    uint8_t VAR_4 = VAR_0.slc0_int_st.val & 0xff;

    portBASE_TYPE VAR_5 = VAR_2;
    VAR_0.slc0_int_clr.val = VAR_4;
    for(int VAR_6 = 0; VAR_6 < 8; VAR_6++) {
        if (FUNC_0(VAR_6) & VAR_4) {
            if (VAR_1.config.event_cb != ((void*)0)) (*VAR_1.config.event_cb)(VAR_6);
            FUNC_3(VAR_1.events[VAR_6], &VAR_5);
        }
    }
    if (VAR_5) FUNC_1();
}
