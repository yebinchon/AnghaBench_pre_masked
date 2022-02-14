
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_trans {int dev_cmd_pool; int * dev_cmd_headroom; } ;
struct iwl_device_cmd {int dummy; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_trans *VAR_0,
      struct iwl_device_cmd *VAR_1)
{
 u8 *VAR_2 = (u8 *)VAR_1 - VAR_0->dev_cmd_headroom;

 FUNC_0(VAR_0->dev_cmd_pool, VAR_2);
}
