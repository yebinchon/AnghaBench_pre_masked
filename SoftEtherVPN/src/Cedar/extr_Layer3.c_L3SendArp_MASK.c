
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int t ;
typedef int UINT ;
struct TYPE_10__ {int IpAddress; scalar_t__ Expire; } ;
struct TYPE_9__ {int ArpWaitTable; } ;
typedef TYPE_1__ L3IF ;
typedef TYPE_2__ L3ARPWAIT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_4 (int) ;

void FUNC_5(L3IF *VAR_1, UINT VAR_2)
{
 L3ARPWAIT VAR_3, *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_2 == 0xffffffff)
 {
  return;
 }


 FUNC_3(&VAR_3, sizeof(VAR_3));
 VAR_3.IpAddress = VAR_2;
 VAR_4 = FUNC_1(VAR_1->ArpWaitTable, &VAR_3);

 if (VAR_4 != ((void*)0))
 {

  return;
 }
 else
 {

  VAR_4 = FUNC_4(sizeof(L3ARPWAIT));
  VAR_4->Expire = FUNC_2() + VAR_0;
  VAR_4->IpAddress = VAR_2;
  FUNC_0(VAR_1->ArpWaitTable, VAR_4);
 }
}
