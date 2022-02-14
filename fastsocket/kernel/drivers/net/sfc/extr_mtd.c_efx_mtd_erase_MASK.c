
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct efx_mtd* priv; } ;
struct erase_info {int fail_addr; int state; int len; int addr; } ;
struct efx_mtd {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* erase ) (struct mtd_info*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct erase_info*) ;
 int FUNC_1 (struct mtd_info*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, struct erase_info *VAR_3)
{
 struct efx_mtd *VAR_4 = VAR_2->priv;
 int VAR_5;

 VAR_5 = VAR_4->ops->erase(VAR_2, VAR_3->addr, VAR_3->len);
 if (VAR_5 == 0) {
  VAR_3->state = VAR_0;
 } else {
  VAR_3->state = VAR_1;
  VAR_3->fail_addr = 0xffffffff;
 }
 FUNC_0(VAR_3);
 return VAR_5;
}
