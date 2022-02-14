
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int context; } ;
typedef TYPE_1__ lwp_cntrl ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_6()
{
 u32 VAR_2;
 lwp_cntrl *VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = VAR_1;



 if(!FUNC_3(VAR_3)) {
  if(VAR_0) FUNC_5(&VAR_0->context);
  FUNC_4(&VAR_3->context);
  VAR_0 = VAR_3;
 }
 FUNC_1(VAR_2);
}
