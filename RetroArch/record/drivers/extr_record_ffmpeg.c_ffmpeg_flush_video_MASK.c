
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ctx; } ;
struct TYPE_9__ {TYPE_1__ muxer; } ;
typedef TYPE_2__ ffmpeg_t ;
struct TYPE_10__ {int size; } ;
typedef TYPE_3__ AVPacket ;


 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_2(ffmpeg_t *VAR_0)
{
   for (;;)
   {
      AVPacket VAR_1;
      if (!FUNC_1(VAR_0, &VAR_1, ((void*)0)) || !VAR_1.size ||
            FUNC_0(VAR_0->muxer.ctx, &VAR_1) < 0)
         break;
   }
}
