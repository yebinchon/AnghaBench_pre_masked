
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slice_mask {int dummy; } ;
struct TYPE_2__ {unsigned int user_psize; } ;
struct mm_struct {TYPE_1__ context; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct slice_mask,struct slice_mask) ;
 int FUNC_1 (struct slice_mask,struct slice_mask) ;
 int FUNC_2 (char*,struct mm_struct*,unsigned long,unsigned long) ;
 struct slice_mask FUNC_3 (struct mm_struct*,unsigned int) ;
 int FUNC_4 (char*,struct slice_mask) ;
 struct slice_mask FUNC_5 (unsigned long,unsigned long) ;

int FUNC_6(struct mm_struct *VAR_2, unsigned long VAR_3,
      unsigned long VAR_4)
{
 struct slice_mask VAR_5, VAR_6;
 unsigned int VAR_7 = VAR_2->context.user_psize;

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 VAR_6 = FUNC_3(VAR_2, VAR_7);
 return !FUNC_1(VAR_5, VAR_6);
}
