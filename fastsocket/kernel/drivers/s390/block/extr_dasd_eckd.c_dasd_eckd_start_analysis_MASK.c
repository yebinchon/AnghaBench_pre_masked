
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_eckd_private {int dummy; } ;
struct dasd_ccw_req {int expires; scalar_t__ retries; int flags; int * callback_data; int callback; } ;
struct dasd_block {TYPE_1__* base; } ;
struct TYPE_2__ {scalar_t__ private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct dasd_ccw_req*) ;
 int VAR_3 ;
 struct dasd_ccw_req* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct dasd_block *VAR_4)
{
 struct dasd_eckd_private *VAR_5;
 struct dasd_ccw_req *VAR_6;

 VAR_5 = (struct dasd_eckd_private *) VAR_4->base->private;
 VAR_6 = FUNC_4(VAR_4->base);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_6->callback = VAR_3;
 VAR_6->callback_data = ((void*)0);
 VAR_6->expires = 5*VAR_2;



 FUNC_2(VAR_0, &VAR_6->flags);
 VAR_6->retries = 0;
 FUNC_3(VAR_6);
 return -VAR_1;
}
