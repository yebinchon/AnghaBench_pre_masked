
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioa_cfg {int dummy; } ;
struct TYPE_2__ {scalar_t__ time_left; } ;
struct ipr_cmnd {int job_step; TYPE_1__ u; struct ipr_ioa_cfg* ioa_cfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipr_ioa_cfg*) ;
 int VAR_3 ;
 int FUNC_1 (struct ipr_cmnd*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ipr_cmnd *VAR_4)
{
 struct ipr_ioa_cfg *VAR_5 = VAR_4->ioa_cfg;
 int VAR_6 = VAR_2;

 if (!FUNC_0(VAR_5) && VAR_4->u.time_left) {
  VAR_4->u.time_left -= VAR_0;
  FUNC_1(VAR_4, VAR_0);
 } else {
  VAR_4->job_step = VAR_3;
  VAR_6 = VAR_1;
 }

 return VAR_6;
}
