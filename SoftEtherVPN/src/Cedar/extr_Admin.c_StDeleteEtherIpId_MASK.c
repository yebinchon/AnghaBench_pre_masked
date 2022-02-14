
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int id ;
typedef int UINT ;
struct TYPE_11__ {TYPE_1__* Server; } ;
struct TYPE_10__ {int Id; } ;
struct TYPE_9__ {int * IPsecServer; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ ETHERIP_ID ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*,char*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int,int ) ;

UINT FUNC_5(ADMIN *VAR_6, ETHERIP_ID *VAR_7)
{
 SERVER *VAR_8 = VAR_6->Server;
 CEDAR *VAR_9 = VAR_8->Cedar;
 UINT VAR_10 = VAR_1;
 char VAR_11[VAR_3];

 VAR_5;
 VAR_4;
 if (FUNC_2(VAR_8, "b_support_ipsec") == 0 || VAR_8->IPsecServer == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_4(VAR_11, sizeof(VAR_11), VAR_7->Id);

 if (FUNC_1(VAR_8->IPsecServer, VAR_11) == 0)
 {
  return VAR_2;
 }

 FUNC_0(VAR_6, ((void*)0), "LA_DEL_ETHERIP_ID", VAR_11);

 FUNC_3(VAR_8);

 return VAR_1;
}
