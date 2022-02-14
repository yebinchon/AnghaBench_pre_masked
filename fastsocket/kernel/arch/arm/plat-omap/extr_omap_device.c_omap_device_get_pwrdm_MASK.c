
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int dummy; } ;
struct omap_device {int * hwmods; int hwmods_cnt; } ;


 struct powerdomain* FUNC_0 (int ) ;

struct powerdomain *FUNC_1(struct omap_device *VAR_0)
{





 if (!VAR_0->hwmods_cnt)
  return ((void*)0);

 return FUNC_0(VAR_0->hwmods[0]);
}
