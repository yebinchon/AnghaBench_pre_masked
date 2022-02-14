
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ userdata; } ;
typedef TYPE_2__ video_frame_info_t ;
struct TYPE_8__ {int shader_data; TYPE_1__* shader; } ;
typedef TYPE_3__ gl_t ;
struct TYPE_6__ {int (* use ) (TYPE_3__*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(video_frame_info_t *VAR_4)
{
   gl_t *VAR_5 = (gl_t*)VAR_4->userdata;

   FUNC_1(VAR_0);
   FUNC_0(VAR_2, VAR_1);

   VAR_5->shader->use(VAR_5, VAR_5->shader_data, VAR_3,
         1);
}
