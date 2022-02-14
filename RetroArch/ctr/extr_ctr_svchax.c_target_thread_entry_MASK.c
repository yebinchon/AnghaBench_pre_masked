
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int target_val; scalar_t__ target_kaddr; int lock; int started_event; } ;
typedef TYPE_1__ mch2_thread_args_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(mch2_thread_args_t* VAR_1)
{
   FUNC_1(VAR_1->started_event);
   FUNC_2(VAR_1->lock, VAR_0);

   if (VAR_1->target_kaddr)
      FUNC_3(VAR_1->target_kaddr, VAR_1->target_val);

   FUNC_0();
}
