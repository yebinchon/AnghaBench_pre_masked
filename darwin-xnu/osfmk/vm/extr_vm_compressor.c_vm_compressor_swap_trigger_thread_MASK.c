
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_continue_t ;
typedef int event_t ;
struct TYPE_5__ {int options; } ;
struct TYPE_4__ {scalar_t__ vm_restricted_to_single_processor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static void
FUNC_10(void)
{
 FUNC_1()->options |= VAR_2;
 if (VAR_8) {
  FUNC_8();

  if (VAR_10.vm_restricted_to_single_processor == VAR_3)
   FUNC_6();
  FUNC_5(FUNC_1(), "VM_cswap_trigger");
  VAR_8 = 0;
 }
 FUNC_2(VAR_5);

 VAR_6++;
 VAR_7 = 0;

 if (VAR_9 == 0) {

  VAR_9 = 1;

  FUNC_9(VAR_0);

  VAR_9 = 0;
 }
 FUNC_0((event_t)&VAR_4, VAR_1);

 if (VAR_9 == 0)
  FUNC_7((event_t)&VAR_9);

 FUNC_3(VAR_5);

 FUNC_4((thread_continue_t)FUNC_10);


}
