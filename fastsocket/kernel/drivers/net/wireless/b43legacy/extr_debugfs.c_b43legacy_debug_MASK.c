
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43legacy_wldev {TYPE_1__* dfsentry; } ;
typedef enum b43legacy_dyndbg { ____Placeholder_b43legacy_dyndbg } b43legacy_dyndbg ;
struct TYPE_2__ {scalar_t__* dyn_debug; } ;



int FUNC_0(struct b43legacy_wldev *VAR_0, enum b43legacy_dyndbg VAR_1)
{
 return !!(VAR_0->dfsentry && VAR_0->dfsentry->dyn_debug[VAR_1]);
}
