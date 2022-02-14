
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct zfcp_qdio_queue {int count; scalar_t__ first; } ;
struct zfcp_qdio {TYPE_1__* adapter; struct zfcp_qdio_queue resp_q; } ;
struct ccw_device {int dummy; } ;
struct TYPE_2__ {struct ccw_device* ccw_device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 unsigned int FUNC_2 (struct ccw_device*,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct zfcp_qdio *VAR_2, int VAR_3)
{
 struct zfcp_qdio_queue *VAR_4 = &VAR_2->resp_q;
 struct ccw_device *VAR_5 = VAR_2->adapter->ccw_device;
 u8 VAR_6, VAR_7 = VAR_4->first;
 unsigned int VAR_8;

 VAR_6 = FUNC_0(&VAR_4->count) + VAR_3;

 VAR_8 = FUNC_2(VAR_5, VAR_0, 0, VAR_7, VAR_6);

 if (FUNC_3(VAR_8)) {
  FUNC_1(&VAR_4->count, VAR_6);

 } else {
  VAR_4->first += VAR_6;
  VAR_4->first %= VAR_1;
  FUNC_1(&VAR_4->count, 0);
 }
}
