
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_bus_dev {scalar_t__ bus_type; TYPE_2__* sdev; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {scalar_t__ bustype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct b43_bus_dev *VAR_2)
{
 return (VAR_2->bus_type == VAR_0 &&
  VAR_2->sdev->bus->bustype == VAR_1);
}
