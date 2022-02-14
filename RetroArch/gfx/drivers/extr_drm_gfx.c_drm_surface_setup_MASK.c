
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_video {int dummy; } ;
struct drm_surface {int numpages; int total_pitch; int pitch; int bpp; int src_width; int src_height; float aspect; scalar_t__ flip_page; struct drm_page* pages; int pixformat; } ;
struct TYPE_3__ {int width; int height; } ;
struct drm_page {int used; TYPE_1__ buf; int page_used_mutex; struct drm_video* drmvars; struct drm_surface* surface; } ;
struct TYPE_4__ {int fd; } ;


 int FUNC_0 (char*) ;
 struct drm_surface* FUNC_1 (int,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*,int,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_1, int VAR_2, int VAR_3,
      int VAR_4, int VAR_5, uint32_t VAR_6,
      int VAR_7, float VAR_8, int VAR_9, int VAR_10,
      struct drm_surface **VAR_11)
{
   struct drm_video *VAR_12 = VAR_1;
   int VAR_13;
   struct drm_surface *VAR_14 = ((void*)0);

   *VAR_11 = FUNC_1 (1, sizeof(struct drm_surface));

   VAR_14 = *VAR_11;


   VAR_14->numpages = VAR_9;





   VAR_14->total_pitch = VAR_4;
   VAR_14->pitch = VAR_2 * VAR_5;
   VAR_14->bpp = VAR_5;
   VAR_14->pixformat = VAR_6;
   VAR_14->src_width = VAR_2;
   VAR_14->src_height = VAR_3;
   VAR_14->aspect = VAR_8;



   VAR_14->pages = (struct drm_page*)
      FUNC_1(VAR_14->numpages, sizeof(struct drm_page));

   for (VAR_13 = 0; VAR_13 < VAR_14->numpages; VAR_13++)
   {
      VAR_14->pages[VAR_13].used = 0;
      VAR_14->pages[VAR_13].surface = VAR_14;
      VAR_14->pages[VAR_13].drmvars = VAR_12;
      VAR_14->pages[VAR_13].page_used_mutex = FUNC_3();
   }


   for (VAR_13 = 0; VAR_13 < VAR_14->numpages; VAR_13++)
   {
      VAR_14->pages[VAR_13].buf.width = VAR_2;
      VAR_14->pages[VAR_13].buf.height = VAR_3;
      int VAR_15 = FUNC_2(
            VAR_0.fd, &VAR_14->pages[VAR_13].buf, VAR_5, VAR_6);

      if (VAR_15)
      {
         FUNC_0 ("DRM: can't create fb\n");
      }
   }

   VAR_14->flip_page = 0;
}
