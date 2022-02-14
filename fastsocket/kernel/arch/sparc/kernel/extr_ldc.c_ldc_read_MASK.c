
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ldc_channel {scalar_t__ hs_state; int lock; TYPE_1__* mops; } ;
struct TYPE_2__ {int (* read ) (struct ldc_channel*,void*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ldc_channel*,void*,unsigned int) ;

int FUNC_3(struct ldc_channel *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 if (!VAR_4)
  return -VAR_0;

 if (!VAR_5)
  return 0;

 FUNC_0(&VAR_3->lock, VAR_6);

 if (VAR_3->hs_state != VAR_2)
  VAR_7 = -VAR_1;
 else
  VAR_7 = VAR_3->mops->read(VAR_3, VAR_4, VAR_5);

 FUNC_1(&VAR_3->lock, VAR_6);

 return VAR_7;
}
