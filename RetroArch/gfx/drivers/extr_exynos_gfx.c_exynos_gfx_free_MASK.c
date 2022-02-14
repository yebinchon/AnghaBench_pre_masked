
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_video {int * font; TYPE_1__* font_driver; int perf; int num_pages; int pages; struct exynos_video* data; } ;
struct exynos_data {int * font; TYPE_1__* font_driver; int perf; int num_pages; int pages; struct exynos_data* data; } ;
struct TYPE_2__ {int (* free ) (int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct exynos_video*) ;
 int FUNC_2 (struct exynos_video*) ;
 int FUNC_3 (struct exynos_video*) ;
 int FUNC_4 (struct exynos_video*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct exynos_video*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_0)
{
   struct exynos_video *VAR_1 = VAR_0;
   struct exynos_data *VAR_2;

   if (!VAR_1)
      return;

   VAR_2 = VAR_1->data;

   FUNC_4(VAR_2);


   while (FUNC_5(VAR_2->pages, VAR_2->num_pages) > 1)
      FUNC_0(-1);

   FUNC_3(VAR_2);
   FUNC_2(VAR_2);
   FUNC_1(VAR_2);





   FUNC_7(VAR_2);

   if (VAR_1->font != ((void*)0) && VAR_1->font_driver != ((void*)0))
      VAR_1->font_driver->free(VAR_1->font);

   FUNC_7(VAR_1);
}
