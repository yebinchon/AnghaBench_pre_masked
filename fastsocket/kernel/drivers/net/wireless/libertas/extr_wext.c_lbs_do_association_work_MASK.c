
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int assoc_work; int work_thread; scalar_t__ surpriseremoved; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct lbs_private *VAR_0)
{
 if (VAR_0->surpriseremoved)
  return;
 FUNC_0(&VAR_0->assoc_work);
 FUNC_1(VAR_0->work_thread, &VAR_0->assoc_work, 0);
}
