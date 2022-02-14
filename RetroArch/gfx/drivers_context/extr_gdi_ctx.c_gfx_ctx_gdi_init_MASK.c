
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef void gfx_ctx_gdi_data_t ;
struct TYPE_3__ {int lpfnWndProc; int member_0; } ;
typedef TYPE_1__ WNDCLASSEX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void *FUNC_5(
      video_frame_info_t *VAR_2, void *VAR_3)
{
   WNDCLASSEX VAR_4 = {0};
   gfx_ctx_gdi_data_t *VAR_5 = (gfx_ctx_gdi_data_t*)FUNC_0(1, sizeof(*VAR_5));

   if (!VAR_5)
      return ((void*)0);

   if (VAR_1)
      goto error;

   FUNC_4();
   FUNC_2();

   VAR_4.lpfnWndProc = VAR_0;
   if (!FUNC_3(&VAR_4, 1, ((void*)0)))
      goto error;

   return VAR_5;

error:
   if (VAR_5)
      FUNC_1(VAR_5);
   return ((void*)0);
}
