
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_alua_access_type; int tg_pt_gp_valid_id; struct se_device* tg_pt_gp_dev; } ;
struct se_device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct t10_alua_tg_pt_gp*,struct se_device*,int *,int *,int,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_3(
 struct t10_alua_tg_pt_gp *VAR_2,
 const char *VAR_3,
 size_t VAR_4)
{
 struct se_device *VAR_5 = VAR_2->tg_pt_gp_dev;
 unsigned long VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_2->tg_pt_gp_valid_id) {
  FUNC_1("Unable to do implict ALUA on non valid"
   " tg_pt_gp ID: %hu\n", VAR_2->tg_pt_gp_valid_id);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_3, 0, &VAR_6);
 if (VAR_8 < 0) {
  FUNC_1("Unable to extract new ALUA access state from"
    " %s\n", VAR_3);
  return -VAR_0;
 }
 VAR_7 = (int)VAR_6;

 if (!(VAR_2->tg_pt_gp_alua_access_type & VAR_1)) {
  FUNC_1("Unable to process implict configfs ALUA"
   " transition while TPGS_IMPLICT_ALUA is disabled\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_2, VAR_5,
     ((void*)0), ((void*)0), VAR_7, 0);
 return (!VAR_8) ? VAR_4 : -VAR_0;
}
