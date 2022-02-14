
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {unsigned int* regs; int regs_lock; } ;
struct ni_gpct {struct ni_gpct_device* counter_dev; } ;
typedef enum ni_gpct_register { ____Placeholder_ni_gpct_register } ni_gpct_register ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline unsigned FUNC_3(const struct ni_gpct *VAR_1,
         enum ni_gpct_register
         VAR_2)
{
 struct ni_gpct_device *VAR_3 = VAR_1->counter_dev;
 unsigned long VAR_4;
 unsigned VAR_5;

 FUNC_0(VAR_2 >= VAR_0);
 FUNC_1(&VAR_3->regs_lock, VAR_4);
 VAR_5 = VAR_3->regs[VAR_2];
 FUNC_2(&VAR_3->regs_lock, VAR_4);
 return VAR_5;
}
