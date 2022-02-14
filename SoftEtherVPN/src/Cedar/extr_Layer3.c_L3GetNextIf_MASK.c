
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {int IpAddress; int SubnetMask; } ;
struct TYPE_10__ {int IfList; } ;
struct TYPE_9__ {int GatewayAddress; } ;
typedef TYPE_1__ L3TABLE ;
typedef TYPE_2__ L3SW ;
typedef TYPE_3__ L3IF ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

L3IF *FUNC_3(L3SW *VAR_0, UINT VAR_1, UINT *VAR_2)
{
 UINT VAR_3;
 L3IF *VAR_4;
 UINT VAR_5 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_1 == 0xffffffff)
 {
  return ((void*)0);
 }

 VAR_4 = ((void*)0);



 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_0->IfList);VAR_3++)
 {
  L3IF *VAR_6 = FUNC_1(VAR_0->IfList, VAR_3);

  if ((VAR_6->IpAddress & VAR_6->SubnetMask) == (VAR_1 & VAR_6->SubnetMask))
  {
   VAR_4 = VAR_6;
   VAR_5 = VAR_1;
   break;
  }
 }

 if (VAR_4 == ((void*)0))
 {

  L3TABLE *VAR_7 = FUNC_0(VAR_0, VAR_1);

  if (VAR_7 == ((void*)0))
  {

   return ((void*)0);
  }
  else
  {


   for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_0->IfList);VAR_3++)
   {
    L3IF *VAR_8 = FUNC_1(VAR_0->IfList, VAR_3);

    if ((VAR_8->IpAddress & VAR_8->SubnetMask) == (VAR_7->GatewayAddress & VAR_8->SubnetMask))
    {
     VAR_4 = VAR_8;
     VAR_5 = VAR_7->GatewayAddress;
     break;
    }
   }
  }
 }

 if (VAR_4 == ((void*)0))
 {

  return ((void*)0);
 }

 if (VAR_2 != ((void*)0))
 {
  *VAR_2 = VAR_5;
 }

 return VAR_4;
}
