
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {TYPE_1__* raw; } ;
struct TYPE_2__ {int lock; int thread; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct rc_dev *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0->raw)
  return;

 FUNC_0(&VAR_0->raw->lock, VAR_1);
 FUNC_2(VAR_0->raw->thread);
 FUNC_1(&VAR_0->raw->lock, VAR_1);
}
