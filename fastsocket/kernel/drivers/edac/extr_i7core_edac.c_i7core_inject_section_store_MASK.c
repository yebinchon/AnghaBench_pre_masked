
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct TYPE_2__ {scalar_t__ section; scalar_t__ enable; } ;
struct i7core_pvt {TYPE_1__ inject; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct mem_ctl_info*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct mem_ctl_info *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct i7core_pvt *VAR_4 = VAR_1->pvt_info;
 unsigned long VAR_5;
 int VAR_6;

 if (VAR_4->inject.enable)
  FUNC_0(VAR_1);

 VAR_6 = FUNC_1(VAR_2, 10, &VAR_5);
 if ((VAR_6 < 0) || (VAR_5 > 3))
  return -VAR_0;

 VAR_4->inject.section = (u32) VAR_5;
 return VAR_3;
}
