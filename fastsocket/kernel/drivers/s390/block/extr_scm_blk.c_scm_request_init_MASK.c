
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct scm_request {int retries; scalar_t__ error; struct scm_blk_dev* bdev; struct request* request; struct aob* aidaw; struct aob* aob; } ;
struct scm_blk_dev {int scmdev; } ;
struct request {int dummy; } ;
struct aob_rq_header {int scmdev; } ;
struct TYPE_2__ {scalar_t__ data; int cmd_code; } ;
struct aob {TYPE_1__ request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aob*,int ,int) ;
 int FUNC_1 (struct scm_request*) ;
 struct aob_rq_header* FUNC_2 (struct scm_request*) ;

__attribute__((used)) static inline void FUNC_3(struct scm_blk_dev *VAR_2,
        struct scm_request *VAR_3,
        struct request *VAR_4)
{
 struct aob_rq_header *VAR_5 = FUNC_2(VAR_3);
 struct aob *VAR_6 = VAR_3->aob;

 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 FUNC_0(VAR_3->aidaw, 0, VAR_1);
 VAR_5->scmdev = VAR_2->scmdev;
 VAR_6->request.cmd_code = VAR_0;
 VAR_6->request.data = (u64) VAR_5;
 VAR_3->request = VAR_4;
 VAR_3->bdev = VAR_2;
 VAR_3->retries = 4;
 VAR_3->error = 0;
 FUNC_1(VAR_3);
}
