
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wa_rpipe {int seg_list; int seg_lock; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wa_rpipe *VAR_0)
{
 FUNC_1(&VAR_0->refcnt);
 FUNC_2(&VAR_0->seg_lock);
 FUNC_0(&VAR_0->seg_list);
}
