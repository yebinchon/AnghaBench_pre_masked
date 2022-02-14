
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int temperature; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct iwl_priv {int temperature; TYPE_2__ statistics; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct iwl_priv *VAR_1)
{
 u32 VAR_2 = 0;
 s32 VAR_3 = FUNC_1(VAR_1);

 VAR_2 = FUNC_3(VAR_1->statistics.common.temperature);
 VAR_2 = VAR_2 / VAR_0 + VAR_3;

 VAR_1->temperature = FUNC_0(VAR_2);
 FUNC_2(VAR_1);
}
