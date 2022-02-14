
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_block {int s2b_shift; int request_queue; int bp_block; TYPE_2__* base; } ;
struct TYPE_4__ {int features; TYPE_1__* discipline; } ;
struct TYPE_3__ {int max_blocks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,long) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct dasd_block *VAR_2)
{
 int VAR_3;

 if (VAR_2->base->features & VAR_0) {







  VAR_3 = 2048;
 } else {
  VAR_3 = VAR_2->base->discipline->max_blocks << VAR_2->s2b_shift;
 }
 FUNC_0(VAR_2->request_queue,
         VAR_2->bp_block);
 FUNC_1(VAR_2->request_queue, VAR_3);
 FUNC_3(VAR_2->request_queue, -1L);



 FUNC_2(VAR_2->request_queue, VAR_1);
 FUNC_4(VAR_2->request_queue, VAR_1 - 1);
}
