
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_surface {size_t flip_page; TYPE_2__* pages; } ;
typedef int * drmModeAtomicReqPtr ;
struct TYPE_6__ {int fd; int plane_fb_prop_id; int plane_id; } ;
struct TYPE_4__ {int fb_id; } ;
struct TYPE_5__ {TYPE_1__ buf; } ;


 int FUNC_0 (char*,...) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_surface *VAR_2)
{



   int VAR_3;
   static drmModeAtomicReqPtr VAR_4 = ((void*)0);

   VAR_4 = FUNC_2();




   VAR_3 = FUNC_1(VAR_4,
         VAR_0.plane_id,
         VAR_0.plane_fb_prop_id,
         VAR_2->pages[VAR_2->flip_page].buf.fb_id);

   if (VAR_3 < 0)
   {
      FUNC_0 ("DRM: failed to add atomic property for pageflip\n");
   }







   VAR_3 = FUNC_3(VAR_0.fd, VAR_4, 0, ((void*)0));

   if (VAR_3 < 0)
   {
      FUNC_0 ("DRM: failed to commit for pageflip: %s\n", FUNC_5(VAR_1));
   }

   VAR_2->flip_page = !(VAR_2->flip_page);

   FUNC_4(VAR_4);
}
