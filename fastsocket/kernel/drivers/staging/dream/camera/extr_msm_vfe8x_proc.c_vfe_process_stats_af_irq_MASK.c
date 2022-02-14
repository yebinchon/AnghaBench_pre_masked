
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int boolean ;
struct TYPE_3__ {int pingPongStatus; int droppedStatsFrameCount; int bufToRender; int nextFrameAddrBuf; int ackPending; } ;
struct TYPE_4__ {TYPE_1__ afStatsControl; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 boolean VAR_1;

 if (!(VAR_0->afStatsControl.ackPending)) {


  VAR_0->afStatsControl.pingPongStatus =
   FUNC_0();

  VAR_1 =
   (VAR_0->afStatsControl.pingPongStatus) ^ 1;

  VAR_0->afStatsControl.bufToRender =
   FUNC_1(VAR_1);


  FUNC_3(VAR_1,
   VAR_0->afStatsControl.nextFrameAddrBuf);

  FUNC_2(VAR_0->afStatsControl.bufToRender);
 } else
  VAR_0->afStatsControl.droppedStatsFrameCount++;
}
