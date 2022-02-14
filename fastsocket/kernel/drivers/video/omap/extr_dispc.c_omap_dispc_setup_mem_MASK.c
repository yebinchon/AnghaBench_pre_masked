
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_mem_region {size_t size; int type; unsigned long paddr; } ;
struct TYPE_3__ {unsigned int region_cnt; struct omapfb_mem_region* region; } ;
struct TYPE_4__ {int * map_count; TYPE_1__ mem_desc; int ** res_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__ VAR_4 ;
 unsigned long FUNC_1 (int,size_t) ;
 int FUNC_2 (unsigned long,size_t) ;
 int FUNC_3 (unsigned long,size_t) ;

__attribute__((used)) static int FUNC_4(int VAR_5, size_t VAR_6, int VAR_7,
    unsigned long *VAR_8)
{
 struct omapfb_mem_region *VAR_9;
 unsigned long VAR_10 = 0;

 if ((unsigned)VAR_5 > VAR_4.mem_desc.region_cnt)
  return -VAR_2;
 if (VAR_7 >= VAR_0)
  return -VAR_2;
 if (VAR_4.res_map[VAR_7] == ((void*)0))
  return -VAR_3;
 VAR_9 = &VAR_4.mem_desc.region[VAR_5];
 if (VAR_6 == VAR_9->size && VAR_7 == VAR_9->type)
  return 0;
 if (FUNC_0(&VAR_4.map_count[VAR_5]))
  return -VAR_1;
 if (VAR_9->size != 0)
  FUNC_2(VAR_9->paddr, VAR_9->size);
 if (VAR_6 != 0) {
  VAR_10 = FUNC_1(VAR_7, VAR_6);
  if (!VAR_10) {

   FUNC_3(VAR_9->paddr, VAR_9->size);
   return -VAR_3;
  }
 }
 VAR_9->paddr = VAR_10;
 VAR_9->size = VAR_6;
 VAR_9->type = VAR_7;

 *VAR_8 = VAR_10;

 return 0;
}
