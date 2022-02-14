
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* thread_call_t ;
struct TYPE_5__ {int q_link; } ;
struct TYPE_6__ {int tc_flags; TYPE_1__ tc_call; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __inline__ void
FUNC_2(thread_call_t VAR_5)
{
 if (VAR_5 >= VAR_2 &&
     VAR_5 < &VAR_2[VAR_0]) {
  FUNC_0((VAR_5->tc_flags & VAR_1) == 0);
  FUNC_1(&VAR_3, &VAR_5->tc_call.q_link);
  VAR_4++;
 }
}
