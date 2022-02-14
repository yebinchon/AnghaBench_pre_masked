
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Ready; int lock; int c; } ;
typedef TYPE_1__ COUNTER ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 () ;

COUNTER *FUNC_3()
{
 COUNTER *VAR_1;


 VAR_1 = FUNC_1(sizeof(COUNTER));


 VAR_1->Ready = 1;
 VAR_1->c = 0;


 VAR_1->lock = FUNC_2();


 FUNC_0(VAR_0);

 return VAR_1;
}
