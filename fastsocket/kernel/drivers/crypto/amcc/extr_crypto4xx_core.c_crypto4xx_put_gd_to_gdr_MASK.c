
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct crypto4xx_device {scalar_t__ gdr_tail; scalar_t__ gdr_head; TYPE_1__* core_dev; } ;
struct TYPE_2__ {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_2(struct crypto4xx_device *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->core_dev->lock, VAR_2);
 if (VAR_1->gdr_tail == VAR_1->gdr_head) {
  FUNC_1(&VAR_1->core_dev->lock, VAR_2);
  return 0;
 }

 if (VAR_1->gdr_tail != VAR_0)
  VAR_1->gdr_tail++;
 else
  VAR_1->gdr_tail = 0;

 FUNC_1(&VAR_1->core_dev->lock, VAR_2);

 return 0;
}
