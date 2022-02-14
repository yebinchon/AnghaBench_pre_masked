
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct exp_flavor_info {int flags; int pseudoflavor; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, struct exp_flavor_info **VAR_1, struct exp_flavor_info *VAR_2)
{
 int VAR_3;

 VAR_3 = (*VAR_1)->flags;
 FUNC_1(VAR_0, ",sec=%d", (*VAR_1)->pseudoflavor);
 (*VAR_1)++;
 while (*VAR_1 != VAR_2 && FUNC_0(VAR_3, (*VAR_1)->flags)) {
  FUNC_1(VAR_0, ":%d", (*VAR_1)->pseudoflavor);
  (*VAR_1)++;
 }
 return VAR_3;
}
