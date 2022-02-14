
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_alua_lu_gp_member {int lu_gp_mem_lock; struct t10_alua_lu_gp* lu_gp; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {struct config_item cg_item; } ;
struct t10_alua_lu_gp {int lu_gp_id; TYPE_1__ lu_gp_group; } ;
struct se_device {struct t10_alua_lu_gp_member* dev_alua_lu_gp_mem; } ;
typedef int ssize_t ;


 char* FUNC_0 (struct config_item*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(void *VAR_0, char *VAR_1)
{
 struct se_device *VAR_2 = VAR_0;
 struct config_item *VAR_3;
 struct t10_alua_lu_gp *VAR_4;
 struct t10_alua_lu_gp_member *VAR_5;
 ssize_t VAR_6 = 0;

 VAR_5 = VAR_2->dev_alua_lu_gp_mem;
 if (!VAR_5)
  return 0;

 FUNC_1(&VAR_5->lu_gp_mem_lock);
 VAR_4 = VAR_5->lu_gp;
 if (VAR_4) {
  VAR_3 = &VAR_4->lu_gp_group.cg_item;
  VAR_6 += FUNC_3(VAR_1, "LU Group Alias: %s\nLU Group ID: %hu\n",
   FUNC_0(VAR_3), VAR_4->lu_gp_id);
 }
 FUNC_2(&VAR_5->lu_gp_mem_lock);

 return VAR_6;
}
