
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ap_device {int queue_count; int reset; int timeout; TYPE_1__* drv; } ;
struct TYPE_2__ {int request_timeout; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ap_device *VAR_2)
{
 int VAR_3 = VAR_2->drv->request_timeout;

 VAR_2->queue_count++;
 if (VAR_2->queue_count == 1) {
  FUNC_0(&VAR_2->timeout, VAR_1 + VAR_3);
  VAR_2->reset = VAR_0;
 }
}
