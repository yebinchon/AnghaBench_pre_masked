
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_6__ {int hw_state; TYPE_2__* p_dev; } ;
typedef TYPE_3__ bluecard_info_t ;
struct TYPE_4__ {unsigned int BasePort1; } ;
struct TYPE_5__ {TYPE_1__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(u_long VAR_2)
{
 bluecard_info_t *VAR_3 = (bluecard_info_t *)VAR_2;
 unsigned int VAR_4 = VAR_3->p_dev->io.BasePort1;

 if (!FUNC_1(VAR_1, &(VAR_3->hw_state)))
  return;

 if (FUNC_1(VAR_0, &(VAR_3->hw_state))) {

  FUNC_0(0x08 | 0x20, VAR_4 + 0x30);
 } else {

  FUNC_0(0x00, VAR_4 + 0x30);
 }
}
