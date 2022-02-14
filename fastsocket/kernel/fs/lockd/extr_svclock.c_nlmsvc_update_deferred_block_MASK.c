
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_block {int b_granted; scalar_t__ b_fl; int b_flags; } ;
struct file_lock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct file_lock*) ;

__attribute__((used)) static void
FUNC_1(struct nlm_block *VAR_2, struct file_lock *VAR_3,
        int VAR_4)
{
 VAR_2->b_flags |= VAR_0;
 if (VAR_4 == 0)
  VAR_2->b_granted = 1;
 else
  VAR_2->b_flags |= VAR_1;
 if (VAR_3) {
  if (VAR_2->b_fl)
   FUNC_0(VAR_2->b_fl, VAR_3);
 }
}
