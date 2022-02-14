
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rotation; } ;
typedef TYPE_1__ vk_t ;
struct video_ortho {int member_1; int member_3; int member_4; int member_5; int member_2; int member_0; } ;


 int FUNC_0 (TYPE_1__*,struct video_ortho*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, unsigned VAR_1)
{
   vk_t *VAR_2 = (vk_t*)VAR_0;
   struct video_ortho VAR_3 = {0, 1, 0, 1, -1, 1};

   if (!VAR_2)
      return;

   VAR_2->rotation = 270 * VAR_1;
   FUNC_0(VAR_2, &VAR_3, 1);
}
