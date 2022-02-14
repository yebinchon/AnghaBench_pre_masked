
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rx_new_packet; } ;
struct TYPE_8__ {TYPE_2__ slc0_int_clr; } ;
struct TYPE_5__ {int rx_done; } ;
struct TYPE_7__ {TYPE_1__ slc0_int_raw; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_2(void)
{

    FUNC_0(&VAR_2);

    while(!VAR_1.slc0_int_raw.rx_done);
    VAR_0.slc0_int_clr.rx_new_packet = 1;
    FUNC_1();
}
