
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_14__ {int is_compatible_bit; int root_cert; } ;
struct TYPE_13__ {TYPE_1__* Server; } ;
struct TYPE_12__ {int Flag1; int * Key; TYPE_6__* Cert; } ;
struct TYPE_11__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_KEY_PAIR ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*) ;
 int FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (int *,TYPE_6__*,int *) ;

UINT FUNC_5(ADMIN *VAR_4, RPC_KEY_PAIR *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;

 VAR_3;

 if (VAR_5->Cert == ((void*)0) || VAR_5->Key == ((void*)0))
 {
  return VAR_2;
 }

 if (VAR_5->Cert->is_compatible_bit == 0)
 {
  return VAR_0;
 }

 if (FUNC_1(VAR_5->Cert, VAR_5->Key) == 0)
 {
  return VAR_2;
 }

 VAR_5->Flag1 = 1;
 if (VAR_5->Cert->root_cert == 0)
 {
  if (FUNC_2(VAR_5->Cert) == 0)
  {
   VAR_5->Flag1 = 0;
  }
 }

 FUNC_4(VAR_7, VAR_5->Cert, VAR_5->Key);

 FUNC_0(VAR_4, ((void*)0), "LA_SET_SERVER_CERT");

 FUNC_3(VAR_6);

 return VAR_1;
}
