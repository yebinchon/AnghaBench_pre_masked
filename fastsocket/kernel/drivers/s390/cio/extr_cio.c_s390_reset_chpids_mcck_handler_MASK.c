
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mci {int cp; } ;
struct crw {scalar_t__ rsc; scalar_t__ slct; } ;
struct TYPE_2__ {int mcck_interruption_code; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct crw*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct crw VAR_3;
 struct mci *VAR_4;


 VAR_4 = (struct mci *)&VAR_1.mcck_interruption_code;
 if (!VAR_4->cp)
  return;

 while (FUNC_1(&VAR_3) == 0) {

  if (VAR_3.slct && VAR_3.rsc == VAR_0)
   FUNC_0(&VAR_2);
 }
}
