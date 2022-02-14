
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_card {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* update_phy_reg ) (struct fw_card*,int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fw_card*,int,int ,int) ;

int FUNC_1(struct fw_card *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 ? 5 : 1;
 int VAR_5 = VAR_3 ? VAR_1 : VAR_0;

 return VAR_2->driver->update_phy_reg(VAR_2, VAR_4, 0, VAR_5);
}
