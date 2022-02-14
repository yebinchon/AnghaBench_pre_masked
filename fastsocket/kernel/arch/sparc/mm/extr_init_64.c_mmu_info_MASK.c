
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_2(struct seq_file *VAR_7)
{
 if (VAR_6 == VAR_0)
  FUNC_1(VAR_7, "MMU Type\t: Cheetah\n");
 else if (VAR_6 == VAR_1)
  FUNC_1(VAR_7, "MMU Type\t: Cheetah+\n");
 else if (VAR_6 == VAR_5)
  FUNC_1(VAR_7, "MMU Type\t: Spitfire\n");
 else if (VAR_6 == VAR_4)
  FUNC_1(VAR_7, "MMU Type\t: Hypervisor (sun4v)\n");
 else
  FUNC_1(VAR_7, "MMU Type\t: ???\n");
}
