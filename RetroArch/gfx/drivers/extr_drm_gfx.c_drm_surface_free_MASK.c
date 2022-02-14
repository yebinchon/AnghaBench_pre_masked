
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_video {int dummy; } ;
struct drm_surface {int numpages; int used; struct drm_surface* pages; } ;


 int FUNC_0 (struct drm_surface*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct drm_surface **VAR_1)
{
   int VAR_2;
   struct drm_video *VAR_3 = VAR_0;
   struct drm_surface *VAR_4 = *VAR_1;

   for (VAR_2 = 0; VAR_2 < VAR_4->numpages; VAR_2++)
      VAR_4->pages[VAR_2].used = 0;

   FUNC_0(VAR_4->pages);

   FUNC_0(VAR_4);
   *VAR_1 = ((void*)0);
}
