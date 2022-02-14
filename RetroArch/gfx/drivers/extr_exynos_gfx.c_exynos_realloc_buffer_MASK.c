
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exynos_data {TYPE_1__** src; struct exynos_bo** buf; int device; } ;
struct exynos_bo {unsigned int size; int handle; } ;
typedef enum exynos_buffer_type { ____Placeholder_exynos_buffer_type } exynos_buffer_type ;
struct TYPE_4__ {int buf_type; } ;
struct TYPE_3__ {int * bo; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,unsigned int,unsigned int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (struct exynos_bo*) ;
 int FUNC_3 (int) ;
 struct exynos_bo* FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct exynos_data *VAR_2,
      enum exynos_buffer_type VAR_3, unsigned VAR_4)
{
   struct exynos_bo *VAR_5 = VAR_2->buf[VAR_3];

   if (!VAR_5)
      return -1;

   if (VAR_4 > VAR_5->size)
   {
      unsigned VAR_6;






      FUNC_2(VAR_5);
      VAR_5 = FUNC_4(VAR_2->device, VAR_4);

      if (!VAR_5)
      {
         FUNC_0("[video_exynos]: reallocation failed\n");
         return -1;
      }

      VAR_2->buf[VAR_3] = VAR_5;


      for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
      {
         if (VAR_1[VAR_6].buf_type == VAR_3)
            VAR_2->src[VAR_6]->bo[0] = VAR_5->handle;
      }
   }

   return 0;
}
