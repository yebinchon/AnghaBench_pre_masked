
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct ocrdma_dev {TYPE_2__ av_tbl; } ;
struct ocrdma_ah {TYPE_1__* av; } ;
struct TYPE_3__ {scalar_t__ valid; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct ocrdma_dev *VAR_0, struct ocrdma_ah *VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(&VAR_0->av_tbl.lock, VAR_2);
 VAR_1->av->valid = 0;
 FUNC_1(&VAR_0->av_tbl.lock, VAR_2);
 return 0;
}
