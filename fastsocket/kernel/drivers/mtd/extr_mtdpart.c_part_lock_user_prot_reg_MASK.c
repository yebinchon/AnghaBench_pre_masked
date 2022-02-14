
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {TYPE_1__* master; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* lock_user_prot_reg ) (TYPE_1__*,int ,size_t) ;} ;


 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,int ,size_t) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1,
  size_t VAR_2)
{
 struct mtd_part *VAR_3 = FUNC_0(VAR_0);
 return VAR_3->master->lock_user_prot_reg(VAR_3->master, VAR_1, VAR_2);
}
