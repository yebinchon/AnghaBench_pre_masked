
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_task {scalar_t__ data_dir; scalar_t__ total_xfer_len; } ;
struct TYPE_3__ {scalar_t__ fis_type; } ;
struct host_to_dev_fis {int features; } ;
struct TYPE_4__ {TYPE_1__ rsp; struct host_to_dev_fis cmd; } ;
struct isci_request {TYPE_2__ stp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sas_task* FUNC_0 (struct isci_request*) ;
 int FUNC_1 (struct isci_request*) ;

__attribute__((used)) static void FUNC_2(struct isci_request *VAR_2)
{
 struct host_to_dev_fis *VAR_3 = &VAR_2->stp.cmd;
 struct sas_task *VAR_4;






 VAR_3->features |= VAR_0;

 FUNC_1(VAR_2);

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4->data_dir == VAR_1)
  VAR_4->total_xfer_len = 0;




 VAR_2->stp.rsp.fis_type = 0;
}
