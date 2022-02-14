
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Offline; scalar_t__ NoOnline; } ;
typedef TYPE_1__ LINK ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(LINK *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->NoOnline)
 {
  return;
 }

 if (VAR_0->Offline == 0)
 {
  return;
 }

 VAR_0->Offline = 0;
 FUNC_0(VAR_0);
}
