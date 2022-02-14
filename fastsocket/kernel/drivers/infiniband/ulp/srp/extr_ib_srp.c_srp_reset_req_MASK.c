
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int dummy; } ;
struct srp_request {int dummy; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;


 int VAR_0 ;
 struct scsi_cmnd* FUNC_0 (struct srp_target_port*,struct srp_request*,int *) ;
 int FUNC_1 (struct srp_target_port*,struct srp_request*,struct scsi_cmnd*,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct srp_target_port *VAR_1, struct srp_request *VAR_2)
{
 struct scsi_cmnd *VAR_3 = FUNC_0(VAR_1, VAR_2, ((void*)0));

 if (VAR_3) {
  FUNC_1(VAR_1, VAR_2, VAR_3, 0);
  VAR_3->result = VAR_0 << 16;
  VAR_3->scsi_done(VAR_3);
 }
}
