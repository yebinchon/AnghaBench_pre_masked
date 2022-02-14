
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int lock; int free_reqs; int req_lim; } ;
struct srp_request {int list; } ;
struct scsi_cmnd {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct scsi_cmnd*,struct srp_target_port*,struct srp_request*) ;

__attribute__((used)) static void FUNC_4(struct srp_target_port *VAR_0,
    struct srp_request *VAR_1, struct scsi_cmnd *VAR_2,
    s32 VAR_3)
{
 unsigned long VAR_4;

 FUNC_3(VAR_2, VAR_0, VAR_1);

 FUNC_1(&VAR_0->lock, VAR_4);
 VAR_0->req_lim += VAR_3;
 FUNC_0(&VAR_1->list, &VAR_0->free_reqs);
 FUNC_2(&VAR_0->lock, VAR_4);
}
