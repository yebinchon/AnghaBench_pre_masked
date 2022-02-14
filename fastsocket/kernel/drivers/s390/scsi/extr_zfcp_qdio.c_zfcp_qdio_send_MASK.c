
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_queue_req {int sbal_first; int sbal_number; } ;
struct zfcp_qdio_queue {int first; int count; int sbal; } ;
struct zfcp_qdio {TYPE_1__* adapter; struct zfcp_qdio_queue req_q; } ;
struct TYPE_2__ {int ccw_device; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,unsigned int,int ,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct zfcp_qdio*) ;
 int FUNC_4 (int ,int,int) ;

int FUNC_5(struct zfcp_qdio *VAR_2, struct zfcp_queue_req *VAR_3)
{
 struct zfcp_qdio_queue *VAR_4 = &VAR_2->req_q;
 int VAR_5 = VAR_3->sbal_first;
 int VAR_6 = VAR_3->sbal_number;
 int VAR_7;
 unsigned int VAR_8 = VAR_0;

 FUNC_3(VAR_2);

 VAR_7 = FUNC_1(VAR_2->adapter->ccw_device, VAR_8, 0, VAR_5,
    VAR_6);
 if (FUNC_2(VAR_7)) {
  FUNC_4(VAR_4->sbal, VAR_5, VAR_6);
  return VAR_7;
 }


 FUNC_0(VAR_6, &VAR_4->count);
 VAR_4->first += VAR_6;
 VAR_4->first %= VAR_1;
 return 0;
}
