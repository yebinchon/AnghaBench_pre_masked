
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_page {scalar_t__ buf_id; TYPE_1__* bo; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct exynos_page *VAR_0, unsigned VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
   {
      if (VAR_0[VAR_2].bo != ((void*)0))
      {
         if (VAR_0[VAR_2].buf_id != 0)
            FUNC_0(VAR_0[VAR_2].buf_id, VAR_0[VAR_2].bo->handle);

         FUNC_1(VAR_0[VAR_2].bo);
      }
   }
}
