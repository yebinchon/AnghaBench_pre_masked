
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_info {int dummy; } ;
struct TYPE_3__ {int rdy; } ;
typedef TYPE_1__ reg_pio_r_din ;


 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_3)
{
 reg_pio_r_din VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_1);
 return VAR_4.rdy;
}
