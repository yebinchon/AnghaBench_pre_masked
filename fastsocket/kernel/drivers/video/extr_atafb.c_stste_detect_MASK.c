
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atafb_par {int dummy; } ;
struct TYPE_4__ {int par_dt_reg; } ;
struct TYPE_3__ {int ctrl; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int *,struct atafb_par*) ;
 int FUNC_2 (struct atafb_par*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct atafb_par VAR_8;





 if (FUNC_0(VAR_2)) {
  VAR_6.ctrl = VAR_0;
  FUNC_3(20);
 }
 VAR_4 = (VAR_5.par_dt_reg & 0x80) == 0;

 FUNC_2(&VAR_8);
 FUNC_1(&VAR_3[0], &VAR_8);

 if (!FUNC_0(VAR_1))
  VAR_7 = 0;
 return 1;
}
