
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_valid_id; int tg_pt_gp_alua_access_status; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(
 struct t10_alua_tg_pt_gp *VAR_4,
 const char *VAR_5,
 size_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_4->tg_pt_gp_valid_id) {
  FUNC_0("Unable to do set ALUA access status on non"
   " valid tg_pt_gp ID: %hu\n",
   VAR_4->tg_pt_gp_valid_id);
  return -VAR_3;
 }

 VAR_9 = FUNC_1(VAR_5, 0, &VAR_7);
 if (VAR_9 < 0) {
  FUNC_0("Unable to extract new ALUA access status"
    " from %s\n", VAR_5);
  return -VAR_3;
 }
 VAR_8 = (int)VAR_7;

 if ((VAR_8 != VAR_2) &&
     (VAR_8 != VAR_0) &&
     (VAR_8 != VAR_1)) {
  FUNC_0("Illegal ALUA access status: 0x%02x\n",
    VAR_8);
  return -VAR_3;
 }

 VAR_4->tg_pt_gp_alua_access_status = VAR_8;
 return VAR_6;
}
