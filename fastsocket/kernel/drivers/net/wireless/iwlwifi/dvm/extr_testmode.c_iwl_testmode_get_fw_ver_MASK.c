
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_priv {TYPE_1__* fw; } ;
struct iwl_op_mode {int dummy; } ;
struct TYPE_2__ {int ucode_ver; } ;


 struct iwl_priv* FUNC_0 (struct iwl_op_mode*) ;

__attribute__((used)) static u32 FUNC_1(struct iwl_op_mode *VAR_0)
{
 struct iwl_priv *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->fw->ucode_ver;
}
