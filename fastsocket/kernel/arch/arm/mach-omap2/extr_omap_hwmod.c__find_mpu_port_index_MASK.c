
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod_ocp_if {int user; } ;
struct omap_hwmod {int slaves_cnt; int name; struct omap_hwmod_ocp_if** slaves; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static int FUNC_1(struct omap_hwmod *VAR_2)
{
 struct omap_hwmod_ocp_if *VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 if (!VAR_2 || VAR_2->slaves_cnt == 0)
  return -VAR_0;

 for (VAR_4 = 0, VAR_3 = *VAR_2->slaves; VAR_4 < VAR_2->slaves_cnt; VAR_4++, VAR_3++) {
  if (VAR_3->user & VAR_1) {
   VAR_5 = 1;
   break;
  }
 }

 if (VAR_5)
  FUNC_0("omap_hwmod: %s: MPU OCP slave port ID  %d\n",
    VAR_2->name, VAR_4);
 else
  FUNC_0("omap_hwmod: %s: no MPU OCP slave port found\n",
    VAR_2->name);

 return (VAR_5) ? VAR_4 : -VAR_0;
}
