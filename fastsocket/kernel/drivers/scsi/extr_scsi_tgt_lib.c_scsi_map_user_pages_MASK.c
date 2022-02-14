
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_tgt_cmd {int bio; } ;
struct TYPE_2__ {int length; } ;
struct scsi_cmnd {TYPE_1__ sdb; struct request* request; } ;
struct request_queue {int dummy; } ;
struct request {int bio; struct request_queue* q; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request_queue*,struct request*,int *,void*,unsigned int,int ) ;
 int FUNC_2 (char*,unsigned long,unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (struct scsi_cmnd*,int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_tgt_cmd*) ;

__attribute__((used)) static int FUNC_7(struct scsi_tgt_cmd *VAR_1, struct scsi_cmnd *VAR_2,
          unsigned long VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct request_queue *VAR_6 = VAR_2->request->q;
 struct request *VAR_7 = VAR_2->request;
 int VAR_8;

 FUNC_2("%lx %u\n", VAR_3, VAR_4);
 VAR_8 = FUNC_1(VAR_6, VAR_7, ((void*)0), (void *)VAR_3, VAR_4, VAR_0);
 if (VAR_8) {
  FUNC_3("Could not handle request of size %u.\n", VAR_4);
  return VAR_8;
 }

 VAR_1->bio = VAR_7->bio;
 VAR_8 = FUNC_4(VAR_2, VAR_0);
 if (VAR_8) {
  FUNC_5(VAR_2);
  goto unmap_rq;
 }




 VAR_2->sdb.length = FUNC_0(VAR_7);

 return 0;

unmap_rq:
 FUNC_6(VAR_1);
 return VAR_8;
}
