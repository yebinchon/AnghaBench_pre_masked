
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
 int VAR_1 ;





 int FUNC_0 (struct fc_bsg_job*) ;
 int FUNC_1 (struct fc_bsg_job*) ;

int
FUNC_2(struct fc_bsg_job *VAR_2)
{
 uint32_t VAR_3 = VAR_0;

 switch (VAR_2->request->msgcode) {
 case 130:

  VAR_3 = FUNC_1(VAR_2);
  break;
 case 131:
 case 128:
 case 132:
 case 129:

  VAR_3 = FUNC_0(VAR_2);
  break;
 default:
  VAR_2->reply->result = VAR_3 = -VAR_1;
  VAR_2->reply->reply_payload_rcv_len = 0;
  break;
 }

 return VAR_3;
}
