
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* callBack ) (void*,VAR_0,void*) ;int enabled; scalar_t__ address; int type; } ;
struct TYPE_5__ {TYPE_1__ stepOverOut; } ;
typedef TYPE_2__ SH2_struct ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_0(SH2_struct *VAR_3, void (*VAR_4)(void *, VAR_5, void *))
{
   if (VAR_1)
   {
      VAR_3->stepOverOut.callBack = VAR_4;
      VAR_3->stepOverOut.type = VAR_2;
      VAR_3->stepOverOut.enabled = 1;
      VAR_3->stepOverOut.address = 0;
   }
}
