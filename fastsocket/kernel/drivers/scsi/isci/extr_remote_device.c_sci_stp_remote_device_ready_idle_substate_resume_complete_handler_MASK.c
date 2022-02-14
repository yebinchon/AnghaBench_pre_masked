
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ previous_state_id; } ;
struct isci_remote_device {TYPE_2__ sm; TYPE_1__* owning_port; } ;
struct isci_host {int dummy; } ;
struct TYPE_3__ {struct isci_host* owning_controller; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct isci_host*,struct isci_remote_device*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct isci_remote_device *VAR_2 = VAR_1;
 struct isci_host *VAR_3 = VAR_2->owning_port->owning_controller;




 if (VAR_2->sm.previous_state_id != VAR_0)
  FUNC_0(VAR_3, VAR_2);
}
