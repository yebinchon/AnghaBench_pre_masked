
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mem_ctl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mem_ctl_info*,int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct mem_ctl_info *VAR_3, u16 VAR_4)
{
 if ((VAR_4 & VAR_1) == 0)
  return 0;

 if ((VAR_4 & VAR_2) == 0)
  return 1;

 FUNC_0(VAR_3, VAR_0, "Unexpected syndrome value: 0x%x\n",
    VAR_4);
 return 1;
}
