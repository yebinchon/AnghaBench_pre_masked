
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fc_bsg_job {TYPE_3__* request; } ;
struct TYPE_4__ {int* vendor_cmd; } ;
struct TYPE_5__ {TYPE_1__ h_vendor; } ;
struct TYPE_6__ {TYPE_2__ rqst_data; } ;


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
 int FUNC_10 (struct fc_bsg_job*) ;
 int FUNC_11 (struct fc_bsg_job*) ;
 int FUNC_12 (struct fc_bsg_job*) ;
 int FUNC_13 (struct fc_bsg_job*) ;
 int FUNC_14 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_15(struct fc_bsg_job *VAR_1)
{
 switch (VAR_1->request->rqst_data.h_vendor.vendor_cmd[0]) {
 case 135:
  return FUNC_3(VAR_1);

 case 141:
  return FUNC_12(VAR_1);

 case 140:
  return FUNC_13(VAR_1);

 case 142:
  return FUNC_11(VAR_1);

 case 136:
  return FUNC_0(VAR_1);

 case 138:
  return FUNC_1(VAR_1);

 case 134:
  return FUNC_6(VAR_1);

 case 130:
  return FUNC_8(VAR_1);

 case 131:
  return FUNC_7(VAR_1);

 case 133:
  return FUNC_4(VAR_1);

 case 129:
  return FUNC_9(VAR_1);

 case 128:
  return FUNC_10(VAR_1);

 case 132:
  return FUNC_5(VAR_1);

 case 139:
  return FUNC_2(VAR_1);

 case 137:
  return FUNC_14(VAR_1);
 default:
  return -VAR_0;
 }
}
