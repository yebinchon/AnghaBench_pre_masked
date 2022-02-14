
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_mem_region {scalar_t__ map; scalar_t__ alloc; } ;
struct TYPE_3__ {int region_cnt; struct omapfb_mem_region* region; } ;
struct TYPE_4__ {TYPE_1__ mem_desc; int ** res_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (struct omapfb_mem_region*) ;
 int FUNC_2 (struct omapfb_mem_region*) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct omapfb_mem_region *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1.res_map[VAR_3] != ((void*)0))
   FUNC_0(VAR_1.res_map[VAR_3]);
 }
 VAR_2 = &VAR_1.mem_desc.region[0];
 for (VAR_3 = 0; VAR_3 < VAR_1.mem_desc.region_cnt; VAR_3++, VAR_2++) {
  if (VAR_2->alloc)
   FUNC_1(VAR_2);
  else {
   if (VAR_2->map)
    FUNC_2(VAR_2);
  }
 }
}
