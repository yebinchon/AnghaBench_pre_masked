
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int width; unsigned int height; } ;
struct TYPE_5__ {TYPE_1__ video_info; } ;
typedef TYPE_2__ d3d9_video_t ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_2(d3d9_video_t *VAR_0,
      unsigned VAR_1, unsigned VAR_2)
{

   if ( (VAR_1 == VAR_0->video_info.width)
         && (VAR_2 == VAR_0->video_info.height))
      return 0;

   FUNC_0("[D3D9]: Resize %ux%u.\n", VAR_1, VAR_2);
   VAR_0->video_info.width = VAR_1;
   VAR_0->video_info.height = VAR_2;
   FUNC_1(&VAR_1, &VAR_2);

   return 1;
}
