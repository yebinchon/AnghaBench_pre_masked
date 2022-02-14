
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct TYPE_2__ {int section; } ;
struct i7core_pvt {TYPE_1__ inject; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct mem_ctl_info *VAR_0,
           char *VAR_1)
{
 struct i7core_pvt *VAR_2 = VAR_0->pvt_info;
 return FUNC_0(VAR_1, "0x%08x\n", VAR_2->inject.section);
}
