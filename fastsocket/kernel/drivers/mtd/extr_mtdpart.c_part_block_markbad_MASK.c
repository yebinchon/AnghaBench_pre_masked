
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_part {TYPE_2__* master; scalar_t__ offset; } ;
struct TYPE_3__ {int badblocks; } ;
struct mtd_info {int flags; TYPE_1__ ecc_stats; int size; } ;
typedef int loff_t ;
struct TYPE_4__ {int (* block_markbad ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_3, loff_t VAR_4)
{
 struct mtd_part *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 if (!(VAR_3->flags & VAR_2))
  return -VAR_1;
 if (VAR_4 >= VAR_3->size)
  return -VAR_0;
 VAR_4 += VAR_5->offset;
 VAR_6 = VAR_5->master->block_markbad(VAR_5->master, VAR_4);
 if (!VAR_6)
  VAR_3->ecc_stats.badblocks++;
 return VAR_6;
}
