
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ref; } ;
struct TYPE_7__ {int ThreadList; int Engine; void* ClientList; void* IPsecSaList; void* IkeSaList; void* SendPacketList; int Now; int * IPsec; TYPE_2__* Cedar; } ;
typedef int IPSEC_SERVER ;
typedef TYPE_1__ IKE_SERVER ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int *,int *,char*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int) ;

IKE_SERVER *FUNC_7(CEDAR *VAR_3, IPSEC_SERVER *VAR_4)
{
 IKE_SERVER *VAR_5;

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_6(sizeof(IKE_SERVER));

 VAR_5->Cedar = VAR_3;
 FUNC_0(VAR_3->ref);

 VAR_5->IPsec = VAR_4;

 VAR_5->Now = FUNC_5();

 VAR_5->SendPacketList = FUNC_3(((void*)0));

 VAR_5->IkeSaList = FUNC_3(VAR_2);

 VAR_5->IPsecSaList = FUNC_3(VAR_0);

 VAR_5->ClientList = FUNC_3(VAR_1);

 VAR_5->Engine = FUNC_2();

 VAR_5->ThreadList = FUNC_4();

 FUNC_1(VAR_5, ((void*)0), ((void*)0), ((void*)0), "LI_START");

 return VAR_5;
}
