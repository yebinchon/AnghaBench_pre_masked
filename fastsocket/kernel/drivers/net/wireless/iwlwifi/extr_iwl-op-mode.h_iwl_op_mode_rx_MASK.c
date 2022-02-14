
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_op_mode {TYPE_1__* ops; } ;
struct iwl_device_cmd {int dummy; } ;
struct TYPE_2__ {int (* rx ) (struct iwl_op_mode*,struct iwl_rx_cmd_buffer*,struct iwl_device_cmd*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct iwl_op_mode*,struct iwl_rx_cmd_buffer*,struct iwl_device_cmd*) ;

__attribute__((used)) static inline int FUNC_2(struct iwl_op_mode *VAR_0,
      struct iwl_rx_cmd_buffer *VAR_1,
      struct iwl_device_cmd *VAR_2)
{
 FUNC_0();
 return VAR_0->ops->rx(VAR_0, VAR_1, VAR_2);
}
