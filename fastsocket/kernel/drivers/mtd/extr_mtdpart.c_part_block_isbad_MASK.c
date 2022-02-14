
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {TYPE_1__* master; scalar_t__ offset; } ;
struct mtd_info {int size; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* block_isbad ) (TYPE_1__*,int ) ;} ;


 int VAR_0 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, loff_t VAR_2)
{
 struct mtd_part *VAR_3 = FUNC_0(VAR_1);
 if (VAR_2 >= VAR_1->size)
  return -VAR_0;
 VAR_2 += VAR_3->offset;
 return VAR_3->master->block_isbad(VAR_3->master, VAR_2);
}
