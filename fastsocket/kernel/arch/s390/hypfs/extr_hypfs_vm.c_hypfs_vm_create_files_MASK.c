
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct diag2fc_data {int lcpus; } ;
struct dentry {int lcpus; } ;


 scalar_t__ FUNC_0 (struct diag2fc_data*) ;
 int FUNC_1 (struct diag2fc_data*) ;
 int FUNC_2 (struct diag2fc_data*) ;
 struct diag2fc_data* FUNC_3 (int ,unsigned int*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct super_block*,struct diag2fc_data*,struct diag2fc_data*) ;
 struct diag2fc_data* FUNC_5 (struct super_block*,struct diag2fc_data*,char*,char*) ;
 struct diag2fc_data* FUNC_6 (struct super_block*,struct diag2fc_data*,char*,int ) ;
 struct diag2fc_data* FUNC_7 (struct super_block*,struct diag2fc_data*,char*) ;

int FUNC_8(struct super_block *VAR_1, struct dentry *VAR_2)
{
 struct dentry *VAR_3, *VAR_4;
 struct diag2fc_data *VAR_5;
 unsigned int VAR_6 = 0;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_3(VAR_0, &VAR_6, 0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);


 VAR_3 = FUNC_7(VAR_1, VAR_2, "hyp");
 if (FUNC_0(VAR_3)) {
  VAR_7 = FUNC_1(VAR_3);
  goto failed;
 }
 VAR_4 = FUNC_5(VAR_1, VAR_3, "type", "z/VM Hypervisor");
 if (FUNC_0(VAR_4)) {
  VAR_7 = FUNC_1(VAR_4);
  goto failed;
 }


 VAR_3 = FUNC_7(VAR_1, VAR_2, "cpus");
 if (FUNC_0(VAR_3)) {
  VAR_7 = FUNC_1(VAR_3);
  goto failed;
 }
 VAR_4 = FUNC_6(VAR_1, VAR_3, "count", VAR_5->lcpus);
 if (FUNC_0(VAR_4)) {
  VAR_7 = FUNC_1(VAR_4);
  goto failed;
 }


 VAR_3 = FUNC_7(VAR_1, VAR_2, "systems");
 if (FUNC_0(VAR_3)) {
  VAR_7 = FUNC_1(VAR_3);
  goto failed;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7 = FUNC_4(VAR_1, VAR_3, &(VAR_5[VAR_8]));
  if (VAR_7)
   goto failed;
 }
 FUNC_2(VAR_5);
 return 0;

failed:
 FUNC_2(VAR_5);
 return VAR_7;
}
