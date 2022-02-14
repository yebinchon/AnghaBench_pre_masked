
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int Traffic; } ;
typedef TYPE_1__ USER ;
typedef int TRAFFIC ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(USER *VAR_0, TRAFFIC *VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->lock);
 {
  if (VAR_1 != ((void*)0))
  {
   FUNC_0(VAR_0->Traffic, VAR_1, sizeof(TRAFFIC));
  }
  else
  {
   FUNC_3(VAR_0->Traffic, sizeof(TRAFFIC));
  }
 }
 FUNC_2(VAR_0->lock);
}
