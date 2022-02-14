
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ctx; } ;
struct TYPE_8__ {TYPE_1__ muxer; } ;
typedef TYPE_2__ ffmpeg_t ;
struct TYPE_9__ {int pb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_6__* VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_5(void *VAR_1)
{
   ffmpeg_t *VAR_2 = (ffmpeg_t*)VAR_1;
   if (!VAR_2)
      return 0;

   FUNC_2(VAR_2);


   FUNC_4(VAR_2);

   FUNC_3(VAR_2);


   FUNC_0(VAR_2->muxer.ctx);

   FUNC_1(VAR_0->pb);

   return 1;
}
