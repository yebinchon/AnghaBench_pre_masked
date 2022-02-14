
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct config_group {int cg_item; } ;
struct t10_alua_tg_pt_gp {int tg_pt_gp_id; struct config_group tg_pt_gp_group; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct t10_alua_tg_pt_gp*,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,unsigned long) ;
 int FUNC_4 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_5(
 struct t10_alua_tg_pt_gp *VAR_1,
 const char *VAR_2,
 size_t VAR_3)
{
 struct config_group *VAR_4 = &VAR_1->tg_pt_gp_group;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_2, 0, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_3("strict_strtoul() returned %d for"
   " tg_pt_gp_id\n", VAR_6);
  return -VAR_0;
 }
 if (VAR_5 > 0x0000ffff) {
  FUNC_3("ALUA tg_pt_gp_id: %lu exceeds maximum:"
   " 0x0000ffff\n", VAR_5);
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_1, (u16)VAR_5);
 if (VAR_6 < 0)
  return -VAR_0;

 FUNC_2("Target_Core_ConfigFS: Set ALUA Target Port Group: "
  "core/alua/tg_pt_gps/%s to ID: %hu\n",
  FUNC_0(&VAR_4->cg_item),
  VAR_1->tg_pt_gp_id);

 return VAR_3;
}
