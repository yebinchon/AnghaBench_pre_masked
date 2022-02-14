
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ ipv6_scope_id; } ;
struct TYPE_4__ {scalar_t__ Id; TYPE_3__ IpAddress; } ;
typedef int LIST ;
typedef TYPE_1__ AC ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(LIST *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0);VAR_1++)
 {
  AC *VAR_2 = FUNC_1(VAR_0, VAR_1);

  if (FUNC_0(&VAR_2->IpAddress))
  {
   VAR_2->IpAddress.ipv6_scope_id = 0;
  }

  VAR_2->Id = (VAR_1 + 1);
 }
}
