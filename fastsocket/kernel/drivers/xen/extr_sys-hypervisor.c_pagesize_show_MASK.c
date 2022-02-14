
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hyp_sysfs_attr {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct hyp_sysfs_attr *VAR_1, char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, ((void*)0));
 if (VAR_3 > 0)
  VAR_3 = FUNC_1(VAR_2, "%x\n", VAR_3);

 return VAR_3;
}
