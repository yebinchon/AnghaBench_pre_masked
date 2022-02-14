
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_device {int dummy; } ;
typedef enum ccdc_frmfmt { ____Placeholder_ccdc_frmfmt } ccdc_frmfmt ;
struct TYPE_3__ {int (* get_frame_format ) () ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,struct vpfe_device*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct vpfe_device *VAR_3)
{
 enum ccdc_frmfmt VAR_4;

 VAR_4 = VAR_2->hw_ops.get_frame_format();
 if (VAR_4 == VAR_0)
  FUNC_0(VAR_1, VAR_3);
}
