
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int needInitDic; int needInitState; int needInitProp; int decoder; int state; } ;
typedef TYPE_1__ CLzma2Dec ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(CLzma2Dec *VAR_1)
{
   VAR_1->state = VAR_0;
   VAR_1->needInitDic = 1;
   VAR_1->needInitState = 1;
   VAR_1->needInitProp = 1;
   FUNC_0(&VAR_1->decoder);
}
