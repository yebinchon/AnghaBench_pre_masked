
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_short ;
struct TYPE_5__ {int misc1; void** timer; void* misc2; } ;
typedef TYPE_2__ cirrus_state_t ;
struct TYPE_4__ {TYPE_2__ cirrus; } ;
struct TYPE_6__ {TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (size_t,scalar_t__) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static void FUNC_2(u_short VAR_5)
{
    int VAR_6;
    cirrus_state_t *VAR_7 = &VAR_4[VAR_5].state.cirrus;
    VAR_7->misc1 = FUNC_1(VAR_5, VAR_2);
    VAR_7->misc1 &= (VAR_1 | VAR_0);
    VAR_7->misc2 = FUNC_1(VAR_5, VAR_3);
    for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
 VAR_7->timer[VAR_6] = FUNC_1(VAR_5, FUNC_0(0)+VAR_6);
}
