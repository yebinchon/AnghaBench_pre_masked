
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int MacAddress; } ;
typedef TYPE_1__ NIC_ENTRY ;
typedef int LIST ;


 scalar_t__ FUNC_0 (int ,void*,int) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

bool FUNC_3(LIST *VAR_0, void *VAR_1)
{
 bool VAR_2 = 0;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_0);VAR_3++)
 {
  NIC_ENTRY *VAR_4 = FUNC_1(VAR_0, VAR_3);

  if (FUNC_0(VAR_4->MacAddress, VAR_1, 6) == 0)
  {
   VAR_2 = 1;
   break;
  }
 }

 return VAR_2;
}
