
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_part {scalar_t__ offset; TYPE_2__* master; } ;
struct mtd_oob_ops {scalar_t__ len; scalar_t__ datbuf; } ;
struct TYPE_3__ {int failed; int corrected; } ;
struct mtd_info {scalar_t__ size; TYPE_1__ ecc_stats; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {int (* read_oob ) (TYPE_2__*,scalar_t__,struct mtd_oob_ops*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,struct mtd_oob_ops*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_3, loff_t VAR_4,
  struct mtd_oob_ops *VAR_5)
{
 struct mtd_part *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 if (VAR_4 >= VAR_3->size)
  return -VAR_1;
 if (VAR_5->datbuf && VAR_4 + VAR_5->len > VAR_3->size)
  return -VAR_1;
 VAR_7 = VAR_6->master->read_oob(VAR_6->master, VAR_4 + VAR_6->offset, VAR_5);

 if (FUNC_2(VAR_7)) {
  if (VAR_7 == -VAR_2)
   VAR_3->ecc_stats.corrected++;
  if (VAR_7 == -VAR_0)
   VAR_3->ecc_stats.failed++;
 }
 return VAR_7;
}
