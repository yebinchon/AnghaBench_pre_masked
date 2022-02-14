
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {struct e752x_pvt* pvt_info; } ;
struct e752x_pvt {int map_type; } ;



__attribute__((used)) static inline int FUNC_0(struct mem_ctl_info *VAR_0, int VAR_1)
{
 struct e752x_pvt *VAR_2 = VAR_0->pvt_info;

 if (!VAR_2->map_type)
  return (7 - VAR_1);

 return (VAR_1);
}
