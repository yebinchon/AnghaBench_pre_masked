
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {char* ctl_name; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct mem_ctl_info *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%s\n", VAR_0->ctl_name);
}
