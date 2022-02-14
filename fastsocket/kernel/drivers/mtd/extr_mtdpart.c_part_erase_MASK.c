
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {scalar_t__ offset; TYPE_1__* master; } ;
struct mtd_info {int flags; scalar_t__ size; } ;
struct erase_info {scalar_t__ addr; scalar_t__ fail_addr; } ;
struct TYPE_2__ {int (* erase ) (TYPE_1__*,struct erase_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,struct erase_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_4, struct erase_info *VAR_5)
{
 struct mtd_part *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;
 if (!(VAR_4->flags & VAR_3))
  return -VAR_1;
 if (VAR_5->addr >= VAR_4->size)
  return -VAR_0;
 VAR_5->addr += VAR_6->offset;
 VAR_7 = VAR_6->master->erase(VAR_6->master, VAR_5);
 if (VAR_7) {
  if (VAR_5->fail_addr != VAR_2)
   VAR_5->fail_addr -= VAR_6->offset;
  VAR_5->addr -= VAR_6->offset;
 }
 return VAR_7;
}
