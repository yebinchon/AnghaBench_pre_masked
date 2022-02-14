
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {int scsi_host; } ;
struct srp_request {int index; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; scalar_t__ host_scribble; } ;
struct TYPE_2__ {int lun; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct srp_target_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct srp_target_port*,struct srp_request*,struct scsi_cmnd*) ;
 int FUNC_3 (struct srp_target_port*,struct srp_request*,struct scsi_cmnd*,int ) ;
 int FUNC_4 (struct srp_target_port*,int ,int ,int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_5)
{
 struct srp_target_port *VAR_6 = FUNC_0(VAR_5->device->host);
 struct srp_request *VAR_7 = (struct srp_request *) VAR_5->host_scribble;

 FUNC_1(VAR_2, VAR_6->scsi_host, "SRP abort called\n");

 if (!VAR_7 || !FUNC_2(VAR_6, VAR_7, VAR_5))
  return VAR_1;
 FUNC_4(VAR_6, VAR_7->index, VAR_5->device->lun,
     VAR_3);
 FUNC_3(VAR_6, VAR_7, VAR_5, 0);
 VAR_5->result = VAR_0 << 16;
 VAR_5->scsi_done(VAR_5);

 return VAR_4;
}
