
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int math_matrix_4x4 ;
struct TYPE_4__ {int ubo; } ;
struct TYPE_5__ {int mvp; } ;
struct TYPE_6__ {TYPE_1__ frame; int mvp; TYPE_2__ ubo_values; } ;
typedef TYPE_3__ d3d10_video_t ;


 int FUNC_0 (int ,int ,int ,void**) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 float VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(void* VAR_2, unsigned VAR_3)
{
   math_matrix_4x4 VAR_4;
   void* VAR_5 = ((void*)0);
   d3d10_video_t* VAR_6 = (d3d10_video_t*)VAR_2;

   if (!VAR_6)
      return;

   FUNC_3(VAR_4, VAR_3 * (VAR_1 / 2.0f));
   FUNC_2(VAR_6->mvp, VAR_4, VAR_6->ubo_values.mvp);

   FUNC_0(VAR_6->frame.ubo, VAR_0, 0, &VAR_5);
   *(math_matrix_4x4*)VAR_5 = VAR_6->mvp;
   FUNC_1(VAR_6->frame.ubo);
}
