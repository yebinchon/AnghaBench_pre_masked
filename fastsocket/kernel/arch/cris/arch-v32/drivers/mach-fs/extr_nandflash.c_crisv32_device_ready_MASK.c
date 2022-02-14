
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_info {int dummy; } ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ reg_gio_r_pa_din ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_4)
{
 reg_gio_r_pa_din VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_2);
 return ((VAR_5.data & (1 << VAR_0)) >> VAR_0);
}
