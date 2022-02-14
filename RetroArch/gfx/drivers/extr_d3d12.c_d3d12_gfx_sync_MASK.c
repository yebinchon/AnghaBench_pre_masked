
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fenceValue; int fenceEvent; int fence; } ;
struct TYPE_5__ {TYPE_1__ queue; } ;
typedef TYPE_2__ d3d12_video_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(d3d12_video_t* VAR_1)
{
   if (FUNC_0(VAR_1->queue.fence) < VAR_1->queue.fenceValue)
   {
      FUNC_1(
            VAR_1->queue.fence, VAR_1->queue.fenceValue, VAR_1->queue.fenceEvent);
      FUNC_2(VAR_1->queue.fenceEvent, VAR_0);
   }
}
