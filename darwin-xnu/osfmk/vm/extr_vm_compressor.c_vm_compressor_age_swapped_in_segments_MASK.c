
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;
typedef TYPE_1__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {scalar_t__ c_swappedin_ts; int c_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(boolean_t VAR_4)
{
 c_segment_t VAR_5;
 clock_sec_t VAR_6;
 clock_nsec_t VAR_7;

 FUNC_1(&VAR_6, &VAR_7);

 while (!FUNC_4(&VAR_3)) {

  VAR_5 = (c_segment_t)FUNC_5(&VAR_3);

  if (VAR_4 == VAR_2 && (VAR_6 - VAR_5->c_swappedin_ts) < VAR_1)
   break;

  FUNC_2(&VAR_5->c_lock);

  FUNC_0(VAR_5, VAR_0, VAR_2);

  FUNC_3(&VAR_5->c_lock);
 }
}
