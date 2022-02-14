
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ DhcpIpStart; scalar_t__ DhcpIpEnd; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_19__ {scalar_t__ IpAddress; int MacAddress; } ;
struct TYPE_18__ {scalar_t__ SecureNAT_RandomizeAssignIp; } ;
typedef TYPE_2__ HUB_OPTION ;
typedef TYPE_3__ DHCP_LEASE ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 TYPE_3__* FUNC_5 (TYPE_1__*,scalar_t__) ;
 TYPE_3__* FUNC_6 (TYPE_1__*,int *) ;
 TYPE_3__* FUNC_7 (TYPE_1__*,scalar_t__) ;
 TYPE_3__* FUNC_8 (TYPE_1__*,int *) ;

UINT FUNC_9(VH *VAR_0, UCHAR *VAR_1, UINT VAR_2)
{
 UINT VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2 != 0)
 {

  DHCP_LEASE *VAR_4 = FUNC_5(VAR_0, VAR_2);
  if (VAR_4 == ((void*)0))
  {
   VAR_4 = FUNC_7(VAR_0, VAR_2);
  }

  if (VAR_4 != ((void*)0))
  {


   if (FUNC_0(VAR_1, VAR_4->MacAddress, 6) == 0)
   {

    if (FUNC_1(VAR_0->DhcpIpStart) <= FUNC_1(VAR_2) &&
     FUNC_1(VAR_2) <= FUNC_1(VAR_0->DhcpIpEnd))
    {

     VAR_3 = VAR_2;
    }
   }
  }
  else
  {

   if (FUNC_1(VAR_0->DhcpIpStart) <= FUNC_1(VAR_2) &&
    FUNC_1(VAR_2) <= FUNC_1(VAR_0->DhcpIpEnd))
   {

    VAR_3 = VAR_2;
   }
   else
   {

   }
  }
 }

 if (VAR_3 == 0)
 {


  DHCP_LEASE *VAR_5 = FUNC_6(VAR_0, VAR_1);
  if (VAR_5 == ((void*)0))
  {
   VAR_5 = FUNC_8(VAR_0, VAR_1);
  }

  if (VAR_5 != ((void*)0))
  {

   if (FUNC_1(VAR_0->DhcpIpStart) <= FUNC_1(VAR_5->IpAddress) &&
    FUNC_1(VAR_5->IpAddress) <= FUNC_1(VAR_0->DhcpIpEnd))
   {

    VAR_3 = VAR_5->IpAddress;
   }
  }
 }

 if (VAR_3 == 0)
 {

  HUB_OPTION *VAR_6 = FUNC_4(VAR_0);

  if (VAR_6 != ((void*)0) && VAR_6->SecureNAT_RandomizeAssignIp)
  {
   VAR_3 = FUNC_3(VAR_0, VAR_1);
  }
  else
  {
   VAR_3 = FUNC_2(VAR_0);
  }
 }

 return VAR_3;
}
