
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int t ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_11__ {int IpAddress; } ;
struct TYPE_10__ {int IpAddress; int SubnetMask; int IpWaitList; } ;
typedef TYPE_1__ L3IF ;
typedef TYPE_2__ L3ARPWAIT ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;

void FUNC_5(L3IF *VAR_0, UINT VAR_1, UCHAR *VAR_2)
{
 L3ARPWAIT VAR_3, *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_1 == 0xffffffff || VAR_2 == ((void*)0))
 {
  return;
 }

 if (!((VAR_0->IpAddress & VAR_0->SubnetMask) == (VAR_1 & VAR_0->SubnetMask)))
 {

  return;
 }


 FUNC_4(&VAR_3, sizeof(VAR_3));
 VAR_3.IpAddress = VAR_1;
 VAR_4 = FUNC_3(VAR_0->IpWaitList, &VAR_3);
 if (VAR_4 != ((void*)0))
 {
  FUNC_0(VAR_0->IpWaitList, VAR_4);
  FUNC_1(VAR_4);
 }


 FUNC_2(VAR_0, VAR_1, VAR_2);
}
