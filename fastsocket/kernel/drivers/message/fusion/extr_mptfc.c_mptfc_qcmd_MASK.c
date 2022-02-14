
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; TYPE_2__* device; } ;
struct mptfc_rport_info {int dummy; } ;
struct fc_rport {scalar_t__ dd_data; } ;
struct TYPE_3__ {int vtarget; } ;
typedef TYPE_1__ VirtDevice ;
struct TYPE_4__ {TYPE_1__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (struct scsi_cmnd*,void (*) (struct scsi_cmnd*)) ;
 int FUNC_2 (TYPE_2__*) ;
 struct fc_rport* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct scsi_cmnd *VAR_2, void (*VAR_3)(struct scsi_cmnd *))
{
 struct mptfc_rport_info *VAR_4;
 struct fc_rport *VAR_5 = FUNC_3(FUNC_2(VAR_2->device));
 int VAR_6;
 VirtDevice *VAR_7 = VAR_2->device->hostdata;

 if (!VAR_7 || !VAR_7->vtarget) {
  VAR_2->result = VAR_1 << 16;
  VAR_3(VAR_2);
  return 0;
 }

 VAR_6 = FUNC_0(VAR_5);
 if (FUNC_4(VAR_6)) {
  VAR_2->result = VAR_6;
  VAR_3(VAR_2);
  return 0;
 }


 VAR_4 = *((struct mptfc_rport_info **)VAR_5->dd_data);
 if (FUNC_4(!VAR_4)) {
  VAR_2->result = VAR_0 << 16;
  VAR_3(VAR_2);
  return 0;
 }

 return FUNC_1(VAR_2,VAR_3);
}
