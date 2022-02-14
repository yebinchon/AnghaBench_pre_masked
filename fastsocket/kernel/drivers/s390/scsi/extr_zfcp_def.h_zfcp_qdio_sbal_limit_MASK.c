
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_queue_req {int sbal_limit; int sbal_first; } ;
struct TYPE_2__ {int count; } ;
struct zfcp_qdio {TYPE_1__ req_q; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(struct zfcp_qdio *VAR_1,
     struct zfcp_queue_req *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_1->req_q.count);
 VAR_4 = FUNC_1(VAR_4, VAR_3);
 VAR_2->sbal_limit = (VAR_2->sbal_first + VAR_4 - 1)
     % VAR_0;
}
