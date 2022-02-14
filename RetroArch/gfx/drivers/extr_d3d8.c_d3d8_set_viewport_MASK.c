
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct d3d_matrix {int dummy; } ;
struct TYPE_3__ {int X; int Y; unsigned int Width; unsigned int Height; float MinZ; float MaxZ; } ;
struct TYPE_4__ {double dev_rotation; int mvp_rotate; int mvp; TYPE_1__ final_viewport; } ;
typedef TYPE_2__ d3d8_video_t ;


 double VAR_0 ;
 int FUNC_0 (void*,unsigned int*,unsigned int*,int*,int*,int,int) ;
 int FUNC_1 (struct d3d_matrix*) ;
 int FUNC_2 (struct d3d_matrix*,struct d3d_matrix*,struct d3d_matrix*) ;
 int FUNC_3 (struct d3d_matrix*,int ,int,int ,int,float,float) ;
 int FUNC_4 (struct d3d_matrix*,double) ;
 int FUNC_5 (int *,struct d3d_matrix*) ;

__attribute__((used)) static void FUNC_6(void *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      bool VAR_4,
      bool VAR_5)
{
   struct d3d_matrix VAR_6, VAR_7, VAR_8, VAR_9;
   int VAR_10 = 0;
   int VAR_11 = 0;
   d3d8_video_t *VAR_12 = (d3d8_video_t*)VAR_1;

   FUNC_0(VAR_1, &VAR_2, &VAR_3, &VAR_10, &VAR_11,
         VAR_4, VAR_5);


   if (VAR_10 < 0)
      VAR_10 = 0;
   if (VAR_11 < 0)
      VAR_11 = 0;

   VAR_12->final_viewport.X = VAR_10;
   VAR_12->final_viewport.Y = VAR_11;
   VAR_12->final_viewport.Width = VAR_2;
   VAR_12->final_viewport.Height = VAR_3;
   VAR_12->final_viewport.MinZ = 0.0f;
   VAR_12->final_viewport.MaxZ = 0.0f;

   FUNC_3(&VAR_7, 0, 1, 0, 1, 0.0f, 1.0f);
   FUNC_1(&VAR_8);
   FUNC_4(&VAR_8, VAR_12->dev_rotation * (VAR_0 / 2.0));
   FUNC_2(&VAR_6, &VAR_7, &VAR_8);
   FUNC_5(&VAR_12->mvp, &VAR_7);
   FUNC_5(&VAR_12->mvp_rotate, &VAR_9);
}
