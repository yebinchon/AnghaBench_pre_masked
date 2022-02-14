
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device_attr {int local_ca_ack_delay; } ;
struct cm_device {int ack_delay; int ib_device; } ;


 scalar_t__ FUNC_0 (int ,struct ib_device_attr*) ;

__attribute__((used)) static void FUNC_1(struct cm_device *VAR_0)
{
 struct ib_device_attr VAR_1;

 if (FUNC_0(VAR_0->ib_device, &VAR_1))
  VAR_0->ack_delay = 0;
 else
  VAR_0->ack_delay = VAR_1.local_ca_ack_delay;
}
