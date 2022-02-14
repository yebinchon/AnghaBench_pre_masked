
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_export {int ex_nflavors; int ex_flags; struct exp_flavor_info* ex_flavors; } ;
struct seq_file {int dummy; } ;
struct exp_flavor_info {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct seq_file*,int) ;
 int FUNC_2 (struct seq_file*,struct exp_flavor_info**,struct exp_flavor_info*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, struct svc_export *VAR_1)
{
 struct exp_flavor_info *VAR_2;
 struct exp_flavor_info *VAR_3 = VAR_1->ex_flavors + VAR_1->ex_nflavors;
 int VAR_4;

 if (VAR_1->ex_nflavors == 0)
  return;
 VAR_2 = VAR_1->ex_flavors;
 VAR_4 = FUNC_2(VAR_0, &VAR_2, VAR_3);
 if (!FUNC_0(VAR_4, VAR_1->ex_flags))
  FUNC_1(VAR_0, VAR_4);
 while (VAR_2 != VAR_3) {
  VAR_4 = FUNC_2(VAR_0, &VAR_2, VAR_3);
  FUNC_1(VAR_0, VAR_4);
 }
}
