
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rtekind; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef int CitusRTEKind ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int *,int *) ;
CitusRTEKind
FUNC_1(RangeTblEntry *VAR_1)
{
 CitusRTEKind VAR_2 = VAR_0 ;

 switch (VAR_1->rtekind)
 {

  case 129:
  case 133:
  case 132:
  case 130:
  case 134:
  case 128:
  case 136:



   {
    VAR_2 = (CitusRTEKind) VAR_1->rtekind;
    break;
   }

  case 135:
  {





   FUNC_0(VAR_1, &VAR_2, ((void*)0), ((void*)0), ((void*)0));
   break;
  }
 }

 return VAR_2;
}
