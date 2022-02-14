
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_completion {int done; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ub_completion *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 FUNC_0(&VAR_0->lock, VAR_1);
 VAR_2 = VAR_0->done;
 FUNC_1(&VAR_0->lock, VAR_1);
 return VAR_2;
}
