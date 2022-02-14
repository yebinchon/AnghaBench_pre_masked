
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Port {scalar_t__ InUse; int portSem; TYPE_2__* HostP; } ;
struct CmdBlk {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ParmMapP; } ;
struct TYPE_3__ {int tx_intr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int *) ;

int FUNC_4(unsigned long VAR_2, struct CmdBlk *VAR_3)
{
 struct Port *VAR_4 = (struct Port *) VAR_2;
 unsigned long VAR_5;

 FUNC_1(&VAR_4->portSem, VAR_5);

 FUNC_0(VAR_1, "Decrement in use count for port\n");

 if (VAR_4->InUse) {
  if (--VAR_4->InUse != VAR_0) {
   FUNC_2(&VAR_4->portSem, VAR_5);
   return 0;
  }
 }
 FUNC_3(1, &VAR_4->HostP->ParmMapP->tx_intr);



 FUNC_2(&VAR_4->portSem, VAR_5);
 return 0;
}
