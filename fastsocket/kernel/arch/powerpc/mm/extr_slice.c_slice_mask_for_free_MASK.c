
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {unsigned int low_slices; unsigned int high_slices; int member_1; int member_0; } ;
struct mm_struct {scalar_t__ task_size; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct mm_struct*,unsigned long) ;
 int FUNC_1 (struct mm_struct*,unsigned long) ;

__attribute__((used)) static struct slice_mask FUNC_2(struct mm_struct *VAR_3)
{
 struct slice_mask VAR_4 = { 0, 0 };
 unsigned long VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (!FUNC_1(VAR_3, VAR_5))
   VAR_4.low_slices |= 1u << VAR_5;

 if (VAR_3->task_size <= VAR_0)
  return VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (!FUNC_0(VAR_3, VAR_5))
   VAR_4.high_slices |= 1u << VAR_5;

 return VAR_4;
}
