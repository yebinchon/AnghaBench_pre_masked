
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int lock; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct subchannel *VAR_2)
{
 VAR_2->lock = FUNC_0(sizeof(spinlock_t), VAR_1);
 if (!VAR_2->lock)
  return -VAR_0;
 FUNC_1(VAR_2->lock);
 return 0;
}
