
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct __vxge_hw_virtualpath {struct __vxge_hw_ring* ringh; struct __vxge_hw_fifo* fifoh; } ;
struct __vxge_hw_ring {TYPE_3__* stats; } ;
struct __vxge_hw_fifo {TYPE_2__* stats; } ;
struct __vxge_hw_channel {size_t length; int type; int * stats; int * reserve_arr; int * orig_arr; TYPE_1__* vph; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_6__ {int common_stats; } ;
struct TYPE_5__ {int common_stats; } ;
struct TYPE_4__ {struct __vxge_hw_virtualpath* vpath; } ;




 int VAR_0 ;

enum vxge_hw_status
FUNC_0(struct __vxge_hw_channel *VAR_1)
{
 u32 VAR_2;
 struct __vxge_hw_virtualpath *VAR_3;

 VAR_3 = VAR_1->vph->vpath;

 if ((VAR_1->reserve_arr != ((void*)0)) && (VAR_1->orig_arr != ((void*)0))) {
  for (VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2++)
   VAR_1->orig_arr[VAR_2] = VAR_1->reserve_arr[VAR_2];
 }

 switch (VAR_1->type) {
 case 129:
  VAR_3->fifoh = (struct __vxge_hw_fifo *)VAR_1;
  VAR_1->stats = &((struct __vxge_hw_fifo *)
    VAR_1)->stats->common_stats;
  break;
 case 128:
  VAR_3->ringh = (struct __vxge_hw_ring *)VAR_1;
  VAR_1->stats = &((struct __vxge_hw_ring *)
    VAR_1)->stats->common_stats;
  break;
 default:
  break;
 }

 return VAR_0;
}
