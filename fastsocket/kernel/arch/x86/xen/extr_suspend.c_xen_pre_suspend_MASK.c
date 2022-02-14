
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* mfn; } ;
struct TYPE_5__ {TYPE_1__ domU; } ;
struct TYPE_6__ {TYPE_2__ console; void* store_mfn; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 void* FUNC_6 (void*) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

void FUNC_7(void)
{
 VAR_3->store_mfn = FUNC_6(VAR_3->store_mfn);
 VAR_3->console.domU.mfn =
  FUNC_6(VAR_3->console.domU.mfn);

 FUNC_1(!FUNC_5());

 VAR_1 = &VAR_2;
 if (FUNC_2(FUNC_4(VAR_0),
      FUNC_3(0), 0))
  FUNC_0();
}
