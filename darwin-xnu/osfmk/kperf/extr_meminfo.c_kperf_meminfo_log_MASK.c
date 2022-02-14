
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meminfo {int purgeable_volatile_compressed; int purgeable_volatile; int phys_footprint; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;

void
FUNC_1(struct meminfo *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->phys_footprint, VAR_1->purgeable_volatile,
          VAR_1->purgeable_volatile_compressed);
}
