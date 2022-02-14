
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int trig; } ;
typedef TYPE_1__ reg_timer_r_masked_intr ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_2(int VAR_5, void *VAR_6)
{
  reg_timer_r_masked_intr VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_3, VAR_2);
  if (!VAR_7.trig)
    return VAR_1;
 FUNC_1(((void*)0));
  return VAR_0;
}
