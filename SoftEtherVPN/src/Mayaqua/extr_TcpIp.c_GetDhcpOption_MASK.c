
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ Id; } ;
typedef int LIST ;
typedef TYPE_1__ DHCP_OPTION ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

DHCP_OPTION *FUNC_2(LIST *VAR_0, UINT VAR_1)
{
 UINT VAR_2;
 DHCP_OPTION *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0);VAR_2++)
 {
  DHCP_OPTION *VAR_4 = FUNC_0(VAR_0, VAR_2);
  if (VAR_4->Id == VAR_1)
  {
   VAR_3 = VAR_4;
  }
 }

 return VAR_3;
}
