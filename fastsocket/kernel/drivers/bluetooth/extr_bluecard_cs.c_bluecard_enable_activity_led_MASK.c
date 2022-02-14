
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int timer; int hw_state; TYPE_2__* p_dev; } ;
typedef TYPE_3__ bluecard_info_t ;
struct TYPE_5__ {unsigned int BasePort1; } ;
struct TYPE_6__ {TYPE_1__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int,unsigned int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(bluecard_info_t *VAR_4)
{
 unsigned int VAR_5 = VAR_4->p_dev->io.BasePort1;

 if (!FUNC_2(VAR_1, &(VAR_4->hw_state)))
  return;

 if (FUNC_2(VAR_0, &(VAR_4->hw_state))) {

  FUNC_1(0x10 | 0x40, VAR_5 + 0x30);


  FUNC_0(&(VAR_4->timer), VAR_3 + VAR_2 / 4);
 } else {

  FUNC_1(0x08 | 0x20, VAR_5 + 0x30);


  FUNC_0(&(VAR_4->timer), VAR_3 + VAR_2 / 2);
 }
}
