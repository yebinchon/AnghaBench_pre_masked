
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mqbox_t ;
struct TYPE_4__ {int mqueue; } ;
typedef TYPE_1__ mqbox_st ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(mqbox_t VAR_0)
{
 mqbox_st *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if(!VAR_1) return;

 FUNC_3(&VAR_1->mqueue,0);
 FUNC_2();

 FUNC_0(VAR_1);
}
