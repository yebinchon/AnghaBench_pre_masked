
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvscsi_host_data {scalar_t__ reenable_crq; scalar_t__ reset_crq; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct ibmvscsi_host_data *VAR_0)
{
 if (FUNC_0())
  return 1;
 else if (VAR_0->reset_crq) {
  return 1;
 } else if (VAR_0->reenable_crq) {
  return 1;
 }

 return 0;
}
