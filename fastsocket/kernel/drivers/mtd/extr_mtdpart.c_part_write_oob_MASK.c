
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {scalar_t__ offset; TYPE_1__* master; } ;
struct mtd_oob_ops {scalar_t__ len; scalar_t__ datbuf; } ;
struct mtd_info {int flags; scalar_t__ size; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* write_oob ) (TYPE_1__*,scalar_t__,struct mtd_oob_ops*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_3, loff_t VAR_4,
  struct mtd_oob_ops *VAR_5)
{
 struct mtd_part *VAR_6 = FUNC_0(VAR_3);

 if (!(VAR_3->flags & VAR_2))
  return -VAR_1;

 if (VAR_4 >= VAR_3->size)
  return -VAR_0;
 if (VAR_5->datbuf && VAR_4 + VAR_5->len > VAR_3->size)
  return -VAR_0;
 return VAR_6->master->write_oob(VAR_6->master, VAR_4 + VAR_6->offset, VAR_5);
}
