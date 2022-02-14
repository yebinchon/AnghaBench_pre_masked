
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_video {TYPE_1__* data; } ;
struct TYPE_2__ {int sync; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bool VAR_1)
{
   struct exynos_video *VAR_2 = VAR_0;
   if (VAR_2 && VAR_2->data)
      VAR_2->data->sync = !VAR_1;
}
