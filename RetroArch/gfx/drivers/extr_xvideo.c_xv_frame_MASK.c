
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int height; int width; int y; int x; int full_height; int full_width; } ;
struct TYPE_8__ {TYPE_5__ vp; int image; int gc; int port; int keep_aspect; int (* render_func ) (TYPE_1__*,void const*,unsigned int,unsigned int,unsigned int) ;} ;
typedef TYPE_1__ xv_t ;
typedef int video_frame_info_t ;
typedef int uint64_t ;
struct TYPE_9__ {int height; int width; } ;
typedef TYPE_2__ XWindowAttributes ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,unsigned int,unsigned int,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,void const*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,unsigned int,unsigned int) ;
 int FUNC_8 (TYPE_1__*,char const*,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_9(void *VAR_3, const void *VAR_4, unsigned VAR_5,
      unsigned VAR_6, uint64_t VAR_7,
      unsigned VAR_8, const char *VAR_9, video_frame_info_t *VAR_10)
{
   XWindowAttributes VAR_11;
   xv_t *VAR_12 = (xv_t*)VAR_3;

   if (!VAR_4)
      return 1;

   if (!FUNC_7(VAR_12, VAR_5, VAR_6))
      return 0;

   FUNC_0(VAR_1, VAR_2, &VAR_11);
   VAR_12->render_func(VAR_12, VAR_4, VAR_5, VAR_6, VAR_8);

   FUNC_6(VAR_12->keep_aspect, &VAR_12->vp, VAR_11.width, VAR_11.height);
   VAR_12->vp.full_width = VAR_11.width;
   VAR_12->vp.full_height = VAR_11.height;





   if (VAR_9)
      FUNC_8(VAR_12, VAR_9, VAR_5 << 1, VAR_6 << 1);

   FUNC_2(VAR_1, VAR_12->port, VAR_2, VAR_12->gc, VAR_12->image,
         0, 0, VAR_5 << 1, VAR_6 << 1,
         VAR_12->vp.x, VAR_12->vp.y, VAR_12->vp.width, VAR_12->vp.height,
         1);
   FUNC_1(VAR_1, VAR_0);

   FUNC_5(((void*)0), VAR_10);

   return 1;
}
