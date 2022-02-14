
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pcontrolwaitfail; int pcontrolwait; } ;
typedef TYPE_1__ IXJ ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(IXJ *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_1 + ((60 * VAR_0) / 100);
 while (!FUNC_0(VAR_2)) {
  FUNC_1(VAR_2->pcontrolwait);
  if (FUNC_2(VAR_1, VAR_3)) {
   FUNC_1(VAR_2->pcontrolwaitfail);
   return -1;
  }
 }
 return 0;
}
