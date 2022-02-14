
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* UniStr; struct TYPE_4__* Str; struct TYPE_4__* Data; } ;
typedef TYPE_1__ VALUE ;
typedef int UINT ;


 int FUNC_0 (TYPE_1__*) ;






void FUNC_1(VALUE *VAR_0, UINT VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 switch (VAR_1)
 {
 case 131:
 case 130:
  break;
 case 132:
  FUNC_0(VAR_0->Data);
  break;
 case 129:
  FUNC_0(VAR_0->Str);
  break;
 case 128:
  FUNC_0(VAR_0->UniStr);
  break;
 }


 FUNC_0(VAR_0);
}
