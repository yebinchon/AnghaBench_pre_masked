
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct locomo_dev {TYPE_1__ dev; } ;
struct locomo {int lock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct locomo* FUNC_0 (struct locomo_dev*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

void FUNC_6(struct locomo_dev *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 struct locomo *VAR_10 = FUNC_0(VAR_5);

 if (VAR_7)
  FUNC_1(VAR_5->dev.parent, VAR_4, 1);
 else
  FUNC_1(VAR_5->dev.parent, VAR_4, 0);

 FUNC_3(&VAR_10->lock, VAR_9);
 FUNC_2(VAR_8, VAR_10->base + VAR_3 + VAR_2);
 FUNC_5(100);
 FUNC_2(VAR_6, VAR_10->base + VAR_3 + VAR_1);
 FUNC_2(VAR_8 | VAR_0, VAR_10->base + VAR_3 + VAR_2);
 FUNC_4(&VAR_10->lock, VAR_9);
}
