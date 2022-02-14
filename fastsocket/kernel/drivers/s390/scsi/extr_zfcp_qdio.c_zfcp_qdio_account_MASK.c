
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
struct zfcp_qdio {unsigned long long req_q_time; int req_q_util; int stat_lock; TYPE_1__ req_q; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long long FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct zfcp_qdio *VAR_1)
{
 unsigned long long VAR_2, VAR_3;
 int VAR_4, VAR_5;

 FUNC_2(&VAR_1->stat_lock);
 VAR_2 = FUNC_1();
 VAR_3 = (VAR_2 - VAR_1->req_q_time) >> 12;
 VAR_4 = FUNC_0(&VAR_1->req_q.count);
 VAR_5 = VAR_0 - VAR_4;
 VAR_1->req_q_util += VAR_5 * VAR_3;
 VAR_1->req_q_time = VAR_2;
 FUNC_3(&VAR_1->stat_lock);
}
