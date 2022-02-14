
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* dev; } ;
typedef enum b43_dmatype { ____Placeholder_b43_dmatype } b43_dmatype ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_5__ {scalar_t__ bustype; int host_pci; } ;
struct TYPE_4__ {scalar_t__ bus_type; TYPE_3__* sdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static bool FUNC_2(struct b43_wldev *VAR_5,
         enum b43_dmatype VAR_6)
{
 if (VAR_6 != VAR_1)
  return 1;
 return 0;
}
