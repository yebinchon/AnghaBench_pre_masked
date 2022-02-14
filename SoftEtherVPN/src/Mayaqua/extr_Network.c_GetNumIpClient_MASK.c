
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int NumConnections; } ;
typedef TYPE_1__ IP_CLIENT ;
typedef int IP ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

UINT FUNC_3(IP *VAR_1)
{
 IP_CLIENT *VAR_2;
 UINT VAR_3 = 0;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_0);
 {
  VAR_2 = FUNC_1(VAR_1);

  if (VAR_2 != ((void*)0))
  {
   VAR_3 = VAR_2->NumConnections;
  }
 }
 FUNC_2(VAR_0);

 return VAR_3;
}
