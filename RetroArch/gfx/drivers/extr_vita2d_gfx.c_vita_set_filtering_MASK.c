
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tex_filter; int texture; } ;
typedef TYPE_1__ vita_video_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2, unsigned VAR_3, bool VAR_4)
{
   vita_video_t *VAR_5 = (vita_video_t *)VAR_2;

   if (VAR_5)
   {
      VAR_5->tex_filter = VAR_4 ?
         VAR_0 : VAR_1;
      FUNC_0(VAR_5->texture,VAR_5->tex_filter,
            VAR_5->tex_filter);
   }
}
