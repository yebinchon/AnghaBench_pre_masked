
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int X; int Y; unsigned int Width; unsigned int Height; float MinZ; float MaxZ; } ;
struct TYPE_5__ {TYPE_1__ final_viewport; } ;
typedef TYPE_2__ d3d9_video_t ;


 int FUNC_0 (void*,unsigned int*,unsigned int*,int*,int*,int,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      unsigned VAR_1, unsigned VAR_2,
      bool VAR_3,
      bool VAR_4)
{
   int VAR_5 = 0;
   int VAR_6 = 0;
   d3d9_video_t *VAR_7 = (d3d9_video_t*)VAR_0;

   FUNC_0(VAR_0, &VAR_1, &VAR_2, &VAR_5, &VAR_6,
         VAR_3, VAR_4);


   if (VAR_5 < 0)
      VAR_5 = 0;
   if (VAR_6 < 0)
      VAR_6 = 0;

   VAR_7->final_viewport.X = VAR_5;
   VAR_7->final_viewport.Y = VAR_6;
   VAR_7->final_viewport.Width = VAR_1;
   VAR_7->final_viewport.Height = VAR_2;
   VAR_7->final_viewport.MinZ = 0.0f;
   VAR_7->final_viewport.MaxZ = 1.0f;

   FUNC_1(VAR_7, ((void*)0));
}
