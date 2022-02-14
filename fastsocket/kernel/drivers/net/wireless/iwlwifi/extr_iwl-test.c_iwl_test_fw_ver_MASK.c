
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_test {TYPE_2__* trans; TYPE_1__* ops; } ;
struct TYPE_4__ {int op_mode; } ;
struct TYPE_3__ {int (* get_fw_ver ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct iwl_test *VAR_0)
{
 return VAR_0->ops->get_fw_ver(VAR_0->trans->op_mode);
}
