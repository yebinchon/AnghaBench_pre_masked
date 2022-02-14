
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct mem_ctl_info*,int *,int *,int *) ;
 int FUNC_1 (char*,char*,int ,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct mem_ctl_info *VAR_0, char *VAR_1)
{
 u64 VAR_2 = 0;
 u64 VAR_3 = 0;
 u64 VAR_4 = 0;

 FUNC_0(VAR_0, &VAR_2, &VAR_3, &VAR_4);

 return FUNC_1(VAR_1, "%llx %llx %llx\n", VAR_2, VAR_3,
       VAR_4);
}
