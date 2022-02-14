
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_alua_tg_pt_gp {int tg_pt_gp_write_metadata; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(
 struct t10_alua_tg_pt_gp *VAR_1,
 const char *VAR_2,
 size_t VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, 0, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_0("Unable to extract alua_write_metadata\n");
  return -VAR_0;
 }

 if ((VAR_4 != 0) && (VAR_4 != 1)) {
  FUNC_0("Illegal value for alua_write_metadata:"
   " %lu\n", VAR_4);
  return -VAR_0;
 }
 VAR_1->tg_pt_gp_write_metadata = (int)VAR_4;

 return VAR_3;
}
