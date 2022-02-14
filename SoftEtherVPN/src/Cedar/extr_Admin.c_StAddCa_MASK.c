
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int UINT ;
struct TYPE_17__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_16__ {scalar_t__ Bridge; } ;
struct TYPE_15__ {TYPE_11__* Cert; int HubName; } ;
struct TYPE_14__ {scalar_t__ ServerType; TYPE_3__* Cedar; } ;
struct TYPE_13__ {int is_compatible_bit; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_HUB_ADD_CA ;
typedef int HUB ;
typedef TYPE_3__ CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*) ;
 int FUNC_1 (int *,TYPE_11__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (TYPE_3__*) ;

UINT FUNC_8(ADMIN *VAR_9, RPC_HUB_ADD_CA *VAR_10)
{
 SERVER *VAR_11 = VAR_9->Server;
 CEDAR *VAR_12 = VAR_11->Cedar;
 HUB *VAR_13;

 if (VAR_11->ServerType == VAR_8)
 {
  return VAR_4;
 }

 if (VAR_12->Bridge)
 {
  return VAR_6;
 }

 if (VAR_10->Cert == ((void*)0))
 {
  return VAR_2;
 }

 if (VAR_10->Cert->is_compatible_bit == 0)
 {
  return VAR_5;
 }

 VAR_0;

 FUNC_5(VAR_12);
 {
  VAR_13 = FUNC_2(VAR_12, VAR_10->HubName);
 }
 FUNC_7(VAR_12);

 if (VAR_13 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_9->ServerAdmin == 0 && FUNC_3(VAR_13, "no_change_cert_list") != 0)
 {
  FUNC_6(VAR_13);
  return VAR_3;
 }

 FUNC_4(VAR_11);

 FUNC_0(VAR_9, VAR_13, "LA_ADD_CA");

 FUNC_1(VAR_13, VAR_10->Cert);

 FUNC_6(VAR_13);

 return VAR_7;
}
