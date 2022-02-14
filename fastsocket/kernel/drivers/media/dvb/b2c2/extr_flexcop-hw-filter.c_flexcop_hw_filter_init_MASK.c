
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct flexcop_device {int has_32_hw_pid_filter; int (* write_ibi_reg ) (struct flexcop_device*,int ,TYPE_2__) ;TYPE_2__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
struct TYPE_5__ {int EMM_filter_4; scalar_t__ EMM_filter_6; } ;
struct TYPE_6__ {TYPE_1__ pid_filter_308; } ;
typedef TYPE_2__ flexcop_ibi_value ;


 int FUNC_0 (struct flexcop_device*,int) ;
 int FUNC_1 (struct flexcop_device*,int,int,int ) ;
 int FUNC_2 (struct flexcop_device*,int ,int) ;
 int FUNC_3 (struct flexcop_device*,int ) ;
 int VAR_0 ;
 TYPE_2__ FUNC_4 (struct flexcop_device*,int ) ;
 int FUNC_5 (struct flexcop_device*,int ,TYPE_2__) ;

void FUNC_6(struct flexcop_device *VAR_1)
{
 int VAR_2;
 flexcop_ibi_value VAR_3;
 for (VAR_2 = 0; VAR_2 < 6 + 32*VAR_1->has_32_hw_pid_filter; VAR_2++)
  FUNC_1(VAR_1, VAR_2, 0x1fff, 0);

 FUNC_2(VAR_1, 0, 0x1fe0);
 FUNC_3(VAR_1, 0);

 VAR_3 = VAR_1->read_ibi_reg(VAR_1, VAR_0);
 VAR_3.pid_filter_308.EMM_filter_4 = 1;
 VAR_3.pid_filter_308.EMM_filter_6 = 0;
 VAR_1->write_ibi_reg(VAR_1, VAR_0, VAR_3);

 FUNC_0(VAR_1, 1);
}
