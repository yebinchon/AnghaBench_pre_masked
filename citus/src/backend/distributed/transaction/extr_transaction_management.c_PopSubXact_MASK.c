
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ subId; int setLocalCmds; } ;
typedef TYPE_1__ SubXactContext ;
typedef scalar_t__ SubTransactionId ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(SubTransactionId VAR_3)
{
 MemoryContext VAR_4 = FUNC_1(VAR_0);
 SubXactContext *VAR_5 = FUNC_2(VAR_2);






 FUNC_0(VAR_5->subId == VAR_3);
 VAR_1 = VAR_5->setLocalCmds;
 VAR_2 = FUNC_3(VAR_2);

 FUNC_1(VAR_4);
}
