
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_hwmod {int _int_flags; int _sysc_cache; TYPE_1__* sysconfig; } ;
struct TYPE_2__ {int sysc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct omap_hwmod*) ;

__attribute__((used)) static int FUNC_1(struct omap_hwmod *VAR_4)
{
 u32 VAR_5;

 if (!VAR_4->sysconfig ||
     !(VAR_4->sysconfig->sysc_flags & VAR_2))
  return -VAR_0;

 VAR_5 = VAR_4->_sysc_cache;
 VAR_5 &= ~VAR_1;
 FUNC_0(VAR_5, VAR_4);



 VAR_4->_int_flags &= ~VAR_3;

 return 0;
}
