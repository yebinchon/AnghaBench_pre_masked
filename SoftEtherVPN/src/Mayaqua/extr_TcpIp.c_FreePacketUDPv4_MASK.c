
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * UDPHeader; } ;
struct TYPE_6__ {int TypeL7; int TypeL4; TYPE_1__ L4; } ;
typedef TYPE_2__ PKT ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;


void FUNC_1(PKT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 switch (VAR_1->TypeL7)
 {
 case 128:
  FUNC_0(VAR_1);
  break;
 }

 VAR_1->L4.UDPHeader = ((void*)0);
 VAR_1->TypeL4 = VAR_0;
}
