
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {TYPE_1__* context; } ;
struct pebs_tracer {TYPE_2__ ds; } ;
struct TYPE_6__ {unsigned int nr_counter_reset; int sizeof_ptr_field; } ;
struct TYPE_4__ {scalar_t__ ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_3__ VAR_3 ;

int FUNC_0(struct pebs_tracer *VAR_4,
        unsigned int VAR_5, u64 VAR_6)
{
 if (!VAR_4)
  return -VAR_0;

 if (VAR_3.nr_counter_reset < VAR_5)
  return -VAR_0;

 *(u64 *)(VAR_4->ds.context->ds +
   (VAR_1 * VAR_3.sizeof_ptr_field) +
   (VAR_5 * VAR_2)) = VAR_6;

 return 0;
}
