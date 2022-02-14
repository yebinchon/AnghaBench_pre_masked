
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct qdio_buffer** sbal; } ;
struct TYPE_6__ {struct qdio_buffer** sbal; } ;
struct zfcp_qdio {TYPE_1__ resp_q; TYPE_3__ req_q; TYPE_2__* adapter; } ;
struct qdio_buffer {int dummy; } ;
struct TYPE_5__ {scalar_t__ ccw_device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct zfcp_qdio*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct zfcp_qdio *VAR_2)
{
 struct qdio_buffer **VAR_3, **VAR_4;
 int VAR_5;

 if (!VAR_2)
  return;

 if (VAR_2->adapter->ccw_device)
  FUNC_2(VAR_2->adapter->ccw_device);

 VAR_3 = VAR_2->req_q.sbal;
 VAR_4 = VAR_2->resp_q.sbal;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 += VAR_0) {
  FUNC_0((unsigned long) VAR_3[VAR_5]);
  FUNC_0((unsigned long) VAR_4[VAR_5]);
 }

 FUNC_1(VAR_2);
}
