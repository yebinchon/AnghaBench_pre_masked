
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Thread; int Cancel; int HaltEvent; int lock; } ;
typedef TYPE_1__ KEEP ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;

KEEP *FUNC_5()
{
 KEEP *VAR_1 = FUNC_4(sizeof(KEEP));

 VAR_1->lock = FUNC_2();
 VAR_1->HaltEvent = FUNC_1();
 VAR_1->Cancel = FUNC_0();


 VAR_1->Thread = FUNC_3(VAR_0, VAR_1);

 return VAR_1;
}
