
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ DhcpIpStart; scalar_t__ DhcpIpEnd; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (TYPE_1__*,scalar_t__) ;
 int * FUNC_2 (TYPE_1__*,scalar_t__) ;

UINT FUNC_3(VH *VAR_0)
{
 UINT VAR_1, VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_0(VAR_0->DhcpIpStart);
 VAR_2 = FUNC_0(VAR_0->DhcpIpEnd);

 for (VAR_3 = VAR_1; VAR_3 <= VAR_2;VAR_3++)
 {
  UINT VAR_4 = FUNC_0(VAR_3);
  if (FUNC_1(VAR_0, VAR_4) == ((void*)0) && FUNC_2(VAR_0, VAR_4) == ((void*)0))
  {

   return VAR_4;
  }
 }


 return 0;
}
