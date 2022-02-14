
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mtd_part {scalar_t__ offset; TYPE_1__* master; } ;
struct mtd_info {scalar_t__ size; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* lock ) (TYPE_1__*,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, loff_t VAR_2, uint64_t VAR_3)
{
 struct mtd_part *VAR_4 = FUNC_0(VAR_1);
 if ((VAR_3 + VAR_2) > VAR_1->size)
  return -VAR_0;
 return VAR_4->master->lock(VAR_4->master, VAR_2 + VAR_4->offset, VAR_3);
}
