
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t uint ;
struct lck_mtx_test_stats_elem {int samples; int tot; int avg; scalar_t__ max; scalar_t__ min; int lock; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 struct lck_mtx_test_stats_elem* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(
 uint64_t VAR_4,
 uint64_t VAR_5,
 uint VAR_6)
{
 if (FUNC_1(&VAR_2) == VAR_1) {
  FUNC_0(VAR_6 < VAR_0);
  FUNC_0(VAR_4 <= VAR_5);

  uint64_t VAR_7 = VAR_5 - VAR_4;
  struct lck_mtx_test_stats_elem* VAR_8 = &VAR_3[VAR_6];

  FUNC_2(&VAR_8->lock);

  VAR_8->samples++;
  VAR_8->tot += VAR_7;
  VAR_8->avg = VAR_8->tot / VAR_8->samples;
  if (VAR_8->max < VAR_7)
   VAR_8->max = VAR_7;
  if (VAR_8->min > VAR_7)
   VAR_8->min = VAR_7;
  FUNC_3(&VAR_8->lock);
 }
}
