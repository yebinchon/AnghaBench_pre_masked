
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {unsigned long thread_running_mask; int mask_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int
FUNC_2(struct lcs_card *VAR_0, unsigned long VAR_1)
{
        unsigned long VAR_2;
        int VAR_3 = 0;

 FUNC_0(&VAR_0->mask_lock, VAR_2);
        VAR_3 = (VAR_0->thread_running_mask & VAR_1);
 FUNC_1(&VAR_0->mask_lock, VAR_2);
        return VAR_3;
}
