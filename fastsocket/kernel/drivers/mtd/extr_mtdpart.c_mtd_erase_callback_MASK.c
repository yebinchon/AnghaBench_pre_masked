
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {scalar_t__ offset; } ;
struct erase_info {scalar_t__ fail_addr; int (* callback ) (struct erase_info*) ;int addr; TYPE_1__* mtd; } ;
struct TYPE_2__ {scalar_t__ erase; } ;


 scalar_t__ VAR_0 ;
 struct mtd_part* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct erase_info*) ;

void FUNC_2(struct erase_info *VAR_2)
{
 if (VAR_2->mtd->erase == VAR_1) {
  struct mtd_part *VAR_3 = FUNC_0(VAR_2->mtd);

  if (VAR_2->fail_addr != VAR_0)
   VAR_2->fail_addr -= VAR_3->offset;
  VAR_2->addr -= VAR_3->offset;
 }
 if (VAR_2->callback)
  VAR_2->callback(VAR_2);
}
