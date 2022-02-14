
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcma_device {TYPE_1__* bus; } ;
struct bcma_chipinfo {scalar_t__ id; } ;
struct TYPE_2__ {struct bcma_chipinfo chipinfo; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct bcma_device *VAR_1)
{
 struct bcma_chipinfo *VAR_2 = &VAR_1->bus->chipinfo;

 if (VAR_2->id == VAR_0)
  return 1;

 FUNC_0("unknown chip id %04x\n", VAR_2->id);
 return 0;
}
