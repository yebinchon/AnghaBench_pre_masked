
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct omap_hwmod {scalar_t__ _sysc_cache; TYPE_1__* sysconfig; int name; } ;
struct TYPE_2__ {int sysc_offs; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (scalar_t__,struct omap_hwmod*,int ) ;

__attribute__((used)) static void FUNC_2(u32 VAR_0, struct omap_hwmod *VAR_1)
{
 if (!VAR_1->sysconfig) {
  FUNC_0(!VAR_1->sysconfig, "omap_hwmod: %s: cannot write "
       "OCP_SYSCONFIG: not defined on hwmod\n", VAR_1->name);
  return;
 }



 if (VAR_1->_sysc_cache != VAR_0) {
  VAR_1->_sysc_cache = VAR_0;
  FUNC_1(VAR_0, VAR_1, VAR_1->sysconfig->sysc_offs);
 }
}
