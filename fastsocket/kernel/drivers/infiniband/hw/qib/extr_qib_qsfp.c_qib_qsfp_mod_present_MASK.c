
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_pportdata {int hw_pidx; TYPE_1__* dd; } ;
struct TYPE_2__ {int (* f_gpio_mod ) (TYPE_1__*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

int FUNC_1(struct qib_pportdata *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_3 = VAR_0 <<
  (VAR_2->hw_pidx * VAR_1);
 VAR_4 = VAR_2->dd->f_gpio_mod(VAR_2->dd, 0, 0, 0);

 return !((VAR_4 & VAR_3) >>
   ((VAR_2->hw_pidx * VAR_1) + 3));
}
