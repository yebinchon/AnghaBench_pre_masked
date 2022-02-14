
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {unsigned int* regs; int regs_lock; } ;
struct ni_gpct {struct ni_gpct_device* counter_dev; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct ni_gpct*,unsigned int,int) ;

__attribute__((used)) static inline void FUNC_5(struct ni_gpct *VAR_1,
          enum ni_gpct_register
          VAR_2, unsigned VAR_3,
          unsigned VAR_4,
          unsigned VAR_5)
{
 struct ni_gpct_device *VAR_6 = VAR_1->counter_dev;
 unsigned long VAR_7;

 FUNC_0(VAR_2 >= VAR_0);
 FUNC_2(&VAR_6->regs_lock, VAR_7);
 VAR_6->regs[VAR_2] &= ~VAR_3;
 VAR_6->regs[VAR_2] |= (VAR_4 & VAR_3);
 FUNC_4(VAR_1,
         VAR_6->regs[VAR_2] | VAR_5,
         VAR_2);
 FUNC_1();
 FUNC_3(&VAR_6->regs_lock, VAR_7);
}
