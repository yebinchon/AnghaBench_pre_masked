
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_queue_req {int sbal_first; int sbal_last; } ;
struct TYPE_2__ {struct qdio_buffer** sbal; } ;
struct zfcp_qdio {TYPE_1__ req_q; } ;
struct qdio_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qdio_buffer**,int,int) ;

__attribute__((used)) static void FUNC_1(struct zfcp_qdio *VAR_1,
     struct zfcp_queue_req *VAR_2)
{
 struct qdio_buffer **VAR_3 = VAR_1->req_q.sbal;
 int VAR_4 = VAR_2->sbal_first;
 int VAR_5 = VAR_2->sbal_last;
 int VAR_6 = (VAR_5 - VAR_4 + VAR_0) %
  VAR_0 + 1;
 FUNC_0(VAR_3, VAR_4, VAR_6);
}
