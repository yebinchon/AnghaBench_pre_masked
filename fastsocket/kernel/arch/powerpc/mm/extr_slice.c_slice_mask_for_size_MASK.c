
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct slice_mask {unsigned int low_slices; unsigned int high_slices; int member_1; int member_0; } ;
struct TYPE_2__ {unsigned long low_slices_psize; unsigned long high_slices_psize; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static struct slice_mask FUNC_0(struct mm_struct *VAR_2, int VAR_3)
{
 struct slice_mask VAR_4 = { 0, 0 };
 unsigned long VAR_5;
 u64 VAR_6;

 VAR_6 = VAR_2->context.low_slices_psize;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (((VAR_6 >> (VAR_5 * 4)) & 0xf) == VAR_3)
   VAR_4.low_slices |= 1u << VAR_5;

 VAR_6 = VAR_2->context.high_slices_psize;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (((VAR_6 >> (VAR_5 * 4)) & 0xf) == VAR_3)
   VAR_4.high_slices |= 1u << VAR_5;

 return VAR_4;
}
