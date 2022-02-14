
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mem_ctl_info {int dummy; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (struct mem_ctl_info*,int ) ;
 int FUNC_2 (struct mem_ctl_info*,scalar_t__) ;

__attribute__((used)) static u64 FUNC_3(struct mem_ctl_info *VAR_0, u64 VAR_1)
{
 u64 VAR_2;

 VAR_2 =
     FUNC_1(VAR_0, FUNC_2(VAR_0, VAR_1));

 FUNC_0("SysAdddr 0x%lx translates to InputAddr 0x%lx\n",
  (unsigned long)VAR_1, (unsigned long)VAR_2);

 return VAR_2;
}
