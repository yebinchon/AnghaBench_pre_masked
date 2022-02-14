
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_16__ {TYPE_1__* Server; } ;
struct TYPE_15__ {int lock; } ;
struct TYPE_14__ {int SubnetMask; int IpAddress; int Name; int HubName; } ;
struct TYPE_13__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_L3IF ;
typedef TYPE_3__ L3SW ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ,int,int) ;
 TYPE_3__* FUNC_5 (int *,int ) ;
 int * FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;

UINT FUNC_10(ADMIN *VAR_7, RPC_L3IF *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 UINT VAR_11 = VAR_4;
 L3SW *VAR_12;


 if (FUNC_3(VAR_8->SubnetMask) == 0 || FUNC_2(VAR_8->IpAddress) == 0)
 {
  return VAR_0;
 }
 if ((VAR_8->IpAddress & (~VAR_8->SubnetMask)) == 0)
 {
  return VAR_0;
 }

 VAR_5;

 VAR_6;

 VAR_12 = FUNC_5(VAR_10, VAR_8->Name);

 if (VAR_12 == ((void*)0))
 {
  VAR_11 = VAR_3;
 }
 else
 {
  FUNC_7(VAR_12->lock);
  {
   if (FUNC_6(VAR_12, VAR_8->HubName) != ((void*)0))
   {

    VAR_11 = VAR_2;
   }
   else
   {
    if (FUNC_4(VAR_12, VAR_8->HubName, VAR_8->IpAddress, VAR_8->SubnetMask) == 0)
    {
     VAR_11 = VAR_1;
    }
    else
    {
     FUNC_0(VAR_7, ((void*)0), "LA_ADD_L3_IF", VAR_8->HubName, VAR_8->Name);

     FUNC_1(VAR_9);
    }
   }
  }
  FUNC_9(VAR_12->lock);
  FUNC_8(VAR_12);
 }

 return VAR_11;
}
