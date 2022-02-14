
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_hwmod {TYPE_1__* sysconfig; } ;
struct TYPE_2__ {int sysc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct omap_hwmod *VAR_3, u32 *VAR_4)
{
 if (!VAR_3->sysconfig ||
     !(VAR_3->sysconfig->sysc_flags & VAR_1))
  return -VAR_0;

 *VAR_4 |= VAR_2;

 return 0;
}
