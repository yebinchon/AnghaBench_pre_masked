
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int dummy; } ;
struct TYPE_2__ {struct mtd_concat* eraseregions; scalar_t__ numeraseregions; } ;
struct mtd_concat {TYPE_1__ mtd; } ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct mtd_concat*) ;

void FUNC_2(struct mtd_info *VAR_0)
{
 struct mtd_concat *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->mtd.numeraseregions)
  FUNC_1(VAR_1->mtd.eraseregions);
 FUNC_1(VAR_1);
}
