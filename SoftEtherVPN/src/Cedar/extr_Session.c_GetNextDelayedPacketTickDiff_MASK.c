
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_6__ {scalar_t__ DelayedForwardTick; } ;
struct TYPE_5__ {int DelayedPacketList; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ PKT ;


 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;

UINT FUNC_6(SESSION *VAR_0)
{
 UINT VAR_1;
 UINT VAR_2 = 0x7fffffff;
 UINT64 VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0->DelayedPacketList) >= 1)
 {
  VAR_3 = FUNC_4();

  FUNC_2(VAR_0->DelayedPacketList);
  {
   for (VAR_1 = 0;VAR_1 < FUNC_1(VAR_0->DelayedPacketList);VAR_1++)
   {
    PKT *VAR_4 = FUNC_0(VAR_0->DelayedPacketList, VAR_1);
    UINT64 VAR_5 = VAR_4->DelayedForwardTick;
    UINT VAR_6 = 0x7fffffff;

    if (VAR_3 >= VAR_5)
    {
     VAR_6 = 0;
    }
    else
    {
     VAR_6 = (UINT)(VAR_5 - VAR_3);
    }

    VAR_2 = FUNC_3(VAR_2, VAR_6);
   }
  }
  FUNC_5(VAR_0->DelayedPacketList);
 }

 return VAR_2;
}
