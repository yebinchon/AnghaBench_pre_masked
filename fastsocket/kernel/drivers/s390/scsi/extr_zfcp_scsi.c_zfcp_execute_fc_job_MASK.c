
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_bsg_job {TYPE_1__* request; } ;
struct TYPE_2__ {int msgcode; } ;


 int VAR_0 ;




 int FUNC_0 (struct fc_bsg_job*) ;
 int FUNC_1 (struct fc_bsg_job*) ;

__attribute__((used)) static int FUNC_2(struct fc_bsg_job *VAR_1)
{
 switch (VAR_1->request->msgcode) {
 case 128:
 case 130:
  return FUNC_1(VAR_1);
 case 129:
 case 131:
  return FUNC_0(VAR_1);
 default:
  return -VAR_0;
 }
}
