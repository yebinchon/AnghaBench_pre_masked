
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_device {scalar_t__ channel; TYPE_2__* hostdata; struct Scsi_Host* host; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {TYPE_1__* vtarget; } ;
typedef TYPE_2__ VirtDevice ;
struct TYPE_7__ {int * ioc; } ;
struct TYPE_5__ {scalar_t__ deleted; } ;
typedef TYPE_3__ MPT_SCSI_HOST ;
typedef int MPT_ADAPTER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (int ,struct scsi_device*,char*) ;
 TYPE_3__* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_7(struct scsi_device *VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_2->host;
 MPT_SCSI_HOST *VAR_4 = FUNC_6(VAR_3);
 MPT_ADAPTER *VAR_5 = VAR_4->ioc;
 VirtDevice *VAR_6 = VAR_2->hostdata;

 if (VAR_6->vtarget->deleted) {
  FUNC_5(VAR_0, VAR_2, "clearing deleted flag\n");
  VAR_6->vtarget->deleted = 0;
 }





 if (VAR_2->channel == VAR_1) {
  FUNC_1(VAR_5, FUNC_4(VAR_2));
  goto out;
 }

 FUNC_3(VAR_2);

 FUNC_0(VAR_5, FUNC_4(VAR_2));

 out:
 return FUNC_2(VAR_2);
}
