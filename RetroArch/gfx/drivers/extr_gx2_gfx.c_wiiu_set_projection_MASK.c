
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rotation; int * ubo_mvp; } ;
typedef TYPE_1__ wiiu_video_t ;
typedef int math_matrix_4x4 ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,int,int ,int,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(wiiu_video_t *VAR_2)
{
   math_matrix_4x4 VAR_3, VAR_4;
   FUNC_2(VAR_3, 0, 1, 1, 0, -1, 1);
   FUNC_3(VAR_4, VAR_2->rotation * -VAR_1);
   FUNC_1((*VAR_2->ubo_mvp), VAR_4, VAR_3);
   FUNC_0(VAR_0, VAR_2->ubo_mvp, sizeof(*VAR_2->ubo_mvp));
}
