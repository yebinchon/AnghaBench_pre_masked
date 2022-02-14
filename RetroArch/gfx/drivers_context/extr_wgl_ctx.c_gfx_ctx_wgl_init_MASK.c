
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef void gfx_ctx_wgl_data_t ;
struct TYPE_3__ {int lpfnWndProc; int member_0; } ;
typedef TYPE_1__ WNDCLASSEX ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,int,int *) ;
 int FUNC_7 () ;

__attribute__((used)) static void *FUNC_8(video_frame_info_t *VAR_6, void *VAR_7)
{
   WNDCLASSEX VAR_8 = {0};
   gfx_ctx_wgl_data_t *VAR_9 = (gfx_ctx_wgl_data_t*)FUNC_0(1, sizeof(*VAR_9));

   if (!VAR_9)
      return ((void*)0);

   if (VAR_3)
      FUNC_3(((void*)0));





   FUNC_7();
   FUNC_5();

   VAR_8.lpfnWndProc = VAR_1;
   if (!FUNC_6(&VAR_8, 1, ((void*)0)))
      goto error;

   switch (VAR_4)
   {
      case 128:




         break;
      case 129:
      default:
         break;
   }

   return VAR_9;

error:
   if (VAR_9)
      FUNC_2(VAR_9);
   return ((void*)0);
}
