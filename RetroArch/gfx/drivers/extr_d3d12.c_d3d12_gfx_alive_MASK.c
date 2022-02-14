
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ full_width; scalar_t__ full_height; } ;
struct TYPE_4__ {TYPE_1__ vp; scalar_t__ resize_chain; } ;
typedef TYPE_2__ d3d12_video_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_2(void* VAR_0)
{
   bool VAR_1;
   d3d12_video_t* VAR_2 = (d3d12_video_t*)VAR_0;

   FUNC_1(&VAR_1, &VAR_2->resize_chain, &VAR_2->vp.full_width, &VAR_2->vp.full_height);

   if (VAR_2->resize_chain && VAR_2->vp.full_width != 0 && VAR_2->vp.full_height != 0)
      FUNC_0(&VAR_2->vp.full_width, &VAR_2->vp.full_height);

   return !VAR_1;
}
