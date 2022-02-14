
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct kvec {int dummy; } ;
struct jffs2_sb_info {TYPE_1__* mtd; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {int (* writev ) (TYPE_1__*,struct kvec const*,unsigned long,scalar_t__,size_t*) ;} ;


 int FUNC_0 (struct jffs2_sb_info*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct jffs2_sb_info*,struct kvec const*,unsigned long,int ) ;
 int FUNC_3 (TYPE_1__*,struct kvec const*,unsigned long,scalar_t__,size_t*) ;
 int FUNC_4 (TYPE_1__*,struct kvec const*,unsigned long,scalar_t__,size_t*) ;

int FUNC_5(struct jffs2_sb_info *VAR_0, const struct kvec *VAR_1,
         unsigned long VAR_2, loff_t VAR_3, size_t *VAR_4)
{
 if (!FUNC_0(VAR_0)) {
  if (FUNC_1()) {
   int VAR_5;
   VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, (uint32_t) VAR_3);
   if (VAR_5) {
    return VAR_5;
   }
  }
 }

 if (VAR_0->mtd->writev)
  return VAR_0->mtd->writev(VAR_0->mtd, VAR_1, VAR_2, VAR_3, VAR_4);
 else {
  return FUNC_3(VAR_0->mtd, VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
