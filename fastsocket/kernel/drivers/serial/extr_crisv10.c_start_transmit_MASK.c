
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; scalar_t__ hw_len; scalar_t__ sw_len; } ;
struct e100_serial {scalar_t__ line; int tr_running; scalar_t__ uses_dma_out; TYPE_1__ tr_descr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct e100_serial*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct e100_serial*) ;

__attribute__((used)) static void
FUNC_3(struct e100_serial *VAR_1)
{





 VAR_1->tr_descr.sw_len = 0;
 VAR_1->tr_descr.hw_len = 0;
 VAR_1->tr_descr.status = 0;
 VAR_1->tr_running = 1;
 if (VAR_1->uses_dma_out)
  FUNC_2(VAR_1);
 else
  FUNC_0(VAR_1);
}
