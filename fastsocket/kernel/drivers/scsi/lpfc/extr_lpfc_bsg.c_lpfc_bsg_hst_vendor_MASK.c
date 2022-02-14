
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fc_bsg_job {TYPE_1__* reply; TYPE_3__* request; } ;
struct TYPE_6__ {int* vendor_cmd; } ;
struct TYPE_8__ {TYPE_2__ h_vendor; } ;
struct TYPE_7__ {TYPE_4__ rqst_data; } ;
struct TYPE_5__ {int result; int reply_payload_rcv_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_bsg_job*) ;
 int FUNC_1 (struct fc_bsg_job*) ;
 int FUNC_2 (struct fc_bsg_job*) ;
 int FUNC_3 (struct fc_bsg_job*) ;
 int FUNC_4 (struct fc_bsg_job*) ;
 int FUNC_5 (struct fc_bsg_job*) ;
 int FUNC_6 (struct fc_bsg_job*) ;
 int FUNC_7 (struct fc_bsg_job*) ;
 int FUNC_8 (struct fc_bsg_job*) ;
 int FUNC_9 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_10(struct fc_bsg_job *VAR_1)
{
 int VAR_2 = VAR_1->request->rqst_data.h_vendor.vendor_cmd[0];
 int VAR_3;

 switch (VAR_2) {
 case 128:
  VAR_3 = FUNC_4(VAR_1);
  break;
 case 135:
  VAR_3 = FUNC_3(VAR_1);
  break;
 case 129:
  VAR_3 = FUNC_6(VAR_1);
  break;
 case 138:
  VAR_3 = FUNC_0(VAR_1);
  break;
 case 137:
  VAR_3 = FUNC_8(VAR_1);
  break;
 case 136:
  VAR_3 = FUNC_1(VAR_1);
  break;
 case 133:
  VAR_3 = FUNC_9(VAR_1);
  break;
 case 134:
  VAR_3 = FUNC_2(VAR_1);
  break;
 case 132:
  VAR_3 = FUNC_5(VAR_1);
  break;
 case 131:
 case 130:
  VAR_3 = FUNC_7(VAR_1);
  break;
 default:
  VAR_3 = -VAR_0;
  VAR_1->reply->reply_payload_rcv_len = 0;

  VAR_1->reply->result = VAR_3;
  break;
 }

 return VAR_3;
}
