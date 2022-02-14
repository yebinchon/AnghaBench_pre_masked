
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ idc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,int) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_3)
{
 int VAR_4;

 FUNC_4(VAR_2, &VAR_3->ahw->idc.status);
 FUNC_0(VAR_3);

 VAR_4 = FUNC_1(VAR_3, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4)
  goto err_out_cleanup_bc_intr;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto err_out_term_channel;

 return 0;

err_out_term_channel:
 FUNC_2(VAR_3, VAR_1);

err_out_cleanup_bc_intr:
 FUNC_1(VAR_3, 0);
 return VAR_4;
}
