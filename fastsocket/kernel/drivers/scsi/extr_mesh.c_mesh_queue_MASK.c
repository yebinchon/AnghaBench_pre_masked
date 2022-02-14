
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int * host_scribble; TYPE_1__* device; } ;
struct mesh_state {scalar_t__ phase; struct scsi_cmnd* request_qtail; struct scsi_cmnd* request_q; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;
struct TYPE_3__ {TYPE_2__* host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mesh_state*) ;

__attribute__((used)) static int FUNC_1(struct scsi_cmnd *VAR_1, void (*VAR_2)(struct scsi_cmnd *))
{
 struct mesh_state *VAR_3;

 VAR_1->scsi_done = VAR_2;
 VAR_1->host_scribble = ((void*)0);

 VAR_3 = (struct mesh_state *) VAR_1->device->host->hostdata;

 if (VAR_3->request_q == ((void*)0))
  VAR_3->request_q = VAR_1;
 else
  VAR_3->request_qtail->host_scribble = (void *) VAR_1;
 VAR_3->request_qtail = VAR_1;

 if (VAR_3->phase == VAR_0)
  FUNC_0(VAR_3);

 return 0;
}
