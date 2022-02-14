
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_data {int * device; int ** buf; int * pages; int num_pages; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct exynos_data *VAR_3)
{
   unsigned VAR_4;


   if (FUNC_1(VAR_2, VAR_1, 0,
            0, 0, ((void*)0), 0, ((void*)0)))
      FUNC_0("[video_exynos]: failed to disable the CRTC.\n");

   FUNC_3(VAR_3->pages, VAR_3->num_pages);

   FUNC_5(VAR_3->pages);
   VAR_3->pages = ((void*)0);

   for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
   {
      FUNC_2(VAR_3->buf[VAR_4]);
      VAR_3->buf[VAR_4] = ((void*)0);
   }

   FUNC_4(VAR_3->device);
   VAR_3->device = ((void*)0);
}
