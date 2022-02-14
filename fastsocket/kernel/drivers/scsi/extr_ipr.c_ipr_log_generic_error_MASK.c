
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipr_ioa_cfg {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ raw; } ;
struct TYPE_6__ {int length; TYPE_2__ u; } ;
struct ipr_hostrcb {TYPE_3__ hcam; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipr_ioa_cfg*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ipr_ioa_cfg *VAR_0,
      struct ipr_hostrcb *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->hcam.u.raw.data,
    FUNC_0(VAR_1->hcam.length));
}
