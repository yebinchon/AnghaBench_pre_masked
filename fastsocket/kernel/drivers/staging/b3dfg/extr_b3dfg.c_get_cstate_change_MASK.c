
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b3dfg_dev {unsigned long cstate_tstamp; int cstate_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct b3dfg_dev *VAR_0)
{
 unsigned long VAR_1, VAR_2;

 FUNC_0(&VAR_0->cstate_lock, VAR_1);
 VAR_2 = VAR_0->cstate_tstamp;
 FUNC_1(&VAR_0->cstate_lock, VAR_1);
 return VAR_2;
}
