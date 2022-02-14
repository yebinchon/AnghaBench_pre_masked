
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_alua_tg_pt_gp_member {int dummy; } ;
struct se_lun {TYPE_1__* lun_sep; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {struct t10_alua_tg_pt_gp_member* sep_alua_tg_pt_gp_mem; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct t10_alua_tg_pt_gp_member*,TYPE_1__*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;

ssize_t FUNC_3(
 struct se_lun *VAR_2,
 const char *VAR_3,
 size_t VAR_4)
{
 struct t10_alua_tg_pt_gp_member *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if (!VAR_2->lun_sep)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_3, 0, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_1("Unable to extract alua_tg_pt_offline value\n");
  return -VAR_0;
 }
 if ((VAR_6 != 0) && (VAR_6 != 1)) {
  FUNC_1("Illegal value for alua_tg_pt_offline: %lu\n",
    VAR_6);
  return -VAR_0;
 }
 VAR_5 = VAR_2->lun_sep->sep_alua_tg_pt_gp_mem;
 if (!VAR_5) {
  FUNC_1("Unable to locate *tg_pt_gp_mem\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_5,
   VAR_2->lun_sep, 0, (int)VAR_6);
 if (VAR_7 < 0)
  return -VAR_0;

 return VAR_4;
}
