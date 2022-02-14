
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {int k; int x; int * s; } ;
typedef int THREAD ;
typedef int SOCK ;
typedef TYPE_1__ CHECK_NETWORK_2 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,int,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;

void FUNC_4(THREAD *VAR_0, void *VAR_1)
{
 CHECK_NETWORK_2 *VAR_2 = (CHECK_NETWORK_2 *)VAR_1;
 SOCK *VAR_3 = VAR_2->s;
 UINT VAR_4 = 0;

 if (FUNC_3(VAR_3, VAR_2->x, VAR_2->k))
 {
  while (1)
  {
   VAR_4++;
   if (FUNC_2(VAR_3, &VAR_4, sizeof(UINT), 1) == 0)
   {
    break;
   }
  }
 }

 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
}
