
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int wkup_maste; int wkup_itype; int wkup_inten; int wkup_ddr; int wkup_gpioe; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(u8 VAR_1, u8 VAR_2)
{
 u16 VAR_3;


 FUNC_2(&VAR_0->wkup_gpioe, FUNC_0(&VAR_0->wkup_gpioe) | (1 << VAR_1));

 FUNC_2(&VAR_0->wkup_ddr, FUNC_0(&VAR_0->wkup_ddr) & ~(1 << VAR_1));

 FUNC_2(&VAR_0->wkup_inten, FUNC_0(&VAR_0->wkup_inten) | (1 << VAR_1));

 VAR_3 = FUNC_1(&VAR_0->wkup_itype);
 VAR_3 &= ~(0x3 << (VAR_1 * 2));
 VAR_3 |= (!VAR_2 + 1) << (VAR_1 * 2);
 FUNC_3(&VAR_0->wkup_itype, VAR_3);

 FUNC_2(&VAR_0->wkup_maste, 1);

 return 0;
}
