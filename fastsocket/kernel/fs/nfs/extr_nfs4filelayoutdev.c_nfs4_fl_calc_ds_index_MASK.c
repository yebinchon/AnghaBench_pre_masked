
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct pnfs_layout_segment {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dsaddr; } ;
struct TYPE_3__ {size_t* stripe_indices; } ;


 TYPE_2__* FUNC_0 (struct pnfs_layout_segment*) ;

u32
FUNC_1(struct pnfs_layout_segment *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0)->dsaddr->stripe_indices[VAR_1];
}
