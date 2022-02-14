
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ppc_flags; scalar_t__ lpt_addr; } ;
typedef TYPE_1__ Interface ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(Interface *VAR_1)
{
 int VAR_2;

 if (VAR_1->ppc_flags & VAR_0)
 {
  for(VAR_2=0; VAR_2<20; VAR_2++)
   FUNC_0(VAR_1->lpt_addr + 1);
 }
}
