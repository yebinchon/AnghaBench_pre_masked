
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {TYPE_1__* hba_bus; } ;
struct lba_device {TYPE_2__ hba; } ;
struct TYPE_3__ {scalar_t__ secondary; scalar_t__ subordinate; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(u8 VAR_1, u8 VAR_2, struct lba_device *VAR_3)
{
 u8 VAR_4 = VAR_3->hba.hba_bus->secondary;
 u8 VAR_5 = VAR_3->hba.hba_bus->subordinate;

 if ((VAR_1 < VAR_4) ||
     (VAR_1 > VAR_5) ||
     ((VAR_1 - VAR_4) >= VAR_0)) {
  return 0;
 }

 return 1;
}
