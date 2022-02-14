
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {int trans; TYPE_2__* nvm_data; TYPE_1__* cfg; } ;
struct TYPE_4__ {int calib_version; } ;
struct TYPE_3__ {int device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_4)
{
 switch (VAR_4->cfg->device_family) {
 case 131:
 case 130:
 case 133:
  break;
 case 132:

  FUNC_2(VAR_4->trans, VAR_0,
        VAR_3);
  break;
 case 129:

  if (VAR_4->nvm_data->calib_version >= 6)
   FUNC_1(VAR_4->trans, VAR_0,
     VAR_2);
  break;
 case 128:

  if (VAR_4->nvm_data->calib_version >= 6)
   FUNC_1(VAR_4->trans, VAR_0,
     VAR_2);
  FUNC_1(VAR_4->trans, VAR_0,
       VAR_1);
  break;
 default:
  FUNC_0(1);
 }
}
