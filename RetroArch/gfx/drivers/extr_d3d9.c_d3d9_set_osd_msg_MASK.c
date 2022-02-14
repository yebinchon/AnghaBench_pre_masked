
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct font_params {int dummy; } ;
struct TYPE_3__ {int dev; } ;
typedef TYPE_1__ d3d9_video_t ;
typedef int LPDIRECT3DDEVICE9 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct font_params const*) ;
 int FUNC_3 (int *,void*,char const*,struct font_params const*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0,
      video_frame_info_t *VAR_1,
      const char *VAR_2,
      const void *VAR_3, void *VAR_4)
{
   d3d9_video_t *VAR_5 = (d3d9_video_t*)VAR_0;
   LPDIRECT3DDEVICE9 VAR_6 = VAR_5->dev;
   const struct font_params *VAR_7 = (const
         struct font_params*)VAR_3;

   FUNC_2(VAR_5, VAR_7);
   FUNC_0(VAR_6);
   FUNC_3(VAR_1, VAR_4,
         VAR_2, VAR_7);
   FUNC_1(VAR_6);
}
