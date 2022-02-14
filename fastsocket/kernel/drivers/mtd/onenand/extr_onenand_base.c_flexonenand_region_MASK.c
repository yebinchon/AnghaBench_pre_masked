
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int numeraseregions; TYPE_1__* eraseregions; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ offset; } ;



int FUNC_0(struct mtd_info *VAR_0, loff_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->numeraseregions; VAR_2++)
  if (VAR_1 < VAR_0->eraseregions[VAR_2].offset)
   break;
 return VAR_2 - 1;
}
