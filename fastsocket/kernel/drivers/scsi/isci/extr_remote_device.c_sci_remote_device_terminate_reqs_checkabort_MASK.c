
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct isci_request {int dummy; } ;
struct isci_remote_device {TYPE_1__* owning_port; } ;
struct isci_host {struct isci_request** reqs; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
struct TYPE_2__ {struct isci_host* owning_controller; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isci_host*,struct isci_remote_device*,int,struct isci_request*) ;

__attribute__((used)) static enum sci_status FUNC_1(
 struct isci_remote_device *VAR_2,
 int VAR_3)
{
 struct isci_host *VAR_4 = VAR_2->owning_port->owning_controller;
 enum sci_status VAR_5 = VAR_1;
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct isci_request *VAR_7 = VAR_4->reqs[VAR_6];
  enum sci_status VAR_8;

  VAR_8 = FUNC_0(VAR_4, VAR_2, VAR_3, VAR_7);
  if (VAR_8 != VAR_1)
   VAR_5 = VAR_8;
 }
 return VAR_5;
}
