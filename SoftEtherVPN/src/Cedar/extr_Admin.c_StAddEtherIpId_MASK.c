
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {TYPE_1__* Server; } ;
struct TYPE_11__ {int Id; } ;
struct TYPE_10__ {int * IPsecServer; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ ETHERIP_ID ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

UINT FUNC_4(ADMIN *VAR_4, ETHERIP_ID *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 UINT VAR_8 = VAR_1;

 VAR_3;
 VAR_2;
 if (FUNC_2(VAR_6, "b_support_ipsec") == 0 || VAR_6->IPsecServer == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_1(VAR_6->IPsecServer, VAR_5);

 FUNC_0(VAR_4, ((void*)0), "LA_ADD_ETHERIP_ID", VAR_5->Id);

 FUNC_3(VAR_6);

 return VAR_1;
}
