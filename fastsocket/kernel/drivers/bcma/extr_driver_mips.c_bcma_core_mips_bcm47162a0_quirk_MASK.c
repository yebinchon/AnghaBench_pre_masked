
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ id; } ;
struct bcma_device {TYPE_3__ id; TYPE_2__* bus; } ;
struct TYPE_4__ {scalar_t__ id; scalar_t__ rev; } ;
struct TYPE_5__ {TYPE_1__ chipinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct bcma_device *VAR_2)
{
 return VAR_2->bus->chipinfo.id == VAR_0 &&
        VAR_2->bus->chipinfo.rev == 0 && VAR_2->id.id == VAR_1;
}
