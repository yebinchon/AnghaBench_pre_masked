
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rmt_data_mode_t ;
struct TYPE_3__ {int fifo_mask; } ;
struct TYPE_4__ {TYPE_1__ apb_conf; } ;


 TYPE_2__ VAR_0 ;

rmt_data_mode_t FUNC_0(void)
{
    return (rmt_data_mode_t) (VAR_0.apb_conf.fifo_mask);
}
