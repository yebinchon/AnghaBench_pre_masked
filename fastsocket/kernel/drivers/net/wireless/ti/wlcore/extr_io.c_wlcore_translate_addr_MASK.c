
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int start; int size; } ;
struct TYPE_7__ {int start; int size; } ;
struct TYPE_6__ {int start; int size; } ;
struct TYPE_5__ {int start; int size; } ;
struct wlcore_partition_set {TYPE_4__ mem2; TYPE_3__ reg; TYPE_2__ mem; TYPE_1__ mem3; } ;
struct wl1271 {struct wlcore_partition_set curr_part; } ;


 int FUNC_0 (int,char*,int) ;

int FUNC_1(struct wl1271 *VAR_0, int VAR_1)
{
 struct wlcore_partition_set *VAR_2 = &VAR_0->curr_part;
 if ((VAR_1 >= VAR_2->mem.start) &&
     (VAR_1 < VAR_2->mem.start + VAR_2->mem.size))
  return VAR_1 - VAR_2->mem.start;
 else if ((VAR_1 >= VAR_2->reg.start) &&
   (VAR_1 < VAR_2->reg.start + VAR_2->reg.size))
  return VAR_1 - VAR_2->reg.start + VAR_2->mem.size;
 else if ((VAR_1 >= VAR_2->mem2.start) &&
   (VAR_1 < VAR_2->mem2.start + VAR_2->mem2.size))
  return VAR_1 - VAR_2->mem2.start + VAR_2->mem.size +
   VAR_2->reg.size;
 else if ((VAR_1 >= VAR_2->mem3.start) &&
   (VAR_1 < VAR_2->mem3.start + VAR_2->mem3.size))
  return VAR_1 - VAR_2->mem3.start + VAR_2->mem.size +
   VAR_2->reg.size + VAR_2->mem2.size;

 FUNC_0(1, "HW address 0x%x out of range", VAR_1);
 return 0;
}
