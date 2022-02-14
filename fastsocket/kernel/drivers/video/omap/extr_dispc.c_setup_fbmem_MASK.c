
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_mem_region {long paddr; int alloc; int map; int type; unsigned long size; int * vaddr; } ;
struct omapfb_mem_desc {int region_cnt; struct omapfb_mem_region* region; } ;
typedef int mem_start ;
typedef int mem_end ;
struct TYPE_4__ {int ** res_map; struct omapfb_mem_desc mem_desc; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct omapfb_mem_region*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__ VAR_5 ;
 int * FUNC_3 (unsigned long,size_t) ;
 int FUNC_4 (unsigned long*,int,int) ;
 int FUNC_5 (struct omapfb_mem_region*) ;
 int FUNC_6 (unsigned long,size_t) ;

__attribute__((used)) static int FUNC_7(struct omapfb_mem_desc *VAR_6)
{
 struct omapfb_mem_region *VAR_7;
 int VAR_8;
 int VAR_9;
 unsigned long VAR_10[VAR_0];
 unsigned long VAR_11[VAR_0];

 if (!VAR_6->region_cnt) {
  FUNC_2(VAR_5.fbdev->dev, "no memory regions defined\n");
  return -VAR_2;
 }

 VAR_7 = &VAR_6->region[0];
 FUNC_4(VAR_10, 0xff, sizeof(VAR_10));
 FUNC_4(VAR_11, 0, sizeof(VAR_11));

 for (VAR_8 = 0; VAR_8 < VAR_6->region_cnt; VAR_8++, VAR_7++) {
  int VAR_12;
  if (VAR_7->paddr) {
   VAR_7->alloc = 0;
   if (VAR_7->vaddr == ((void*)0)) {
    VAR_7->map = 1;
    if ((VAR_9 = FUNC_5(VAR_7)) < 0)
     return VAR_9;
   }
  } else {
   if (VAR_7->type != VAR_4) {
    FUNC_2(VAR_5.fbdev->dev,
     "unsupported memory type\n");
    return -VAR_1;
   }
   VAR_7->alloc = VAR_7->map = 1;
   if ((VAR_9 = FUNC_0(VAR_7)) < 0)
    return VAR_9;
  }
  VAR_12 = VAR_7->type;

  if (VAR_7->paddr < VAR_10[VAR_12])
   VAR_10[VAR_12] = VAR_7->paddr;
  if (VAR_7->paddr + VAR_7->size > VAR_11[VAR_12])
   VAR_11[VAR_12] = VAR_7->paddr + VAR_7->size;
 }

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  unsigned long VAR_13;
  size_t VAR_14;
  if (VAR_11[VAR_8] == 0)
   continue;
  VAR_13 = VAR_10[VAR_8];
  VAR_14 = VAR_11[VAR_8] - VAR_13;
  VAR_5.res_map[VAR_8] = FUNC_3(VAR_13, VAR_14);
  VAR_9 = -VAR_3;
  if (VAR_5.res_map[VAR_8] == ((void*)0))
   goto fail;




  FUNC_6(VAR_13, VAR_14);
 }

 VAR_5.mem_desc = *VAR_6;

 return 0;
fail:
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_5.res_map[VAR_8] != ((void*)0))
   FUNC_1(VAR_5.res_map[VAR_8]);
 }
 return VAR_9;
}
