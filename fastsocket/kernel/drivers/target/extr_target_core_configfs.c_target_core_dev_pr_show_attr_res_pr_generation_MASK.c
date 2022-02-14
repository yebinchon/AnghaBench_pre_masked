
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pr_generation; } ;
struct se_device {TYPE_1__ t10_pr; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(
  struct se_device *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "0x%08x\n", VAR_0->t10_pr.pr_generation);
}
