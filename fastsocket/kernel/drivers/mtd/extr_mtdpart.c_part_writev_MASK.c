
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {scalar_t__ offset; TYPE_1__* master; } ;
struct mtd_info {int flags; } ;
struct kvec {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* writev ) (TYPE_1__*,struct kvec const*,unsigned long,scalar_t__,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,struct kvec const*,unsigned long,scalar_t__,size_t*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, const struct kvec *VAR_3,
  unsigned long VAR_4, loff_t VAR_5, size_t *VAR_6)
{
 struct mtd_part *VAR_7 = FUNC_0(VAR_2);
 if (!(VAR_2->flags & VAR_1))
  return -VAR_0;
 return VAR_7->master->writev(VAR_7->master, VAR_3, VAR_4,
     VAR_5 + VAR_7->offset, VAR_6);
}
