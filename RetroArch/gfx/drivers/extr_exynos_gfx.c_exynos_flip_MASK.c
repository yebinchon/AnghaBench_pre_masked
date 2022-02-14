
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_page {int buf_id; } ;
struct exynos_data {scalar_t__ pageflip_pending; int cur_page; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct exynos_page*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct exynos_data *VAR_3, struct exynos_page *VAR_4)
{

   if (VAR_3->pageflip_pending > 0)
      FUNC_2(-1);


   if (FUNC_1(VAR_2, VAR_1, VAR_4->buf_id,
            VAR_0, VAR_4) != 0)
   {
      FUNC_0("[video_exynos]: failed to issue page flip\n");
      return -1;
   }
   else
   {
      VAR_3->pageflip_pending++;
   }


   if (!VAR_3->cur_page)
      FUNC_2(-1);

   return 0;
}
