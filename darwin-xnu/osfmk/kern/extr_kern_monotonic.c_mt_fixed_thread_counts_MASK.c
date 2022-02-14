
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_4__ {int* mth_counts; int mth_gen; } ;
struct TYPE_5__ {TYPE_1__ t_monotonic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;

int
FUNC_1(thread_t VAR_6, uint64_t *VAR_7)
{
 uint64_t VAR_8, VAR_9;
 uint64_t VAR_10 = 0, VAR_11 = 0;
 uint64_t VAR_12[VAR_4];
spin:
 VAR_8 = FUNC_0(&VAR_6->t_monotonic.mth_gen,
   VAR_5);
retry:
 if (VAR_8 & 1) {
  VAR_10++;
  if (VAR_10 > VAR_3) {
   return VAR_1;
  }
  goto spin;
 }

 for (int VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_12[VAR_13] = VAR_6->t_monotonic.mth_counts[VAR_13];
 }
 VAR_9 = FUNC_0(&VAR_6->t_monotonic.mth_gen,
   VAR_5);
 if (VAR_9 != VAR_8) {
  VAR_11++;
  if (VAR_11 > VAR_2) {
   return VAR_0;
  }
  VAR_8 = VAR_9;
  goto retry;
 }





 for (int VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  VAR_7[VAR_14] = VAR_12[VAR_14];
 }
 return 0;
}
