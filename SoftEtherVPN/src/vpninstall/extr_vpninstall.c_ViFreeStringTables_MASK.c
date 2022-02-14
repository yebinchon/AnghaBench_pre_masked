
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* StringA; struct TYPE_4__* String; } ;
typedef TYPE_1__ VI_STRING ;
typedef scalar_t__ UINT ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;

void FUNC_4()
{
 UINT VAR_1;
 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0);VAR_1++)
 {
  VI_STRING *VAR_2 = FUNC_1(VAR_0, VAR_1);

  FUNC_0(VAR_2->String);
  FUNC_0(VAR_2->StringA);
  FUNC_0(VAR_2);
 }

 FUNC_3(VAR_0);
 VAR_0 = ((void*)0);
}
