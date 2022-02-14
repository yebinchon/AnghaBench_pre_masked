
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int setLocalCmds; int subId; } ;
typedef TYPE_1__ SubXactContext ;
typedef int SubTransactionId ;
typedef int MemoryContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(SubTransactionId VAR_3)
{
 MemoryContext VAR_4 = FUNC_0(VAR_0);


 SubXactContext *VAR_5 = FUNC_3(sizeof(SubXactContext));
 VAR_5->subId = VAR_3;
 VAR_5->setLocalCmds = VAR_1;


 VAR_2 = FUNC_1(VAR_5, VAR_2);
 VAR_1 = FUNC_2();

 FUNC_0(VAR_4);
}
