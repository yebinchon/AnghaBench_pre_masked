
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {TYPE_1__* master; scalar_t__ offset; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {unsigned long (* get_unmapped_area ) (TYPE_1__*,unsigned long,unsigned long,unsigned long) ;} ;


 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 unsigned long FUNC_1 (TYPE_1__*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct mtd_info *VAR_0,
         unsigned long VAR_1,
         unsigned long VAR_2,
         unsigned long VAR_3)
{
 struct mtd_part *VAR_4 = FUNC_0(VAR_0);

 VAR_2 += VAR_4->offset;
 return VAR_4->master->get_unmapped_area(VAR_4->master, VAR_1, VAR_2,
            VAR_3);
}
