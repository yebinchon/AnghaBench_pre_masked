
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(rmt_data_mode_t VAR_2)
{
    FUNC_0(&VAR_1);
    VAR_0.apb_conf.fifo_mask = VAR_2;
    FUNC_1(&VAR_1);
}
