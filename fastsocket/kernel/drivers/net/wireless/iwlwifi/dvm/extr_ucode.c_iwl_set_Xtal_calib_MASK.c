
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {TYPE_1__* nvm_data; } ;
struct iwl_calib_xtal_freq_cmd {void* cap_pin2; void* cap_pin1; int hdr; } ;
typedef int cmd ;
typedef int __le16 ;
struct TYPE_2__ {int * xtal_calib; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,void*,int) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_priv *VAR_1)
{
 struct iwl_calib_xtal_freq_cmd VAR_2;
 __le16 *VAR_3 = VAR_1->nvm_data->xtal_calib;

 FUNC_1(&VAR_2.hdr, VAR_0);
 VAR_2.cap_pin1 = FUNC_2(VAR_3[0]);
 VAR_2.cap_pin2 = FUNC_2(VAR_3[1]);
 return FUNC_0(VAR_1, (void *)&VAR_2, sizeof(VAR_2));
}
