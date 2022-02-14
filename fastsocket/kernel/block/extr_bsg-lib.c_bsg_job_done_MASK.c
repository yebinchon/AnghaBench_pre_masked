
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct request {int errors; int sense_len; unsigned int resid_len; struct request* next_rq; } ;
struct bsg_job {int reply_len; struct request* req; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned int) ;

void FUNC_3(struct bsg_job *VAR_0, int VAR_1,
    unsigned int VAR_2)
{
 struct request *VAR_3 = VAR_0->req;
 struct request *VAR_4 = VAR_3->next_rq;
 int VAR_5;

 VAR_5 = VAR_0->req->errors = VAR_1;
 if (VAR_5 < 0)

  VAR_0->req->sense_len = sizeof(u32);
 else
  VAR_0->req->sense_len = VAR_0->reply_len;

 VAR_3->resid_len = 0;

 if (VAR_4) {
  FUNC_0(VAR_2 > VAR_4->resid_len);


  VAR_4->resid_len -= FUNC_2(VAR_2, VAR_4->resid_len);
 }
 FUNC_1(VAR_3);
}
