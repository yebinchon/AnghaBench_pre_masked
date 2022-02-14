
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * TagVlanHeader; } ;
struct TYPE_5__ {int TypeL3; TYPE_1__ L3; } ;
typedef TYPE_2__ PKT ;


 int VAR_0 ;

void FUNC_0(PKT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->L3.TagVlanHeader = ((void*)0);
 VAR_1->TypeL3 = VAR_0;
}
