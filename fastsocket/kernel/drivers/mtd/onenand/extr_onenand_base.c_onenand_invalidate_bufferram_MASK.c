
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct onenand_chip {scalar_t__ page_shift; TYPE_1__* bufferram; } ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ blockpage; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_1, loff_t VAR_2,
  unsigned int VAR_3)
{
 struct onenand_chip *VAR_4 = VAR_1->priv;
 int VAR_5;
 loff_t VAR_6 = VAR_2 + VAR_3;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  loff_t VAR_7 = VAR_4->bufferram[VAR_5].blockpage << VAR_4->page_shift;
  if (VAR_7 >= VAR_2 && VAR_7 < VAR_6)
   VAR_4->bufferram[VAR_5].blockpage = -1;
 }
}
