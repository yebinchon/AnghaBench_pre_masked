
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hwmod {int _int_flags; TYPE_1__* sysconfig; int _sysc_cache; int name; } ;
struct TYPE_2__ {int sysc_offs; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct omap_hwmod*,int ) ;

__attribute__((used)) static int FUNC_2(struct omap_hwmod *VAR_2)
{
 if (!VAR_2->sysconfig) {
  FUNC_0(!VAR_2->sysconfig, "omap_hwmod: %s: cannot read "
       "OCP_SYSCONFIG: not defined on hwmod\n", VAR_2->name);
  return -VAR_0;
 }



 VAR_2->_sysc_cache = FUNC_1(VAR_2, VAR_2->sysconfig->sysc_offs);

 VAR_2->_int_flags |= VAR_1;

 return 0;
}
