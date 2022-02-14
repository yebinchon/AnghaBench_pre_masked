
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int diag_dl; int mdm_dl; int mdm_ul; int enabled; } ;
struct TYPE_4__ {int ul_ctrl_len; int ul_app2_len; int ul_app1_len; int ul_diag_len; int ul_mdm_len2; int ul_mdm_len1; int ul_start; int dl_ctrl_len; int dl_app2_len; int dl_app1_len; int dl_diag_len2; int dl_diag_len1; int dl_mdm_len2; int dl_mdm_len1; int dl_start; TYPE_1__ toggle; int product_information; int version; int signature; } ;
struct nozomi {TYPE_2__ config_table; } ;


 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static void FUNC_1(const struct nozomi *VAR_0)
{
 FUNC_0("signature: 0x%08X", VAR_0->config_table.signature);
 FUNC_0("version: 0x%04X", VAR_0->config_table.version);
 FUNC_0("product_information: 0x%04X", VAR_0->config_table.product_information);

 FUNC_0("toggle enabled: %d", VAR_0->config_table.toggle.enabled);
 FUNC_0("toggle up_mdm: %d", VAR_0->config_table.toggle.mdm_ul);
 FUNC_0("toggle dl_mdm: %d", VAR_0->config_table.toggle.mdm_dl);
 FUNC_0("toggle dl_dbg: %d", VAR_0->config_table.toggle.diag_dl);

 FUNC_0("dl_start: 0x%04X", VAR_0->config_table.dl_start);
 FUNC_0("dl_mdm_len0: 0x%04X, %d", VAR_0->config_table.dl_mdm_len1,
    VAR_0->config_table.dl_mdm_len1);
 FUNC_0("dl_mdm_len1: 0x%04X, %d", VAR_0->config_table.dl_mdm_len2,
    VAR_0->config_table.dl_mdm_len2);
 FUNC_0("dl_diag_len0: 0x%04X, %d", VAR_0->config_table.dl_diag_len1,
    VAR_0->config_table.dl_diag_len1);
 FUNC_0("dl_diag_len1: 0x%04X, %d", VAR_0->config_table.dl_diag_len2,
    VAR_0->config_table.dl_diag_len2);
 FUNC_0("dl_app1_len: 0x%04X, %d", VAR_0->config_table.dl_app1_len,
    VAR_0->config_table.dl_app1_len);
 FUNC_0("dl_app2_len: 0x%04X, %d", VAR_0->config_table.dl_app2_len,
    VAR_0->config_table.dl_app2_len);
 FUNC_0("dl_ctrl_len: 0x%04X, %d", VAR_0->config_table.dl_ctrl_len,
    VAR_0->config_table.dl_ctrl_len);
 FUNC_0("ul_start: 0x%04X, %d", VAR_0->config_table.ul_start,
    VAR_0->config_table.ul_start);
 FUNC_0("ul_mdm_len[0]: 0x%04X, %d", VAR_0->config_table.ul_mdm_len1,
    VAR_0->config_table.ul_mdm_len1);
 FUNC_0("ul_mdm_len[1]: 0x%04X, %d", VAR_0->config_table.ul_mdm_len2,
    VAR_0->config_table.ul_mdm_len2);
 FUNC_0("ul_diag_len: 0x%04X, %d", VAR_0->config_table.ul_diag_len,
    VAR_0->config_table.ul_diag_len);
 FUNC_0("ul_app1_len: 0x%04X, %d", VAR_0->config_table.ul_app1_len,
    VAR_0->config_table.ul_app1_len);
 FUNC_0("ul_app2_len: 0x%04X, %d", VAR_0->config_table.ul_app2_len,
    VAR_0->config_table.ul_app2_len);
 FUNC_0("ul_ctrl_len: 0x%04X, %d", VAR_0->config_table.ul_ctrl_len,
    VAR_0->config_table.ul_ctrl_len);
}
