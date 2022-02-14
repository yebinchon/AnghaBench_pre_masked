
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char cable_selection_mask; } ;
struct TYPE_4__ {TYPE_1__ controller; } ;
struct isci_host {int id; TYPE_2__ oem_parameters; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static unsigned char *FUNC_1(struct isci_host *VAR_1)
{
 if (FUNC_0())
  return ((unsigned char *)&VAR_0)
   + VAR_1->id;
 else
  return &VAR_1->oem_parameters.controller.cable_selection_mask;
}
