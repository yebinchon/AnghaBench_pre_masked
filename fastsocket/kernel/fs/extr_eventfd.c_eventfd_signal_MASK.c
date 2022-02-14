
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct eventfd_ctx {int count; TYPE_1__ wqh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4(struct eventfd_ctx *VAR_3, int VAR_4)
{
 unsigned long VAR_5;

 if (VAR_4 < 0)
  return -VAR_0;
 FUNC_0(&VAR_3->wqh.lock, VAR_5);
 if (VAR_2 - VAR_3->count < VAR_4)
  VAR_4 = (int) (VAR_2 - VAR_3->count);
 VAR_3->count += VAR_4;
 if (FUNC_2(&VAR_3->wqh))
  FUNC_3(&VAR_3->wqh, VAR_1);
 FUNC_1(&VAR_3->wqh.lock, VAR_5);

 return VAR_4;
}
