
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {unsigned long thread_allowed_mask; unsigned long thread_start_mask; int mask_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int
FUNC_2(struct lcs_card *VAR_1, unsigned long VAR_2)
{
        unsigned long VAR_3;

 FUNC_0(&VAR_1->mask_lock, VAR_3);
        if ( !(VAR_1->thread_allowed_mask & VAR_2) ||
              (VAR_1->thread_start_mask & VAR_2) ) {
                FUNC_1(&VAR_1->mask_lock, VAR_3);
                return -VAR_0;
        }
        VAR_1->thread_start_mask |= VAR_2;
 FUNC_1(&VAR_1->mask_lock, VAR_3);
        return 0;
}
