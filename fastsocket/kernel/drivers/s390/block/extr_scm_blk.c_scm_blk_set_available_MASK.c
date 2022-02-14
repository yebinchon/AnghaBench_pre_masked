
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scm_blk_dev {scalar_t__ state; int lock; TYPE_1__* scmdev; } ;
struct TYPE_2__ {scalar_t__ address; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct scm_blk_dev *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 if (VAR_2->state == VAR_1)
  FUNC_0("%lu: Write access to the SCM increment is restored\n",
   (unsigned long) VAR_2->scmdev->address);
 VAR_2->state = VAR_0;
 FUNC_2(&VAR_2->lock, VAR_3);
}
