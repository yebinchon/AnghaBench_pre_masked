
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_trans {int dev_cmd_headroom; int dev_cmd_pool; } ;
struct iwl_device_cmd {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline struct iwl_device_cmd *
FUNC_2(struct iwl_trans *VAR_1)
{
 u8 *VAR_2 = FUNC_0(VAR_1->dev_cmd_pool, VAR_0);

 if (FUNC_1(VAR_2 == ((void*)0)))
  return ((void*)0);

 return (struct iwl_device_cmd *)
   (VAR_2 + VAR_1->dev_cmd_headroom);
}
