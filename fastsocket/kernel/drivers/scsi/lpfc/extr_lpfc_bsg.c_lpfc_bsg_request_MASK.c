
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct fc_bsg_job {TYPE_2__* reply; TYPE_1__* request; } ;
struct TYPE_4__ {int result; int reply_payload_rcv_len; } ;
struct TYPE_3__ {int msgcode; } ;


 int VAR_0 ;



 int FUNC_0 (struct fc_bsg_job*) ;
 int FUNC_1 (struct fc_bsg_job*) ;
 int FUNC_2 (struct fc_bsg_job*) ;

int
FUNC_3(struct fc_bsg_job *VAR_1)
{
 uint32_t VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->request->msgcode;
 switch (VAR_2) {
 case 130:
  VAR_3 = FUNC_0(VAR_1);
  break;
 case 128:
  VAR_3 = FUNC_1(VAR_1);
  break;
 case 129:
  VAR_3 = FUNC_2(VAR_1);
  break;
 default:
  VAR_3 = -VAR_0;
  VAR_1->reply->reply_payload_rcv_len = 0;

  VAR_1->reply->result = VAR_3;
  break;
 }

 return VAR_3;
}
