
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int id; } ;
struct bcma_device {TYPE_2__* bus; TYPE_1__ id; } ;
struct TYPE_4__ {struct bcma_device* mapped_core; } ;




 int VAR_0 ;
 int FUNC_0 (struct bcma_device*) ;

__attribute__((used)) static u16 FUNC_1(struct bcma_device *VAR_1)
{
 switch (VAR_1->id.id) {
 case 129:
  return 3 * VAR_0;
 case 128:
  return 2 * VAR_0;
 }

 if (VAR_1->bus->mapped_core != VAR_1)
  FUNC_0(VAR_1);
 return 0;
}
