
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct b43legacy_wldev {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {scalar_t__ vendor; } ;
struct TYPE_5__ {TYPE_1__ boardinfo; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline
bool FUNC_0(struct b43legacy_wldev *VAR_1)
{
 return (VAR_1->dev->bus->boardinfo.vendor == VAR_0);
}
