
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct request {int errors; int sense_len; scalar_t__ resid_len; struct request* next_rq; } ;
struct fc_bsg_job {int reply_len; TYPE_1__* reply; struct request* req; } ;
struct TYPE_2__ {int result; scalar_t__ reply_payload_rcv_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct fc_bsg_job *VAR_0)
{
 struct request *VAR_1 = VAR_0->req;
 struct request *VAR_2 = VAR_1->next_rq;
 int VAR_3;

 VAR_3 = VAR_0->req->errors = VAR_0->reply->result;

 if (VAR_3 < 0)

  VAR_0->req->sense_len = sizeof(uint32_t);
 else
  VAR_0->req->sense_len = VAR_0->reply_len;


 VAR_1->resid_len = 0;

 if (VAR_2) {
  FUNC_0(VAR_0->reply->reply_payload_rcv_len > VAR_2->resid_len);


  VAR_2->resid_len -= FUNC_2(VAR_0->reply->reply_payload_rcv_len,
          VAR_2->resid_len);
 }
 FUNC_1(VAR_1);
}
