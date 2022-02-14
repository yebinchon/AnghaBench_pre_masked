
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int lock; } ;
struct srp_request {struct scsi_cmnd* scmnd; } ;
struct scsi_cmnd {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct scsi_cmnd *FUNC_2(struct srp_target_port *VAR_0,
           struct srp_request *VAR_1,
           struct scsi_cmnd *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 if (!VAR_2) {
  VAR_2 = VAR_1->scmnd;
  VAR_1->scmnd = ((void*)0);
 } else if (VAR_1->scmnd == VAR_2) {
  VAR_1->scmnd = ((void*)0);
 } else {
  VAR_2 = ((void*)0);
 }
 FUNC_1(&VAR_0->lock, VAR_3);

 return VAR_2;
}
