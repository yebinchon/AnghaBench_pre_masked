
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {TYPE_1__* Server; } ;
struct TYPE_7__ {int * IPsecServer; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int IPSEC_SERVICES ;
typedef int CEDAR ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

UINT FUNC_4(ADMIN *VAR_4, IPSEC_SERVICES *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 UINT VAR_8 = VAR_1;

 VAR_3;
 VAR_2;
 if (FUNC_1(VAR_6, "b_support_ipsec") == 0 || VAR_6->IPsecServer == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_2(VAR_6->IPsecServer, VAR_5);

 FUNC_0(VAR_4, ((void*)0), "LA_SET_IPSEC_CONFIG");

 FUNC_3(VAR_6);

 return VAR_1;
}
