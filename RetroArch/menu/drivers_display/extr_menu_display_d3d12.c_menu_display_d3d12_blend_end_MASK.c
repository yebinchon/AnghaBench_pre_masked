
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ userdata; } ;
typedef TYPE_3__ video_frame_info_t ;
struct TYPE_7__ {int pipe; int pipe_noblend; } ;
struct TYPE_6__ {int cmd; } ;
struct TYPE_9__ {TYPE_2__ sprites; TYPE_1__ queue; } ;
typedef TYPE_4__ d3d12_video_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(video_frame_info_t *VAR_0)
{
   d3d12_video_t* VAR_1 = (d3d12_video_t*)VAR_0->userdata;

   VAR_1->sprites.pipe = VAR_1->sprites.pipe_noblend;
   FUNC_0(VAR_1->queue.cmd, VAR_1->sprites.pipe);
}
