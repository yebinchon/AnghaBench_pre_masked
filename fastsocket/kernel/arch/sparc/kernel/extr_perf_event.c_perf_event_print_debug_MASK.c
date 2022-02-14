
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int (* read ) () ;} ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 unsigned long VAR_2;
 u64 VAR_3, VAR_4;
 int VAR_5;

 if (!VAR_1)
  return;

 FUNC_1(VAR_2);

 VAR_5 = FUNC_4();

 VAR_3 = VAR_0->read();
 FUNC_3(VAR_4);

 FUNC_2("\n");
 FUNC_2("CPU#%d: PCR[%016llx] PIC[%016llx]\n",
  VAR_5, VAR_3, VAR_4);

 FUNC_0(VAR_2);
}
