
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int math_matrix_4x4 ;
struct TYPE_6__ {unsigned int rotation; int ubo; } ;
struct TYPE_7__ {TYPE_1__ frame; int mvp; int mvp_no_rot; } ;
typedef TYPE_2__ d3d12_video_t ;
struct TYPE_8__ {int member_1; int member_0; } ;
typedef TYPE_3__ D3D12_RANGE ;


 int FUNC_0 (int ,int ,TYPE_3__*,void**) ;
 int FUNC_1 (int ,int ,int *) ;
 float VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,float) ;

__attribute__((used)) static void FUNC_5(void* VAR_1, unsigned VAR_2)
{
   math_matrix_4x4 VAR_3;
   math_matrix_4x4* VAR_4;
   D3D12_RANGE VAR_5 = { 0, 0 };
   d3d12_video_t* VAR_6 = (d3d12_video_t*)VAR_1;

   if (!VAR_6)
      return;

   FUNC_2(VAR_6);
   VAR_6->frame.rotation = VAR_2;

   FUNC_4(VAR_3, VAR_6->frame.rotation * (VAR_0 / 2.0f));
   FUNC_3(VAR_6->mvp, VAR_3, VAR_6->mvp_no_rot);

   FUNC_0(VAR_6->frame.ubo, 0, &VAR_5, (void**)&VAR_4);
   *VAR_4 = VAR_6->mvp;
   FUNC_1(VAR_6->frame.ubo, 0, ((void*)0));
}
