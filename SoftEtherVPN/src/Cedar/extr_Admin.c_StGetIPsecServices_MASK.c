
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {TYPE_1__* Server; } ;
struct TYPE_5__ {int * IPsecServer; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int IPSEC_SERVICES ;
typedef int CEDAR ;
typedef TYPE_2__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;

UINT FUNC_3(ADMIN *VAR_4, IPSEC_SERVICES *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 UINT VAR_8 = VAR_1;

 VAR_3;
 VAR_2;
 if (FUNC_0(VAR_6, "b_support_ipsec") == 0 || VAR_6->IPsecServer == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_2(VAR_5, sizeof(IPSEC_SERVICES));
 FUNC_1(VAR_6->IPsecServer, VAR_5);

 return VAR_1;
}
