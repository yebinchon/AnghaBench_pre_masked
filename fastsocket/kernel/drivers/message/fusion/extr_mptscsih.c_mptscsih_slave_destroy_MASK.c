
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_target {TYPE_1__* hostdata; } ;
struct scsi_device {int * hostdata; struct Scsi_Host* host; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int num_luns; } ;
typedef TYPE_1__ VirtTarget ;
typedef int VirtDevice ;
typedef int MPT_SCSI_HOST ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 struct scsi_target* FUNC_3 (struct scsi_device*) ;
 int * FUNC_4 (struct Scsi_Host*) ;

void
FUNC_5(struct scsi_device *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->host;
 MPT_SCSI_HOST *VAR_2 = FUNC_4(VAR_1);
 VirtTarget *VAR_3;
 VirtDevice *VAR_4;
 struct scsi_target *VAR_5;

 VAR_5 = FUNC_3(VAR_0);
 VAR_3 = VAR_5->hostdata;
 VAR_4 = VAR_0->hostdata;
 if (!VAR_4)
  return;

 FUNC_1(VAR_2, VAR_4);
 VAR_3->num_luns--;
 FUNC_2(VAR_2, VAR_4);
 FUNC_0(VAR_4);
 VAR_0->hostdata = ((void*)0);
}
