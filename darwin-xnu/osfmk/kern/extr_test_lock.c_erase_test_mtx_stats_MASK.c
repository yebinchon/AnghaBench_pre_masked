
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct lck_mtx_test_stats_elem {int lock; int min; scalar_t__ max; scalar_t__ avg; scalar_t__ tot; scalar_t__ samples; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 struct lck_mtx_test_stats_elem* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(
 uint VAR_2)
{
 FUNC_0(VAR_2 < VAR_0);
 struct lck_mtx_test_stats_elem* VAR_3 = &VAR_1[VAR_2];

 FUNC_1(&VAR_3->lock);

 VAR_3->samples = 0;
 VAR_3->tot = 0;
 VAR_3->avg = 0;
 VAR_3->max = 0;
 VAR_3->min = ~0;

 FUNC_2(&VAR_3->lock);
}
